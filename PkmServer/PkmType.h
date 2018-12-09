#ifndef _POKEMONH
#define _POKEMONH
#include "pokemon.h"
#endif // !_PKMTYPE

class StrPkm :public Pokemon {  //力量型精灵
public:
	StrPkm();//初始化
	void ChangeAtt();
};
class IntPkm :public Pokemon {  //智力型精灵
public:
	IntPkm();//初始化
	void ChangeAtt();
};
class PhyPkm :public Pokemon {  //体力型精灵
public:
	PhyPkm();//初始化
	void ChangeAtt();
};
class StaPkm :public Pokemon {  //耐力型精灵
public:
	StaPkm();//初始化
	void ChangeAtt();
};
class AgiPkm :public Pokemon {  //敏捷型精灵
public:
	AgiPkm();//初始化
	void ChangeAtt();
};