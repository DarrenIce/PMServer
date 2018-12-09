#ifndef _POKEMONH
#define _POKEMONH
#include "pokemon.h"
#endif // !_PROPERTY

class Property {
public:
	PPT Ppt;//属性
	PPT Ppt2;//副属性
	bool isside;//是否有副属性
	Move Attack;//普通攻击

	Property();//初始化
	double PptRestraint(PPT AnoPpt);//属性克制函数
};