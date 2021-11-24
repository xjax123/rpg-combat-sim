//playerbody.cpp

#include "basicbody.cpp"
#include <string>

class playerbody : basicbody {
private:
	std::string name;
public:
	//Basic Constructor
	playerbody(){}
	
	//Advanced Constructor
	playerbody(std::string setname, int hp, int def, int atk) {
		name = setname;
		health = hp;
		defense = def;
		attack = atk;
		state = true;
	}

	//Basic Destructor
	~playerbody() {}
};