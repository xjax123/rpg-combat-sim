#pragma once

#include "basicbody.h"

namespace attack {
	//template class, provides basic utilities for constructing attacks
	class basicattack {
	protected:
		int damage; //damage per hit
		int number; //number of hits
		void setDamage(int dam);
		void setNumber(int num);
	public:
		basicattack();
		~basicattack();
		int getDamage();
		int getNumber();
		virtual int attack(body::basicbody target);
	};
}