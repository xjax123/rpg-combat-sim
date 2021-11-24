//playerbody.cpp

#include "playerbody.h"
using body::playerbody;

//Basic Constructor
playerbody::playerbody() {}
	
//Advanced Constructor
playerbody::playerbody(std::string setname, int hp, int def, int atk) {
	name = setname;
	health = hp;
	defense = def;
	attack = atk;
	state = true;
}

//Basic Destructor
playerbody::~playerbody() {}