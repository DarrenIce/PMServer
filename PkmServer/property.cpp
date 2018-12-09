#ifndef _PROPERTY
#define _PROPERTY
#include "Property.h"
#endif // !_PROPERTY

double Property::PptRestraint(PPT AnoPpt)
{
	switch (Ppt)
	{
	case Normal:
		switch (AnoPpt)
		{
		case Ghost: return 0;
		case Rock:return 0.5;
		case Steel:return 0.5;
		default:return 1;
		}
	case Fire:
		switch (AnoPpt)
		{
		case Fire: return 0.5;
		case Rock:return 0.5;
		case Water:return 0.5;
		case Dragon:return 0.5;
		case Bug:return 2;
		case Grass:return 2;
		case Ice:return 2;
		case Steel:return 2;
		default:return 1;
		}
	case Bug:
		switch (AnoPpt)
		{
		case Ghost: return 0.5;
		case Poison:return 0.5;
		case Flying:return 0.5;
		case Fighting:return 0.5;
		case Fire:return 0.5;
		case Fairy:return 0.5;
		case Steel:return 0.5;
		case Grass:return 2;
		case Psychic:return 2;
		case Dark:return 2;
		default:return 1;
		}
	case Water:
		switch (AnoPpt)
		{
		case Water: return 0.5;
		case Grass:return 0.5;
		case Dragon:return 0.5;
		case Ground:return 2;
		case Fire:return 2;
		case Rock:return 2;
		default:return 1;
		}
	case Poison:
		switch (AnoPpt)
		{
		case Steel: return 0;
		case Rock:return 0.5;
		case Poison:return 0.5;
		case Ground:return 0.5;
		case Ghost:return 0.5;
		case Grass:return 2;
		case Fairy:return 2;
		default:return 1;
		}
	case Electric:
		switch (AnoPpt)
		{
		case Ground: return 0;
		case Electric:return 0.5;
		case Grass:return 0.5;
		case Dragon:return 0.5;
		case Flying:return 2;
		case Water:return 2;
		default:return 1;
		}
	case Flying:
		switch (AnoPpt)
		{
		case Electric: return 0.5;
		case Rock:return 0.5;
		case Steel:return 0.5;
		case Bug:return 2;
		case Fighting:return 2;
		case Grass:return 2;
		default:return 1;
		}
	case Grass:
		switch (AnoPpt)
		{
		case Electric: return 0.5;
		case Poison:return 0.5;
		case Flying:return 0.5;
		case Fire:return 0.5;
		case Grass:return 0.5;
		case Dragon:return 0.5;
		case Steel:return 0.5;
		case Ground:return 2;
		case Water:return 2;
		case Rock:return 2;
		default:return 1;
		}
	case Ground:
		switch (AnoPpt)
		{
		case Flying: return 0;
		case Bug:return 0.5;
		case Grass:return 0.5;
		case Poison:return 2;
		case Fire:return 2;
		case Electric:return 2;
		case Rock:return 2;
		case Steel:return 2;
		default:return 1;
		}
	case Ice:
		switch (AnoPpt)
		{
		case Fire: return 0.5;
		case Water:return 0.5;
		case Ice:return 0.5;
		case Steel:return 0.5;
		case Flying:return 2;
		case Ground:return 2;
		case Grass:return 2;
		case Dragon:return 2;
		default:return 1;
		}
	case Fighting:
		switch (AnoPpt)
		{
		case Ghost: return 0;
		case Bug:return 0.5;
		case Poison:return 0.5;
		case Flying:return 0.5;
		case Psychic:return 0.5;
		case Fairy:return 0.5;
		case Normal:return 2;
		case Rock:return 2;
		case Ice:return 2;
		case Steel:return 2;
		case Dark:return 2;
		default:return 1;
		}
	case Psychic:
		switch (AnoPpt)
		{
		case Dark: return 0;
		case Psychic:return 0.5;
		case Steel:return 0.5;
		case Poison:return 2;
		case Fighting:return 2;
		default:return 1;
		}
	case Rock:
		switch (AnoPpt)
		{
		case Ground: return 0.5;
		case Fighting:return 0.5;
		case Steel:return 0.5;
		case Bug:return 2;
		case Flying:return 2;
		case Fire:return 2;
		case Ice:return 2;
		default:return 1;
		}
	case Ghost:
		switch (AnoPpt)
		{
		case Normal: return 0;
		case Dark:return 0.5;
		case Psychic:return 2;
		case Ghost:return 2;
		default:return 1;
		}
	case Dragon:
		switch (AnoPpt)
		{
		case Fairy: return 0;
		case Steel:return 0.5;
		case Dragon:return 2;
		default:return 1;
		}
	case Dark:
		switch (AnoPpt)
		{
		case Fighting: return 0.5;
		case Dark:return 0.5;
		case Fairy:return 0.5;
		case Psychic:return 2;
		case Ghost:return 2;
		default:return 1;
		}
	case Steel:
		switch (AnoPpt)
		{
		case Water: return 0.5;
		case Fire:return 0.5;
		case Electric:return 0.5;
		case Steel:return 0.5;
		case Ice:return 2;
		case Rock:return 2;
		case Fairy:return 2;
		default:return 1;
		}
	case Fairy:
		switch (AnoPpt)
		{
		case Poison: return 0.5;
		case Fire:return 0.5;
		case Steel:return 0.5;
		case Fighting:return 2;
		case Dragon:return 2;
		case Dark:return 2;
		default:return 1;
		}
	}
}
Property::Property()
{
	Attack.name = "ÆÕÍ¨¹¥»÷";
	Attack.levelreq = 1;
	Attack.learn = true;
	Attack.able = true;
	Attack.kind = Physical;
	Attack.power = 30;
	Attack.accuracy = 100;
	Attack.pp = 0;
	Attack.ae = Nu;
	isside = false;
}