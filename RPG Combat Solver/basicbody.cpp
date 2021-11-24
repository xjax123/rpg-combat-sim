//basicbody.h

#include "basicbody.h"
using body::basicbody;

//Mutators for Internal Use.
void basicbody::setHealth(int newHP) {
	if (newHP > 0) {
		health = newHP;
	}
	else {
		health = 0;
		setState(false);
	}
}
void basicbody::setDefense(int newDef) {
	defense = newDef;
}
void basicbody::setAttack(int newAtk) {
	if (newAtk < 0) {
		attack = newAtk;
	}
	else {
		attack = 0;
	}
}
void basicbody::setState(bool newState) {
	state = newState;
}

//Accessors 
int basicbody::getHealth() {
	return health;
}
int basicbody::getDefense() {
	return defense;
}
int basicbody::getAttack() {
	return attack;
}
bool basicbody::getState() {
	return state;
}

//Gameplay Functions(should be called over Mutators if possible)

//Deals with damage calculations and returns the actual damage dealt to target.
int basicbody::damage(int damage) {
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
void basicbody::reduceHP(int hpReduction) {
	int curHP = getHealth();
	int newHP = curHP - hpReduction;

	setHealth(newHP);
}
	
//Attack/Defense Reduction effects, self explanitory.
void basicbody::reduceATK(int atkReduction) {
	int curATK = getAttack();
	int newATK = curATK - atkReduction;

	setAttack(newATK);
}
void basicbody::reduceDEF(int defReduction) {
	int curDEF = getDefense();
	int newDEF = curDEF - defReduction;

	setDefense(newDEF);
}