#pragma once
namespace body {
	//template class, provides basic utilities for interacting with common elements.
	class basicbody {
	protected:
		int health;
		int defense;
		int attack;
		bool state;

		void setHealth(int newHP);
		void setDefense(int newDef);
		void setAttack(int newAtk);
		void setState(bool newState);
	public:
		basicbody();
		~basicbody();
		int getHealth();
		int getDefense();
		int getAttack();
		bool getState();
		int damage(int damage);
		void reduceHP(int hpReduction);
		void reduceATK(int atkReduction);
		void reduceDEF(int defReduction);
	};
}