#pragma once
#include "basicbody.h"
#include <vector>

namespace combat {
	//class for containing all information about the combat, and providing utilities for interaction.
	class combatcontainer
	{
	private:
		std::vector<body::basicbody> actorsFull; //participants in the combat
		int noActors; //number of actors
		body::basicbody * order; //order of the combat
		int round;
	public:
		combatcontainer(body::basicbody actors[]);
		~combatcontainer();
	};
}