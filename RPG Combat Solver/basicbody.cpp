//body.cpp
#include "basicbody.h"

//template class, provides basic utilities for interacting with common elements.
class basicbody {
protected:
	int health;
	int defense;
	int attack;
	bool state; //True for alive, false for dead.

	//Mutators for Internal Use.
	void setHealth(int newHP) {
		if (newHP > 0) {
			health = newHP;
		}
		else {
			health = 0;
			setState(false);
		}
	}
	void setDefense(int newDef) {
		defense = newDef;
	}
	void setAttack(int newAtk) {
		if (newAtk < 0) {
			attack = newAtk;
		}
		else {
			attack = 0;
		}
	}
	void setState(bool newState) {
		state = newState;
	}
public:
	//basic constructor/destructor
	basicbody() {}
	~basicbody() {}

	//Accessors 
	int getHealth() {
		return health;
	}
	int getDefense() {
		return defense;
	}
	int getAttack() {
		return attack;
	}
	bool getState() {
		return state;
	}

	//Gameplay Functions(should be called over Mutators if possible)

	//Deals with damage calculations and returns the actual damage dealt to target.
	int damage(int damage) {
		int curHP = getHealth();
		int curDEF = getDefense();
		int damageDealt = damage - curDEF;
		if (damageDealt > 0) {
			setHealth(curHP-damageDealt);
			return damageDealt;
		}
		else {
			//Minimum damage is 1.
			setHealth(curHP - 1);
			return 1;
		}
	}

	//for reducting HP directly (such as direct damage) use damage when not dealing with direct damage.
	void reduceHP(int hpReduction) {
		int curHP = getHealth();
		int newHP = curHP - hpReduction;

		setHealth(newHP);
	}
	
	//Attack/Defense Reduction effects, self explanitory.
	void reduceATK(int atkReduction) {
		int curATK = getAttack();
		int newATK = curATK - atkReduction;

		setAttack(newATK);
	}
	void reduceDEF(int defReduction) {
		int curDEF = getDefense();
		int newDEF = curDEF - defReduction;

		setDefense(newDEF);
	}
};