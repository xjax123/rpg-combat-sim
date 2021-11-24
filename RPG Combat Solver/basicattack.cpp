//basicattack.cpp

#include "basicattack.h"

using attack::basicattack;

void basicattack::setDamage(int dam) {
	if (dam > 0) {
		damage = dam;
	}
	else {
		damage = 0;
	}
}

void basicattack::setNumber(int num) {

}

basicattack::basicattack() {}
basicattack::~basicattack() {}

int basicattack::getDamage() {
	return damage;
}

int basicattack::getNumber() {
	return number;
}

int basicattack::attack(body::basicbody target) {
	int totalDamage = 0;
	for (int i = 0; number > i; i++) {
		 totalDamage += target.damage(damage);
	}
	return totalDamage;
}