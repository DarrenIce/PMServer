#pragma once
#include "pokemon.h"

class Skill {
public:
	Move skills[1000];
	int al_have_skills;//已经拥有的技能数
	int skill_list[100];
	int skill_bar[4];//技能栏 0为普通攻击 -1为没有放置技能
	Skill();
	Skill(PMList pmlist);
};