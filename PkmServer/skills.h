#pragma once
#include "pokemon.h"

class Skill {
public:
	Move skills[1000];
	int al_have_skills;//�Ѿ�ӵ�еļ�����
	int skill_list[100];
	int skill_bar[4];//������ 0Ϊ��ͨ���� -1Ϊû�з��ü���
	Skill();
	Skill(PMList pmlist);
};