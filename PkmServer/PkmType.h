#ifndef _POKEMONH
#define _POKEMONH
#include "pokemon.h"
#endif // !_PKMTYPE

class StrPkm :public Pokemon {  //�����;���
public:
	StrPkm();//��ʼ��
	void ChangeAtt();
};
class IntPkm :public Pokemon {  //�����;���
public:
	IntPkm();//��ʼ��
	void ChangeAtt();
};
class PhyPkm :public Pokemon {  //�����;���
public:
	PhyPkm();//��ʼ��
	void ChangeAtt();
};
class StaPkm :public Pokemon {  //�����;���
public:
	StaPkm();//��ʼ��
	void ChangeAtt();
};
class AgiPkm :public Pokemon {  //�����;���
public:
	AgiPkm();//��ʼ��
	void ChangeAtt();
};