//playerbody.h
#pragma once

#include <string>
#include "basicbody.h"

namespace body {
	class playerbody : basicbody {
	private:
		std::string name;
	public:
		playerbody();
		playerbody(std::string setname, int hp, int def, int atk);
		~playerbody();
	};
}