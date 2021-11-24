#include "combat.h"
using combat::combatcontainer;

//accepts an array of actors, cannot be more than 100.
combatcontainer::combatcontainer(body::basicbody actors[]) {
	noActors = sizeof(actors) / sizeof(*actors);
	actorsFull.insert(actorsFull.begin(), actors, actors+noActors);
}