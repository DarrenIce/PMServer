#ifndef _POKEMONH
#define _POKEMONH
#include "pokemon.h"
#endif // !_PROPERTY

class Property {
public:
	PPT Ppt;//����
	PPT Ppt2;//������
	bool isside;//�Ƿ��и�����
	Move Attack;//��ͨ����

	Property();//��ʼ��
	double PptRestraint(PPT AnoPpt);//���Կ��ƺ���
};