#ifndef _SKILLS
#define _SKILLS
#include "Skills.h"
#endif

Skill::Skill()
{
	std::cout << "5678\n";
	//000-½ÐÉù---03
	{
		skills[0].name = "½ÐÉù";
		skills[0].levelreq = 3;
		skills[0].ppt = Normal;
		skills[0].kind = Change;
		skills[0].power = 0;
		skills[0].accuracy = 100;
		skills[0].pp = 40;
		skills[0].residual = skills[0].pp;
		skills[0].ae = AtkDn;
		skills[0].pb = 0;
	}
	//001-¼ÄÉúÖÖ×Ó---07
	{
		skills[1].name = "¼ÄÉúÖÖ×Ó";
		skills[1].levelreq = 7;
		skills[1].ppt = Grass;
		skills[1].kind = Change;
		skills[1].power = 0;
		skills[1].accuracy = 90;
		skills[1].pp = 10;
		skills[1].residual = skills[1].pp;
		skills[1].ae = leech;
		skills[1].pb = 0;
	}
	//002-ÌÙ±Þ---09
	{
		skills[2].name = "ÌÙ±Þ";
		skills[2].levelreq = 9;
		skills[2].ppt = Grass;
		skills[2].kind = Physical;
		skills[2].power = 45;
		skills[2].accuracy = 100;
		skills[2].pp = 25;
		skills[2].residual = skills[2].pp;
		skills[2].ae = Nu;
		skills[2].pb = 0;
	}
	//003-¶¾·Û---13
	{
		skills[3].name = "¶¾·Û";
		skills[3].levelreq = 13;
		skills[3].ppt = Poison;
		skills[3].kind = Change;
		skills[3].power = 0;
		skills[3].accuracy = 75;
		skills[3].pp = 35;
		skills[3].residual = skills[3].pp;
		skills[3].ae = poison;
		skills[3].pb = 0;
	}
	//004-´ßÃß·Û---13
	{
		skills[4].name = "´ßÃß·Û";
		skills[4].levelreq = 13;
		skills[4].ppt = Grass;
		skills[4].kind = Change;
		skills[4].power = 0;
		skills[4].accuracy = 75;
		skills[4].pp = 15;
		skills[4].residual = skills[4].pp;
		skills[4].ae = sleep;
		skills[4].pb = 0;
	}
	//005-·ÉÒ¶¿ìµ¶---17
	{
		skills[5].name = "·ÉÒ¶¿ìµ¶";
		skills[5].levelreq = 17;
		skills[5].ppt = Grass;
		skills[5].kind = Physical;
		skills[5].power = 55;
		skills[5].accuracy = 95;
		skills[5].pp = 25;
		skills[5].residual = skills[5].pp;
		skills[5].ae = CthUp;
		skills[5].pb = 10;
	}
	//006-ÉáÉí³å×²---25
	{
		skills[6].name = "ÉáÉí³å×²";
		skills[6].levelreq = 25;
		skills[6].ppt = Normal;
		skills[6].kind = Physical;
		skills[6].power = 120;
		skills[6].accuracy = 100;
		skills[6].pp = 15;
		skills[6].residual = skills[6].pp;
		skills[6].ae = reflect;
		skills[6].pb = 0;
	}
	//007-¹âºÏ×÷ÓÃ---33
	{
		skills[7].name = "¹âºÏ×÷ÓÃ";
		skills[7].levelreq = 33;
		skills[7].ppt = Grass;
		skills[7].kind = Change;
		skills[7].power = 0;
		skills[7].accuracy = 0;
		skills[7].pp = 5;
		skills[7].residual = skills[7].pp;
		skills[7].ae = heal;
		skills[7].pb = 0;
	}
	//008-ÖÖ×ÓÕ¨µ¯---37
	{
		skills[8].name = "ÖÖ×ÓÕ¨µ¯";
		skills[8].levelreq = 37;
		skills[8].ppt = Grass;
		skills[8].kind = Physical;
		skills[8].power = 80;
		skills[8].accuracy = 100;
		skills[8].pp = 15;
		skills[8].residual = skills[8].pp;
		skills[8].ae = Nu;
		skills[8].pb = 0;
	}
	//009-ÈÕ¹âÊø---44
	{
		skills[9].name = "ÈÕ¹âÊø";
		skills[9].levelreq = 44;
		skills[9].ppt = Grass;
		skills[9].kind = Special;
		skills[9].power = 120;
		skills[9].accuracy = 100;
		skills[9].pp = 10;
		skills[9].residual = skills[9].pp;
		skills[9].ae = Nu;
		skills[9].pb = 0;
	}
	//010-³¬¼¶ÎüÈ¡---40
	{
		skills[10].name = "ÖÕ¼«ÎüÈ¡";
		skills[10].levelreq = 40;
		skills[10].ppt = Grass;
		skills[10].kind = Special;
		skills[10].power = 40;
		skills[10].accuracy = 100;
		skills[10].pp = 15;
		skills[10].residual = skills[10].pp;
		skills[10].ae = drain;
		skills[10].pb = 0;
	}
	//011-³É³¤---21
	{
		skills[11].name = "³É³¤";
		skills[11].levelreq = 21;
		skills[11].ppt = Normal;
		skills[11].kind = Change;
		skills[11].power = 0;
		skills[11].accuracy = 0;
		skills[11].pp = 40;
		skills[11].residual = skills[11].pp;
		skills[11].ae = AtkUp;
		skills[11].pb = 0;
	}
	//012-»ð»¨---09
	{
		skills[12].name = "»ð»¨";
		skills[12].levelreq = 9;
		skills[12].ppt = Fire;
		skills[12].kind = Special;
		skills[12].power = 40;
		skills[12].accuracy = 100;
		skills[12].pp = 30;
		skills[12].residual = skills[12].pp;
		skills[12].ae = burn;
		skills[12].pb = 10;
	}
	//013-µÉÑÛ---15
	{
		skills[13].name = "µÉÑÛ";
		skills[13].levelreq = 15;
		skills[13].ppt = Normal;
		skills[13].kind = Change;
		skills[13].power = 0;
		skills[13].accuracy = 100;
		skills[13].pp = 35;
		skills[13].residual = skills[13].pp;
		skills[13].ae = DefDn;
		skills[13].pb = 0;
	}
	//014-·ßÅ­---22
	{
		skills[14].name = "·ßÅ­";
		skills[14].levelreq = 22;
		skills[14].ppt = Normal;
		skills[14].kind = Physical;
		skills[14].power = 20;
		skills[14].accuracy = 100;
		skills[14].pp = 30;
		skills[14].residual = skills[14].pp;
		skills[14].ae = AtkUp;
		skills[14].pb = 0;
	}
	//015-Åü¿ª---30
	{
		skills[15].name = "Åü¿ª";
		skills[15].levelreq = 30;
		skills[15].ppt = Normal;
		skills[15].kind = Physical;
		skills[15].power = 70;
		skills[15].accuracy = 100;
		skills[15].pp = 25;
		skills[15].residual = skills[15].pp;
		skills[15].ae = CthUp;
		skills[15].pb = 10;
	}
	//016-ÅçÉä»ðÑæ---38
	{
		skills[16].name = "ÅçÉä»ðÑæ";
		skills[16].levelreq = 38;
		skills[16].ppt = Fire;
		skills[16].kind = Special;
		skills[16].power = 90;
		skills[16].accuracy = 100;
		skills[16].pp = 15;
		skills[16].residual = skills[16].pp;
		skills[16].ae = burn;
		skills[16].pb = 10;
	}
	//017-»ðÑæäöÎÐ---46
	{
		skills[17].name = "»ðÑæäöÎÐ";
		skills[17].levelreq = 46;
		skills[17].ppt = Fire;
		skills[17].kind = Special;
		skills[17].power = 35;
		skills[17].accuracy = 85;
		skills[17].pp = 15;
		skills[17].residual = skills[17].pp;
		skills[17].ae = burn;
		skills[17].pb = 0;
	}
	//018-ÑÌÄ»---10
	{
		skills[18].name = "ÑÌÄ»";
		skills[18].levelreq = 10;
		skills[18].ppt = Normal;
		skills[18].kind = Change;
		skills[18].power = 0;
		skills[18].accuracy = 100;
		skills[18].pp = 25;
		skills[18].residual = skills[18].pp;
		skills[18].ae = AccDn;
		skills[18].pb = 0;
	}
	//019-ÁúÖ®Å­---19
	{
		skills[19].name = "ÁúÖ®Å­";
		skills[19].levelreq = 19;
		skills[19].ppt = Dragon;
		skills[19].kind = Special;
		skills[19].power = 40;
		skills[19].accuracy = 100;
		skills[19].pp = 10;
		skills[19].residual = skills[19].pp;
		skills[19].ae = Nu;
		skills[19].pb = 0;
	}
	//020-»ðÖ®ÑÀ---26
	{
		skills[20].name = "»ðÖ®ÑÀ";
		skills[20].levelreq = 26;
		skills[20].ppt = Fire;
		skills[20].kind = Physical;
		skills[20].power = 65;
		skills[20].accuracy = 95;
		skills[20].pp = 15;
		skills[20].residual = skills[20].pp;
		skills[20].ae = burn;
		skills[20].pb = 10;
	}
	//021-Áú×¦---42
	{
		skills[21].name = "Áú×¦";
		skills[21].levelreq = 42;
		skills[21].ppt = Dragon;
		skills[21].kind = Physical;
		skills[21].power = 80;
		skills[21].accuracy = 100;
		skills[21].pp = 20;
		skills[21].residual = skills[21].pp;
		skills[21].ae = Nu;
		skills[21].pb = 0;
	}
	//022-ÒõÓ°×¦---44
	{
		skills[22].name = "ÒõÓ°×¦";
		skills[22].levelreq = 44;
		skills[22].ppt = Ghost;
		skills[22].kind = Physical;
		skills[22].power = 70;
		skills[22].accuracy = 100;
		skills[22].pp = 15;
		skills[22].residual = skills[22].pp;
		skills[22].ae = CthUp;
		skills[22].pb = 10;
	}
	//023-¿ÕÆøÇÐ¸î---49
	{
		skills[23].name = "¿ÕÆøÇÐ¸î";
		skills[23].levelreq = 49;
		skills[23].ppt = Flying;
		skills[23].kind = Special;
		skills[23].power = 75;
		skills[23].accuracy = 95;
		skills[23].pp = 20;
		skills[23].residual = skills[23].pp;
		skills[23].ae = CthUp;
		skills[23].pb = 10;
	}
	//024-ÈÈ·ç---71
	{
		skills[24].name = "ÈÈ·ç";
		skills[24].levelreq = 71;
		skills[24].ppt = Fire;
		skills[24].kind = Special;
		skills[24].power = 110;
		skills[24].accuracy = 90;
		skills[24].pp = 10;
		skills[24].residual = skills[24].pp;
		skills[24].ae = burn;
		skills[24].pb = 10;
	}
	//025-ÉÁÑæ³å·æ---77
	{
		skills[25].name = "ÉÁÑæ³å·æ";
		skills[25].levelreq = 77;
		skills[25].ppt = Fire;
		skills[25].kind = Physical;
		skills[25].power = 120;
		skills[25].accuracy = 100;
		skills[25].pp = 10;
		skills[25].residual = skills[25].pp;
		skills[25].ae = reflect;
		skills[25].pb = 0;
	}
	//026-Ò¡Î²°Í---04
	{
		skills[26].name = "Ò¡Î²°Í";
		skills[26].levelreq = 4;
		skills[26].ppt = Normal;
		skills[26].kind = Change;
		skills[26].power = 0;
		skills[26].accuracy = 100;
		skills[26].pp = 35;
		skills[26].residual = skills[26].pp;
		skills[26].ae = DefDn;
		skills[26].pb = 0;
	}
	//027-ÅÝÄ­---07
	{
		skills[27].name = "ÅÝÄ­";
		skills[27].levelreq = 7;
		skills[27].ppt = Water;
		skills[27].kind = Special;
		skills[27].power = 40;
		skills[27].accuracy = 100;
		skills[27].pp = 40;
		skills[27].residual = skills[27].pp;
		skills[27].ae = SpeDn;
		skills[27].pb = 10;
	}
	//028-Ë®Ç¹---13
	{
		skills[28].name = "Ë®Ç¹";
		skills[28].levelreq = 13;
		skills[28].ppt = Water;
		skills[28].kind = Special;
		skills[28].power = 40;
		skills[28].accuracy = 100;
		skills[28].pp = 40;
		skills[28].residual = skills[28].pp;
		skills[28].ae = Nu;
		skills[28].pb = 0;
	}
	//029-Ëõ¿Ç---10
	{
		skills[29].name = "Ëõ¿Ç";
		skills[29].levelreq = 10;
		skills[29].ppt = Water;
		skills[29].kind = Change;
		skills[29].power = 0;
		skills[29].accuracy = 0;
		skills[29].pp = 40;
		skills[29].residual = skills[29].pp;
		skills[29].ae = DefUp;
		skills[29].pb = 0;
	}
	//030-Ò§Ò§---17
	{
		skills[30].name = "Ò§Ò§";
		skills[30].levelreq = 17;
		skills[30].ppt = Dark;
		skills[30].kind = Physical;
		skills[30].power = 60;
		skills[30].accuracy = 100;
		skills[30].pp = 25;
		skills[30].residual = skills[30].pp;
		skills[30].ae = flinch;
		skills[30].pb = 30;
	}
	//031-¸ßËÙÐý×ª---25
	{
		skills[31].name = "¸ßËÙÐý×ª";
		skills[31].levelreq = 25;
		skills[31].ppt = Normal;
		skills[31].kind = Physical;
		skills[31].power = 20;
		skills[31].accuracy = 100;
		skills[31].pp = 40;
		skills[31].residual = skills[31].pp;
		skills[31].ae = deleech;
		skills[31].pb = 0;
	}
	//032-Ë®Ö®²¨¶¯---28
	{
		skills[32].name = "Ë®Ö®²¨¶¯";
		skills[32].levelreq = 28;
		skills[32].ppt = Water;
		skills[32].kind = Special;
		skills[32].power = 60;
		skills[32].accuracy = 100;
		skills[32].pp = 25;
		skills[32].residual = skills[32].pp;
		skills[32].ae = confusion;
		skills[32].pb = 20;
	}
	//033-±£»¤---31
	{
		skills[33].name = "±£»¤";
		skills[33].levelreq = 31;
		skills[33].ppt = Normal;
		skills[33].kind = Change;
		skills[33].power = 0;
		skills[33].accuracy = 0;
		skills[33].pp = 10;
		skills[33].residual = skills[33].pp;
		skills[33].ae = protect;
		skills[33].pb = 0;
	}
	//034-Ë®Î²°Í---33
	{
		skills[34].name = "Ë®Î²°Í";
		skills[34].levelreq = 33;
		skills[34].ppt = Water;
		skills[34].kind = Physical;
		skills[34].power = 90;
		skills[34].accuracy = 90;
		skills[34].pp = 10;
		skills[34].residual = skills[34].pp;
		skills[34].ae = Nu;
		skills[34].pb = 0;
	}
	//035-»ð¼ýÍ·é³---55
	{
		skills[35].name = "»ð¼ýÍ·é³";
		skills[35].levelreq = 55;
		skills[35].ppt = Normal;
		skills[35].kind = Physical;
		skills[35].power = 130;
		skills[35].accuracy = 100;
		skills[35].pp = 10;
		skills[35].residual = skills[35].pp;
		skills[35].ae = DefUp;
		skills[35].pb = 30;
	}
	//036-ÇóÓê---37
	{
		skills[36].name = "ÇóÓê";
		skills[36].levelreq = 37;
		skills[36].ppt = Water;
		skills[36].kind = Change;
		skills[36].power = 0;
		skills[36].accuracy = 0;
		skills[36].pp = 5;
		skills[36].residual = skills[36].pp;
		skills[36].ae = SatUp;
		skills[36].pb = 0;
	}
	//037-Ë®ÅÚ---47
	{
		skills[37].name = "Ë®ÅÚ";
		skills[37].levelreq = 47;
		skills[37].ppt = Water;
		skills[37].kind = Special;
		skills[37].power = 110;
		skills[37].accuracy = 80;
		skills[37].pp = 5;
		skills[37].residual = skills[37].pp;
		skills[37].ae = Nu;
		skills[37].pb = 0;
	}
	//038-ÆÃÉ³---03
	{
		skills[38].name = "ÆÃÉ³";
		skills[38].levelreq = 3;
		skills[38].ppt = Ground;
		skills[38].kind = Change;
		skills[38].power = 0;
		skills[38].accuracy = 100;
		skills[38].pp = 20;
		skills[38].residual = skills[38].pp;
		skills[38].ae = AccDn;
		skills[38].pb = 0;
	}
	//039-Æð·ç---07
	{
		skills[39].name = "Æð·ç";
		skills[39].levelreq = 7;
		skills[39].ppt = Flying;
		skills[39].kind = Special;
		skills[39].power = 40;
		skills[39].accuracy = 100;
		skills[39].pp = 35;
		skills[39].residual = skills[39].pp;
		skills[39].ae = Nu;
		skills[39].pb = 0;
	}
	//040-Áú¾í·ç---14
	{
		skills[40].name = "Áú¾í·ç";
		skills[40].levelreq = 14;
		skills[40].ppt = Dragon;
		skills[40].kind = Special;
		skills[40].power = 40;
		skills[40].accuracy = 100;
		skills[40].pp = 20;
		skills[40].residual = skills[40].pp;
		skills[40].ae = flinch;
		skills[40].pb = 20;
	}
	//041-ÓðÃ«Îè---19
	{
		skills[41].name = "ÓðÃ«Îè";
		skills[41].levelreq = 19;
		skills[41].ppt = Flying;
		skills[41].kind = Change;
		skills[41].power = 0;
		skills[41].accuracy = 100;
		skills[41].pp = 20;
		skills[41].residual = skills[41].pp;
		skills[41].ae = AtkDn;
		skills[41].pb = 0;
	}
	//042-¸ßËÙÒÆ¶¯---23
	{
		skills[42].name = "¸ßËÙÒÆ¶¯";
		skills[42].levelreq = 23;
		skills[42].ppt = Psychic;
		skills[42].kind = Change;
		skills[42].power = 0;
		skills[42].accuracy = 0;
		skills[42].pp = 40;
		skills[42].residual = skills[42].pp;
		skills[42].ae = SpeUp;
		skills[42].pb = 0;
	}
	//043-³á°òÅÄ»÷---27
	{
		skills[43].name = "³á°òÅÄ»÷";
		skills[43].levelreq = 27;
		skills[43].ppt = Flying;
		skills[43].kind = Physical;
		skills[43].power = 60;
		skills[43].accuracy = 100;
		skills[43].pp = 35;
		skills[43].residual = skills[43].pp;
		skills[43].ae = Nu;
		skills[43].pb = 0;
	}
	//044-ÓðÆÜ---32
	{
		skills[44].name = "ÓðÆÜ";
		skills[44].levelreq = 32;
		skills[44].ppt = Flying;
		skills[44].kind = Change;
		skills[44].power = 0;
		skills[44].accuracy = 0;
		skills[44].pp = 10;
		skills[44].residual = skills[44].pp;
		skills[44].ae = heal;
		skills[44].pb = 0;
	}
	//045-¿ÕÆøÇÐ¸î---38
	{
		skills[45].name = "¿ÕÆøÇÐ¸î";
		skills[45].levelreq = 38;
		skills[45].ppt = Flying;
		skills[45].kind = Special;
		skills[45].power = 75;
		skills[45].accuracy = 95;
		skills[45].pp = 15;
		skills[45].residual = skills[45].pp;
		skills[45].ae = flinch;
		skills[45].pb = 30;
	}
	//046-±©·ç---45
	{
		skills[46].name = "±©·ç";
		skills[46].levelreq = 45;
		skills[46].ppt = Flying;
		skills[46].kind = Special;
		skills[46].power = 110;
		skills[46].accuracy = 70;
		skills[46].pp = 10;
		skills[46].residual = skills[46].pp;
		skills[46].ae = confusion;
		skills[46].pb = 30;
	}
	//047-Ñà·µ---35
	{
		skills[47].name = "Ñà·µ";
		skills[47].levelreq = 35;
		skills[47].ppt = Flying;
		skills[47].kind = Physical;
		skills[47].power = 60;
		skills[47].accuracy = 0;
		skills[47].pp = 20;
		skills[47].residual = skills[47].pp;
		skills[47].ae = Nu;
		skills[47].pb = 0;
	}
	//048-ÓÂÄñÃÍ¹¥---52
	{
		skills[48].name = "ÓÂÄñÃÍ¹¥";
		skills[48].levelreq = 52;
		skills[48].ppt = Flying;
		skills[48].kind = Physical;
		skills[48].power = 120;
		skills[48].accuracy = 100;
		skills[48].pp = 15;
		skills[48].residual = skills[48].pp;
		skills[48].ae = reflect;
		skills[48].pb = 0;
	}
	//049-ÉñÄñÃÍ»÷---60
	{
		skills[49].name = "ÉñÄñÃÍ»÷";
		skills[49].levelreq = 60;
		skills[49].ppt = Flying;
		skills[49].kind = Physical;
		skills[49].power = 140;
		skills[49].accuracy = 90;
		skills[49].pp = 5;
		skills[49].residual = skills[49].pp;
		skills[49].ae = flinch;
		skills[49].pb = 30;
	}
	//050-ÈÈ·ç---42
	{
		skills[50].name = "ÈÈ·ç";
		skills[50].levelreq = 42;
		skills[50].ppt = Fire;
		skills[50].kind = Special;
		skills[50].power = 95;
		skills[50].accuracy = 90;
		skills[50].pp = 10;
		skills[50].residual = skills[50].pp;
		skills[50].ae = burn;
		skills[50].pb = 10;
	}
	//051-Èö½¿---03
	{
		skills[51].name = "Èö½¿";
		skills[51].levelreq = 3;
		skills[51].ppt = Fairy;
		skills[51].kind = Change;
		skills[51].power = 0;
		skills[51].accuracy = 100;
		skills[51].pp = 20;
		skills[51].residual = skills[51].pp;
		skills[51].ae = AtkDnn;
		skills[51].pb = 0;
	}
	//052-ÌìÊ¹Ö®ÎÇ---05
	{
		skills[52].name = "ÌìÊ¹Ö®ÎÇ";
		skills[52].levelreq = 5;
		skills[52].ppt = Fairy;
		skills[52].kind = Change;
		skills[52].power = 0;
		skills[52].accuracy = 75;
		skills[52].pp = 10;
		skills[52].residual = skills[52].pp;
		skills[52].ae = confusion;
		skills[52].pb = 0;
	}
	//053-¹î¼Æ---06
	{
		skills[53].name = "¹î¼Æ";
		skills[53].levelreq = 6;
		skills[53].ppt = Dark;
		skills[53].kind = Change;
		skills[53].power = 0;
		skills[53].accuracy = 0;
		skills[53].pp = 20;
		skills[53].residual = skills[53].pp;
		skills[53].ae = SatUpp;
		skills[53].pb = 0;
	}
	//054-µç»÷---07
	{
		skills[54].name = "µç»÷";
		skills[54].levelreq = 7;
		skills[54].ppt = Electric;
		skills[54].kind = Physical;
		skills[54].power = 40;
		skills[54].accuracy = 100;
		skills[54].pp = 30;
		skills[54].residual = skills[54].pp;
		skills[54].ae = paralyze;
		skills[54].pb = 10;
	}
	//055-µç¹âÒ»ÉÁ---10
	{
		skills[55].name = "µç¹âÒ»ÉÁ";
		skills[55].levelreq = 10;
		skills[55].ppt = Normal;
		skills[55].kind = Physical;
		skills[55].power = 40;
		skills[55].accuracy = 100;
		skills[55].pp = 30;
		skills[55].residual = skills[55].pp;
		skills[55].ae = Nu;
		skills[55].pb = 0;
	}
	//056-µçÇò---13  //»ù´¡ÍþÁ¦ÓëË«·½ËÙ¶ÈÓÐ¹Ø
	{
		skills[56].name = "µçÇò";
		skills[56].levelreq = 13;
		skills[56].ppt = Electric;
		skills[56].kind = Special;
		skills[56].power = 0;
		skills[56].accuracy = 100;
		skills[56].pp = 10;
		skills[56].residual = skills[56].pp;
		skills[56].ae = Nu;
		skills[56].pb = 0;
	}
	//057-µç´Å²¨---18
	{
		skills[57].name = "µç´Å²¨";
		skills[57].levelreq = 18;
		skills[57].ppt = Electric;
		skills[57].kind = Change;
		skills[57].power = 0;
		skills[57].accuracy = 90;
		skills[57].pp = 20;
		skills[57].residual = skills[57].pp;
		skills[57].ae = paralyze;
		skills[57].pb = 0;
	}
	//058-Ó°×Ó·ÖÉí---21
	{
		skills[58].name = "Ó°×Ó·ÖÉí";
		skills[58].levelreq = 21;
		skills[58].ppt = Normal;
		skills[58].kind = Change;
		skills[58].power = 0;
		skills[58].accuracy = 0;
		skills[58].pp = 15;
		skills[58].residual = skills[58].pp;
		skills[58].ae = EvaUp;
		skills[58].pb = 0;
	}
	//059-¿ÕÊÖÅü---08
	{
		skills[59].name = "¿ÕÊÖÅü";
		skills[59].levelreq = 8;
		skills[59].ppt = Fighting;
		skills[59].kind = Physical;
		skills[59].power = 50;
		skills[59].accuracy = 100;
		skills[59].pp = 25;
		skills[59].residual = skills[59].pp;
		skills[59].ae = CthUp;
		skills[59].pb = 20;
	}
	//060-Á¬»·°ÍÕÆ---13
	{
		skills[60].name = "Á¬»·°ÍÕÆ";
		skills[60].levelreq = 13;
		skills[60].ppt = Normal;
		skills[60].kind = Physical;
		skills[60].power = 15;
		skills[60].accuracy = 85;
		skills[60].pp = 10;
		skills[60].residual = skills[60].pp;
		skills[60].ae = combo;
		skills[60].pb = 25;
	}
	//061-Á¬ÐøÈ­---14
	{
		skills[61].name = "Á¬ÐøÈ­";
		skills[61].levelreq = 14;
		skills[61].ppt = Normal;
		skills[61].kind = Physical;
		skills[61].power = 18;
		skills[61].accuracy = 85;
		skills[61].pp = 15;
		skills[61].residual = skills[61].pp;
		skills[61].ae = combo;
		skills[61].pb = 25;
	}
	//062-°ÙÍò¶ÖÖØÈ­---41
	{
		skills[62].name = "°ÙÍò¶ÖÖØÈ­";
		skills[62].levelreq = 41;
		skills[62].ppt = Normal;
		skills[62].kind = Physical;
		skills[62].power = 80;
		skills[62].accuracy = 85;
		skills[62].pp = 20;
		skills[62].residual = skills[62].pp;
		skills[62].ae = Nu;
		skills[62].pb = 0;
	}
	//063-»ðÑæÈ­---38
	{
		skills[63].name = "»ðÑæÈ­";
		skills[63].levelreq = 38;
		skills[63].ppt = Fire;
		skills[63].kind = Physical;
		skills[63].power = 75;
		skills[63].accuracy = 100;
		skills[63].pp = 15;
		skills[63].residual = skills[63].pp;
		skills[63].ae = burn;
		skills[63].pb = 10;
	}
	//064-±ù¶³È­---38
	{
		skills[64].name = "±ù¶³È­";
		skills[64].levelreq = 38;
		skills[64].ppt = Ice;
		skills[64].kind = Physical;
		skills[64].power = 75;
		skills[64].accuracy = 100;
		skills[64].pp = 15;
		skills[64].residual = skills[64].pp;
		skills[64].ae = freeze;
		skills[64].pb = 10;
	}
	//065-À×µçÈ­---38	
	{
		skills[65].name = "À×µçÈ­";
		skills[65].levelreq = 38;
		skills[65].ppt = Electric;
		skills[65].kind = Physical;
		skills[65].power = 75;
		skills[65].accuracy = 100;
		skills[65].pp = 15;
		skills[65].residual = skills[65].pp;
		skills[65].ae = paralyze;
		skills[65].pb = 10;
	}
	//066-¼Ð×¡---10
	{
		skills[66].name = "¼Ð×¡";
		skills[66].levelreq = 10;
		skills[66].ppt = Normal;
		skills[66].kind = Physical;
		skills[66].power = 55;
		skills[66].accuracy = 100;
		skills[66].pp = 30;
		skills[66].residual = skills[66].pp;
		skills[66].ae = Nu;
		skills[66].pb = 0;
	}
	//067-Ðý·çµ¶---42
	{
		skills[67].name = "Ðý·çµ¶";
		skills[67].levelreq = 42;
		skills[67].ppt = Normal;
		skills[67].kind = Special;
		skills[67].power = 80;
		skills[67].accuracy = 100;
		skills[67].pp = 10;
		skills[67].residual = skills[67].pp;
		skills[67].ae = CthUp;
		skills[67].pb = 10;
	}
	//068-½£Îè---24
	{
		skills[68].name = "½£Îè";
		skills[68].levelreq = 24;
		skills[68].ppt = Normal;
		skills[68].kind = Change;
		skills[68].power = 0;
		skills[68].accuracy = 0;
		skills[68].pp = 20;
		skills[68].residual = skills[68].pp;
		skills[68].ae = AtkUpp;
		skills[68].pb = 0;
	}
	//069-¾ÓºÏÕ¶---17
	{
		skills[69].name = "¾ÓºÏÕ¶";
		skills[69].levelreq = 17;
		skills[69].ppt = Normal;
		skills[69].kind = Physical;
		skills[69].power = 50;
		skills[69].accuracy = 95;
		skills[69].pp = 30;
		skills[69].residual = skills[69].pp;
		skills[69].ae = Nu;
		skills[69].pb = 0;
	}
	//070-·ÉÏè---46
	{
		skills[70].name = "·ÉÏè";
		skills[70].levelreq = 46;
		skills[70].ppt = Flying;
		skills[70].kind = Physical;
		skills[70].power = 90;
		skills[70].accuracy = 95;
		skills[70].pp = 15;
		skills[70].residual = skills[70].pp;
		skills[70].ae = Nu;
		skills[70].pb = 0;
	}
	//071-Ë¤´ò---38
	{
		skills[71].name = "Ë¤´ò";
		skills[71].levelreq = 38;
		skills[71].ppt = Normal;
		skills[71].kind = Physical;
		skills[71].power = 80;
		skills[71].accuracy = 75;
		skills[71].pp = 20;
		skills[71].residual = skills[71].pp;
		skills[71].ae = Nu;
		skills[71].pb = 0;
	}
	//072-²ÈÌ¤---27
	{
		skills[72].name = "²ÈÌ¤";
		skills[72].levelreq = 27;
		skills[72].ppt = Normal;
		skills[72].kind = Physical;
		skills[72].power = 65;
		skills[72].accuracy = 100;
		skills[72].pp = 20;
		skills[72].residual = skills[72].pp;
		skills[72].ae = flinch;
		skills[72].pb = 30;
	}
	//073-Á¬Ìß---24
	{
		skills[73].name = "Á¬Ìß";
		skills[73].levelreq = 24;
		skills[73].ppt = Fighting;
		skills[73].kind = Physical;
		skills[73].power = 30;
		skills[73].accuracy = 100;
		skills[73].pp = 30;
		skills[73].residual = skills[73].pp;
		skills[73].ae = combo;
		skills[73].pb = 25;
	}
	//074-°ÙÍò¶ÖÖØÌß---57
	{
		skills[74].name = "°ÙÍò¶ÖÖØÌß";
		skills[74].levelreq = 57;
		skills[74].ppt = Normal;
		skills[74].kind = Physical;
		skills[74].power = 120;
		skills[74].accuracy = 75;
		skills[74].pp = 5;
		skills[74].residual = skills[74].pp;
		skills[74].ae = Nu;
		skills[74].pb = 0;
	}
	//075-·ÉÌß---47
	{
		skills[75].name = "·ÉÌß";
		skills[75].levelreq = 47;
		skills[75].ppt = Fighting;
		skills[75].kind = Physical;
		skills[75].power = 100;
		skills[75].accuracy = 95;
		skills[75].pp = 10;
		skills[75].residual = skills[75].pp;
		skills[75].ae = Nu;
		skills[75].pb = 0;
	}
	//076-»ØÐýÌß---27
	{
		skills[76].name = "»ØÐýÌß";
		skills[76].levelreq = 27;
		skills[76].ppt = Fighting;
		skills[76].kind = Physical;
		skills[76].power = 60;
		skills[76].accuracy = 85;
		skills[76].pp = 15;
		skills[76].residual = skills[76].pp;
		skills[76].ae = flinch;
		skills[76].pb = 30;
	}
	//077-½Ç×²---30
	{
		skills[77].name = "½Ç×²";
		skills[77].levelreq = 30;
		skills[77].ppt = Normal;
		skills[77].kind = Physical;
		skills[77].power = 65;
		skills[77].accuracy = 100;
		skills[77].pp = 25;
		skills[77].residual = skills[77].pp;
		skills[77].ae = Nu;
		skills[77].pb = 0;
	}
	//078-Í·é³---34
	{
		skills[78].name = "Í·é³";
		skills[78].levelreq = 34;
		skills[78].ppt = Normal;
		skills[78].kind = Physical;
		skills[78].power = 70;
		skills[78].accuracy = 100;
		skills[78].pp = 15;
		skills[78].residual = skills[78].pp;
		skills[78].ae = flinch;
		skills[78].pb = 30;
	}
	//079-Ì©É½Ñ¹¶¥---42
	{
		skills[79].name = "Ì©É½Ñ¹¶¥";
		skills[79].levelreq = 42;
		skills[79].ppt = Normal;
		skills[79].kind = Physical;
		skills[79].power = 85;
		skills[79].accuracy = 100;
		skills[79].pp = 15;
		skills[79].residual = skills[79].pp;
		skills[79].ae = paralyze;
		skills[79].pb = 30;
	}
	//080-ÂÒ»÷---24
	{
		skills[80].name = "ÂÒ»÷";
		skills[80].levelreq = 24;
		skills[80].ppt = Normal;
		skills[80].kind = Physical;
		skills[80].power = 20;
		skills[80].accuracy = 85;
		skills[80].pp = 20;
		skills[80].residual = skills[80].pp;
		skills[80].ae = combo;
		skills[80].pb = 25;
	}
	//081-Ë«Õë---20  ¿ÉÒÔÖÐ¶¾
	{
		skills[81].name = "Ë«Õë";
		skills[81].levelreq = 20;
		skills[81].ppt = Bug;
		skills[81].kind = Physical;
		skills[81].power = 25;
		skills[81].accuracy = 100;
		skills[81].pp = 20;
		skills[81].residual = skills[81].pp;
		skills[81].ae = combo;
		skills[81].pb = 25;
	}
	//082-³ª¸è---25
	{
		skills[82].name = "³ª¸è";
		skills[82].levelreq = 25;
		skills[82].ppt = Normal;
		skills[82].kind = Change;
		skills[82].power = 0;
		skills[82].accuracy = 55;
		skills[82].pp = 15;
		skills[82].residual = skills[82].pp;
		skills[82].ae = sleep;
		skills[82].pb = 0;
	}
	//083-³¬Òô²¨---20
	{
		skills[83].name = "³¬Òô²¨";
		skills[83].levelreq = 20;
		skills[83].ppt = Normal;
		skills[83].kind = Change;
		skills[83].power = 0;
		skills[83].accuracy = 55;
		skills[83].pp = 20;
		skills[83].residual = skills[83].pp;
		skills[83].ae = confusion;
		skills[83].pb = 0;
	}
	//084-ÈÜ½âÒº---08
	{
		skills[84].name = "ÈÜ½âÒº";
		skills[84].levelreq = 8;
		skills[84].ppt = Poison;
		skills[84].kind = Special;
		skills[84].power = 40;
		skills[84].accuracy = 100;
		skills[84].pp = 30;
		skills[84].residual = skills[84].pp;
		skills[84].ae = SdfDn;
		skills[84].pb = 10;
	}
	//085-³åÀË---47
	{
		skills[85].name = "³åÀË";
		skills[85].levelreq = 47;
		skills[85].ppt = Water;
		skills[85].kind = Special;
		skills[85].power = 90;
		skills[85].accuracy = 100;
		skills[85].pp = 15;
		skills[85].residual = skills[85].pp;
		skills[85].ae = Nu;
		skills[85].pb = 0;
	}
	//086-±ù¶³¹âÊø---47
	{
		skills[86].name = "±ù¶³¹âÊø";
		skills[86].levelreq = 47;
		skills[86].ppt = Ice;
		skills[86].kind = Special;
		skills[86].power = 90;
		skills[86].accuracy = 100;
		skills[86].pp = 10;
		skills[86].residual = skills[86].pp;
		skills[86].ae = freeze;
		skills[86].pb = 10;
	}
	//087-±©·çÑ©---54
	{
		skills[87].name = "±©·çÑ©";
		skills[87].levelreq = 54;
		skills[87].ppt = Ice;
		skills[87].kind = Special;
		skills[87].power = 110;
		skills[87].accuracy = 70;
		skills[87].pp = 5;
		skills[87].residual = skills[87].pp;
		skills[87].ae = freeze;
		skills[87].pb = 10;
	}
	//088-»ÃÏó¹âÏß---32
	{
		skills[88].name = "»ÃÏó¹âÏß";
		skills[88].levelreq = 32;
		skills[88].ppt = Psychic;
		skills[88].kind = Special;
		skills[88].power = 65;
		skills[88].accuracy = 100;
		skills[88].pp = 20;
		skills[88].residual = skills[88].pp;
		skills[88].ae = confusion;
		skills[88].pb = 10;
	}
	//089-ÅÝÄ­¹âÏß---32
	{
		skills[89].name = "ÅÝÄ­¹âÏß";
		skills[89].levelreq = 32;
		skills[89].ppt = Water;
		skills[89].kind = Special;
		skills[89].power = 65;
		skills[89].accuracy = 100;
		skills[89].pp = 20;
		skills[89].residual = skills[89].pp;
		skills[89].ae = SpeDn;
		skills[89].pb = 10;
	}
	//090-¼«¹âÊø---32
	{
		skills[90].name = "¼«¹âÊø";
		skills[90].levelreq = 32;
		skills[90].ppt = Ice;
		skills[90].kind = Special;
		skills[90].power = 65;
		skills[90].accuracy = 100;
		skills[90].pp = 20;
		skills[90].residual = skills[90].pp;
		skills[90].ae = AtkDn;
		skills[90].pb = 10;
	}
	//091-ÆÆ»µ¹âÏß---72
	{
		skills[91].name = "ÆÆ»µ¹âÏß";
		skills[91].levelreq = 72;
		skills[91].ppt = Normal;
		skills[91].kind = Special;
		skills[91].power = 150;
		skills[91].accuracy = 90;
		skills[91].pp = 5;
		skills[91].residual = skills[91].pp;
		skills[91].ae = Nu;
		skills[91].pb = 0;
	}
	//092-×Ä×ê---42
	{
		skills[92].name = "×Ä×ê";
		skills[92].levelreq = 42;
		skills[92].ppt = Flying;
		skills[92].kind = Physical;
		skills[92].power = 80;
		skills[92].accuracy = 100;
		skills[92].pp = 20;
		skills[92].residual = skills[92].pp;
		skills[92].ae = Nu;
		skills[92].pb = 0;
	}
	//093-×Ä---07
	{
		skills[93].name = "×Ä";
		skills[93].levelreq = 7;
		skills[93].ppt = Flying;
		skills[93].kind = Physical;
		skills[93].power = 35;
		skills[93].accuracy = 100;
		skills[93].pp = 35;
		skills[93].residual = skills[93].pp;
		skills[93].ae = Nu;
		skills[93].pb = 0;
	}
	//094-µØÓü·­¹ö---42
	{
		skills[94].name = "µØÓü·­¹ö";
		skills[94].levelreq = 42;
		skills[94].ppt = Fighting;
		skills[94].kind = Physical;
		skills[94].power = 80;
		skills[94].accuracy = 80;
		skills[94].pp = 20;
		skills[94].residual = skills[94].pp;
		skills[94].ae = Nu;
		skills[94].pb = 0;
	}
	//095-µØÇòÉÏÍ¶---25  Ôì³ÉºÍ×Ô¼ºµÈ¼¶ÏàÍ¬µÄÉËº¦
	{
		skills[95].name = "µØÇòÉÏÍ¶";
		skills[95].levelreq = 25;
		skills[95].ppt = Fighting;
		skills[95].kind = Physical;
		skills[95].power = 0;
		skills[95].accuracy = 100;
		skills[95].pp = 20;
		skills[95].residual = skills[95].pp;
		skills[95].ae = Nu;
		skills[95].pb = 0;
	}
	//096-¹ÖÁ¦---42
	{
		skills[96].name = "¹ÖÁ¦";
		skills[96].levelreq = 42;
		skills[96].ppt = Normal;
		skills[96].kind = Physical;
		skills[96].power = 80;
		skills[96].accuracy = 100;
		skills[96].pp = 15;
		skills[96].residual = skills[96].pp;
		skills[96].ae = Nu;
		skills[96].pb = 0;
	}
	//097-ÎüÈ¡---20
	{
		skills[97].name = "ÎüÈ¡";
		skills[97].levelreq = 20;
		skills[97].ppt = Grass;
		skills[97].kind = Special;
		skills[97].power = 20;
		skills[97].accuracy = 100;
		skills[97].pp = 25;
		skills[97].residual = skills[97].pp;
		skills[97].ae = drain;
		skills[97].pb = 0;
	}
	//098-ÈÕ¹âÊø---54
	{
		skills[98].name = "ÈÕ¹âÊø";
		skills[98].levelreq = 54;
		skills[98].ppt = Grass;
		skills[98].kind = Special;
		skills[98].power = 120;
		skills[98].accuracy = 100;
		skills[98].pp = 5;
		skills[98].residual = skills[98].pp;
		skills[98].ae = Nu;
		skills[98].pb = 0;
	}
	//099-Ê®Íò·üÌØ---45
	{
		skills[99].name = "Ê®Íò·üÌØ";
		skills[99].levelreq = 45;
		skills[99].ppt = Electric;
		skills[99].kind = Special;
		skills[99].power = 90;
		skills[99].accuracy = 100;
		skills[99].pp = 15;
		skills[99].residual = skills[99].pp;
		skills[99].ae = paralyze;
		skills[99].pb = 10;
	}
	//100-´òÀ×---52
	{
		skills[100].name = "´òÀ×";
		skills[100].levelreq = 52;
		skills[100].ppt = Electric;
		skills[100].kind = Special;
		skills[100].power = 110;
		skills[100].accuracy = 70;
		skills[100].pp = 10;
		skills[100].residual = skills[100].pp;
		skills[100].ae = paralyze;
		skills[100].pb = 30;
	}
	//101-ÂäÊ¯---17
	{
		skills[101].name = "ÂäÊ¯";
		skills[101].levelreq = 17;
		skills[101].ppt = Rock;
		skills[101].kind = Physical;
		skills[101].power = 50;
		skills[101].accuracy = 90;
		skills[101].pp = 15;
		skills[101].residual = skills[101].pp;
		skills[101].ae = Nu;
		skills[101].pb = 0;
	}
	//102-µØÕð---47
	{
		skills[102].name = "µØÕð";
		skills[102].levelreq = 47;
		skills[102].ppt = Ground;
		skills[102].kind = Physical;
		skills[102].power = 100;
		skills[102].accuracy = 100;
		skills[102].pp = 10;
		skills[102].residual = skills[102].pp;
		skills[102].ae = Nu;
		skills[102].pb = 0;
	}
	//103-ÍÚ¶´---42
	{
		skills[103].name = "ÍÚ¶´";
		skills[103].levelreq = 42;
		skills[103].ppt = Ground;
		skills[103].kind = Physical;
		skills[103].power = 80;
		skills[103].accuracy = 100;
		skills[103].pp = 10;
		skills[103].residual = skills[103].pp;
		skills[103].ae = Nu;
		skills[103].pb = 0;
	}
	//104-ÄîÁ¦---17
	{
		skills[104].name = "ÄîÁ¦";
		skills[104].levelreq = 17;
		skills[104].ppt = Psychic;
		skills[104].kind = Special;
		skills[104].power = 50;
		skills[104].accuracy = 100;
		skills[104].pp = 25;
		skills[104].residual = skills[104].pp;
		skills[104].ae = confusion;
		skills[104].pb = 10;
	}
	//105-¾«ÉñÇ¿Äî---47
	{
		skills[105].name = "¾«ÉñÇ¿Äî";
		skills[105].levelreq = 47;
		skills[105].ppt = Psychic;
		skills[105].kind = Special;
		skills[105].power = 90;
		skills[105].accuracy = 100;
		skills[105].pp = 10;
		skills[105].residual = skills[105].pp;
		skills[105].ae = SdfDn;
		skills[105].pb = 10;
	}
	//106-ºÚÒ¹Ä§Ó°---25 ¸øÓèºÍ×Ô¼ºµÈ¼¶Í¬µÈµÄÉËº¦
	{
		skills[106].name = "ºÚÒ¹Ä§Ó°";
		skills[106].levelreq = 25;
		skills[106].ppt = Ghost;
		skills[106].kind = Special;
		skills[106].power = 0;
		skills[106].accuracy = 100;
		skills[106].pp = 15;
		skills[106].residual = skills[106].pp;
		skills[106].ae = Nu;
		skills[106].pb = 0;
	}
	//107-×ÔÎÒÔÙÉú---37
	{
		skills[107].name = "×ÔÎÒÔÙÉú";
		skills[107].levelreq = 37;
		skills[107].ppt = Normal;
		skills[107].kind = Change;
		skills[107].power = 0;
		skills[107].accuracy = 0;
		skills[107].pp = 10;
		skills[107].residual = skills[107].pp;
		skills[107].ae = heal;
		skills[107].pb = 0;
	}
	//108-ÆæÒìÖ®¹â---17
	{
		skills[108].name = "ÆæÒìÖ®¹â";
		skills[108].levelreq = 17;
		skills[108].ppt = Ghost;
		skills[108].kind = Change;
		skills[108].power = 0;
		skills[108].accuracy = 100;
		skills[108].pp = 10;
		skills[108].residual = skills[108].pp;
		skills[108].ae = confusion;
		skills[108].pb = 0;
	}
	//109-±äÔ²---15
	{
		skills[109].name = "±äÔ²";
		skills[109].levelreq = 15;
		skills[109].ppt = Normal;
		skills[109].kind = Change;
		skills[109].power = 0;
		skills[109].accuracy = 0;
		skills[109].pp = 40;
		skills[109].residual = skills[109].pp;
		skills[109].ae = DefUp;
		skills[109].pb = 0;
	}
	//110-ÆÁÕÏ---27
	{
		skills[110].name = "ÆÁÕÏ";
		skills[110].levelreq = 27;
		skills[110].ppt = Psychic;
		skills[110].kind = Change;
		skills[110].power = 0;
		skills[110].accuracy = 0;
		skills[110].pp = 10;
		skills[110].residual = skills[110].pp;
		skills[110].ae = DefUpp;
		skills[110].pb = 0;
	}
	//111-¹âÇ½---32
	{
		skills[111].name = "¹âÇ½";
		skills[111].levelreq = 32;
		skills[111].ppt = Psychic;
		skills[111].kind = Change;
		skills[111].power = 0;
		skills[111].accuracy = 0;
		skills[111].pp = 30;
		skills[111].residual = skills[111].pp;
		skills[111].ae = SdfUpp;
		skills[111].pb = 0;
	}
	//112-Õ¨µ°---49
	{
		skills[112].name = "Õ¨µ°";
		skills[112].levelreq = 49;
		skills[112].ppt = Normal;
		skills[112].kind = Physical;
		skills[112].power = 100;
		skills[112].accuracy = 75;
		skills[112].pp = 10;
		skills[112].residual = skills[112].pp;
		skills[112].ae = Nu;
		skills[112].pb = 0;
	}
	//113-ÉàÌò--07
	{
		skills[113].name = "ÉàÌò";
		skills[113].levelreq = 7;
		skills[113].ppt = Ghost;
		skills[113].kind = Physical;
		skills[113].power = 30;
		skills[113].accuracy = 11300;
		skills[113].pp = 30;
		skills[113].residual = skills[113].pp;
		skills[113].ae = paralyze;
		skills[113].pb = 30;
	}
	//114-×ÇÎí---14
	{
		skills[114].name = "×ÇÎí";
		skills[114].levelreq = 1144;
		skills[114].ppt = Poison;
		skills[114].kind = Special;
		skills[114].power = 30;
		skills[114].accuracy = 70;
		skills[114].pp = 20;
		skills[114].residual = skills[114].pp;
		skills[114].ae = poison;
		skills[114].pb = 40;
	}
	//115-ÎÛÄà¹¥»÷---30
	{
		skills[115].name = "ÎÛÄà¹¥»÷";
		skills[115].levelreq = 30;
		skills[115].ppt = Poison;
		skills[115].kind = Special;
		skills[115].power = 65;
		skills[115].accuracy = 11500;
		skills[115].pp = 20;
		skills[115].residual = skills[115].pp;
		skills[115].ae = poison;
		skills[115].pb = 30;
	}
	//116-¹Ç°ô---27
	{
		skills[116].name = "¹Ç°ô";
		skills[116].levelreq = 27;
		skills[116].ppt = Ground;
		skills[116].kind = Physical;
		skills[116].power = 65;
		skills[116].accuracy = 85;
		skills[116].pp = 20;
		skills[116].residual = skills[116].pp;
		skills[116].ae = flinch;
		skills[116].pb = 10;
	}
	//117-´ó×Ö±¬Ñ×---52
	{
		skills[117].name = "´ó×Ö±¬Ñ×";
		skills[117].levelreq = 52;
		skills[117].ppt = Fire;
		skills[117].kind = Special;
		skills[117].power = 110;
		skills[117].accuracy = 85;
		skills[117].pp = 5;
		skills[117].residual = skills[117].pp;
		skills[117].ae = burn;
		skills[117].pb = 10;
	}
	//118-ÅÊÆÙ---35
	{
		skills[118].name = "ÅÊÆÙ";
		skills[118].levelreq = 35;
		skills[118].ppt = Water;
		skills[118].kind = Physical;
		skills[118].power = 80;
		skills[118].accuracy = 100;
		skills[118].pp = 15;
		skills[118].residual = skills[118].pp;
		skills[118].ae = flinch;
		skills[118].pb = 20;
	}
	//119-¸ßËÙÐÇÐÇ---24
	{
		skills[119].name = "¸ßËÙÐÇÐÇ";
		skills[119].levelreq = 24;
		skills[119].ppt = Normal;
		skills[119].kind = Special;
		skills[119].power = 60;
		skills[119].accuracy = 0;
		skills[119].pp = 20;
		skills[119].residual = skills[119].pp;
		skills[119].ae = Nu;
		skills[119].pb = 0;
	}
	//120-¼â´Ì¼ÓÅ©ÅÚ---15
	{
		skills[120].name = "¼â´Ì¼ÓÅ©ÅÚ";
		skills[120].levelreq = 15;
		skills[120].ppt = Normal;
		skills[120].kind = Physical;
		skills[120].power = 20;
		skills[120].accuracy = 100;
		skills[120].pp = 15;
		skills[120].residual = skills[120].pp;
		skills[120].ae = combo;
		skills[120].pb = 25;
	}
	//121-·ÉÏ¥Ìß---62
	{
		skills[121].name = "·ÉÏ¥Ìß";
		skills[121].levelreq = 62;
		skills[121].ppt = Fighting;
		skills[121].kind = Physical;
		skills[121].power = 130;
		skills[121].accuracy = 90;
		skills[121].pp = 10;
		skills[121].residual = skills[121].pp;
		skills[121].ae = Nu;
		skills[121].pb = 0;
	}
	//122-Ê³ÃÎ---55
	{
		skills[122].name = "Ê³ÃÎ";
		skills[122].levelreq = 55;
		skills[122].ppt = Psychic;
		skills[122].kind = Special;
		skills[122].power = 100;
		skills[122].accuracy = 100;
		skills[122].pp = 15;
		skills[122].residual = skills[122].pp;
		skills[122].ae = drain;
		skills[122].pb = 0;
	}
	//123-ÎüÑª---47
	{
		skills[123].name = "ÎüÑª";
		skills[123].levelreq = 47;
		skills[123].ppt = Bug;
		skills[123].kind = Physical;
		skills[123].power = 80;
		skills[123].accuracy = 100;
		skills[123].pp = 10;
		skills[123].residual = skills[123].pp;
		skills[123].ae = drain;
		skills[123].pb = 0;
	}
	//124-ÃÔ»èÈ­---36
	{
		skills[124].name = "ÃÔ»èÈ­";
		skills[124].levelreq = 36;
		skills[124].ppt = Normal;
		skills[124].kind = Physical;
		skills[124].power = 70;
		skills[124].accuracy = 100;
		skills[124].pp = 10;
		skills[124].residual = skills[124].pp;
		skills[124].ae = confusion;
		skills[124].pb = 20;
	}
	//125-Ä¢¹½æß×Ó---27
	{
		skills[125].name = "Ä¢¹½æß×Ó";
		skills[125].levelreq = 27;
		skills[125].ppt = Grass;
		skills[125].kind = Change;
		skills[125].power = 0;
		skills[125].accuracy = 100;
		skills[125].pp = 15;
		skills[125].residual = skills[125].pp;
		skills[125].ae = sleep;
		skills[125].pb = 0;
	}
	//126-ÉÁ¹â---27
	{
		skills[126].name = "ÉÁ¹â";
		skills[126].levelreq = 27;
		skills[126].ppt = Normal;
		skills[126].kind = Change;
		skills[126].power = 0;
		skills[126].accuracy = 100;
		skills[126].pp = 20;
		skills[126].residual = skills[126].pp;
		skills[126].ae = AccDn;
		skills[126].pb = 0;
	}
	//127-¾«Éñ²¨---30  Ôì³ÉÊ¹ÓÃÕßµÈ¼¶*£¨0.5-1.5£©µÄ¹Ì¶¨ÉËº¦
	{
		skills[127].name = "¾«Éñ²¨";
		skills[127].levelreq = 30;
		skills[127].ppt = Psychic;
		skills[127].kind = Special;
		skills[127].power = 0;
		skills[127].accuracy = 100;
		skills[127].pp = 15;
		skills[127].residual = skills[127].pp;
		skills[127].ae = Nu;
		skills[127].pb = 0;
	}
	//128-Ð·Ç¯´¸---47
	{
		skills[128].name = "Ð·Ç¯´¸";
		skills[128].levelreq = 47;
		skills[128].ppt = Water;
		skills[128].kind = Physical;
		skills[128].power = 100;
		skills[128].accuracy = 90;
		skills[128].pp = 10;
		skills[128].residual = skills[128].pp;
		skills[128].ae = CthUp;
		skills[128].pb = 10;
	}
	//129-¹ÇÍ·ïÚ---39
	{
		skills[129].name = "¹ÇÍ·ïÚ";
		skills[129].levelreq = 39;
		skills[129].ppt = Ground;
		skills[129].kind = Physical;
		skills[129].power = 50;
		skills[129].accuracy = 90;
		skills[129].pp = 10;
		skills[129].residual = skills[129].pp;
		skills[129].ae = combo;
		skills[129].pb = 25;
	}
	//130-ÑÒ±À---37
	{
		skills[130].name = "ÑÒ±À";
		skills[130].levelreq = 37;
		skills[130].ppt = Rock;
		skills[130].kind = Physical;
		skills[130].power = 75;
		skills[130].accuracy = 90;
		skills[130].pp = 10;
		skills[130].residual = skills[130].pp;
		skills[130].ae = flinch;
		skills[130].pb = 30;
	}
	//131-±ØÉ±ÃÅÑÀ---40
	{
		skills[131].name = "±ØÉ±ÃÅÑÀ";
		skills[131].levelreq = 40;
		skills[131].ppt = Normal;
		skills[131].kind = Physical;
		skills[131].power = 80;
		skills[131].accuracy = 90;
		skills[131].pp = 15;
		skills[131].residual = skills[131].pp;
		skills[131].ae = flinch;
		skills[131].pb = 20;
	}
}

Skill::Skill(PMList pmlist)
{
	std::cout << "5678\n";
	//000-½ÐÉù---03
	{
		skills[0].name = "½ÐÉù";
		skills[0].levelreq = 3;
		skills[0].ppt = Normal;
		skills[0].kind = Change;
		skills[0].power = 0;
		skills[0].accuracy = 100;
		skills[0].pp = 40;
		skills[0].residual = skills[0].pp;
		skills[0].ae = AtkDn;
		skills[0].pb = 0;
	}
	//001-¼ÄÉúÖÖ×Ó---07
	{
		skills[1].name = "¼ÄÉúÖÖ×Ó";
		skills[1].levelreq = 7;
		skills[1].ppt = Grass;
		skills[1].kind = Change;
		skills[1].power = 0;
		skills[1].accuracy = 90;
		skills[1].pp = 10;
		skills[1].residual = skills[1].pp;
		skills[1].ae = leech;
		skills[1].pb = 0;
	}
	//002-ÌÙ±Þ---09
	{
		skills[2].name = "ÌÙ±Þ";
		skills[2].levelreq = 9;
		skills[2].ppt = Grass;
		skills[2].kind = Physical;
		skills[2].power = 45;
		skills[2].accuracy = 100;
		skills[2].pp = 25;
		skills[2].residual = skills[2].pp;
		skills[2].ae = Nu;
		skills[2].pb = 0;
	}
	//003-¶¾·Û---13
	{
		skills[3].name = "¶¾·Û";
		skills[3].levelreq = 13;
		skills[3].ppt = Poison;
		skills[3].kind = Change;
		skills[3].power = 0;
		skills[3].accuracy = 75;
		skills[3].pp = 35;
		skills[3].residual = skills[3].pp;
		skills[3].ae = poison;
		skills[3].pb = 0;
	}
	//004-´ßÃß·Û---13
	{
		skills[4].name = "´ßÃß·Û";
		skills[4].levelreq = 13;
		skills[4].ppt = Grass;
		skills[4].kind = Change;
		skills[4].power = 0;
		skills[4].accuracy = 75;
		skills[4].pp = 15;
		skills[4].residual = skills[4].pp;
		skills[4].ae = sleep;
		skills[4].pb = 0;
	}
	//005-·ÉÒ¶¿ìµ¶---17
	{
		skills[5].name = "·ÉÒ¶¿ìµ¶";
		skills[5].levelreq = 17;
		skills[5].ppt = Grass;
		skills[5].kind = Physical;
		skills[5].power = 55;
		skills[5].accuracy = 95;
		skills[5].pp = 25;
		skills[5].residual = skills[5].pp;
		skills[5].ae = CthUp;
		skills[5].pb = 10;
	}
	//006-ÉáÉí³å×²---25
	{
		skills[6].name = "ÉáÉí³å×²";
		skills[6].levelreq = 25;
		skills[6].ppt = Normal;
		skills[6].kind = Physical;
		skills[6].power = 120;
		skills[6].accuracy = 100;
		skills[6].pp = 15;
		skills[6].residual = skills[6].pp;
		skills[6].ae = reflect;
		skills[6].pb = 0;
	}
	//007-¹âºÏ×÷ÓÃ---33
	{
		skills[7].name = "¹âºÏ×÷ÓÃ";
		skills[7].levelreq = 33;
		skills[7].ppt = Grass;
		skills[7].kind = Change;
		skills[7].power = 0;
		skills[7].accuracy = 0;
		skills[7].pp = 5;
		skills[7].residual = skills[7].pp;
		skills[7].ae = heal;
		skills[7].pb = 0;
	}
	//008-ÖÖ×ÓÕ¨µ¯---37
	{
		skills[8].name = "ÖÖ×ÓÕ¨µ¯";
		skills[8].levelreq = 37;
		skills[8].ppt = Grass;
		skills[8].kind = Physical;
		skills[8].power = 80;
		skills[8].accuracy = 100;
		skills[8].pp = 15;
		skills[8].residual = skills[8].pp;
		skills[8].ae = Nu;
		skills[8].pb = 0;
	}
	//009-ÈÕ¹âÊø---44
	{
		skills[9].name = "ÈÕ¹âÊø";
		skills[9].levelreq = 44;
		skills[9].ppt = Grass;
		skills[9].kind = Special;
		skills[9].power = 120;
		skills[9].accuracy = 100;
		skills[9].pp = 10;
		skills[9].residual = skills[9].pp;
		skills[9].ae = Nu;
		skills[9].pb = 0;
	}
	//010-³¬¼¶ÎüÈ¡---40
	{
		skills[10].name = "ÖÕ¼«ÎüÈ¡";
		skills[10].levelreq = 40;
		skills[10].ppt = Grass;
		skills[10].kind = Special;
		skills[10].power = 40;
		skills[10].accuracy = 100;
		skills[10].pp = 15;
		skills[10].residual = skills[10].pp;
		skills[10].ae = drain;
		skills[10].pb = 0;
	}
	//011-³É³¤---21
	{
		skills[11].name = "³É³¤";
		skills[11].levelreq = 21;
		skills[11].ppt = Normal;
		skills[11].kind = Change;
		skills[11].power = 0;
		skills[11].accuracy = 0;
		skills[11].pp = 40;
		skills[11].residual = skills[11].pp;
		skills[11].ae = AtkUp;
		skills[11].pb = 0;
	}
	//012-»ð»¨---09
	{
		skills[12].name = "»ð»¨";
		skills[12].levelreq = 9;
		skills[12].ppt = Fire;
		skills[12].kind = Special;
		skills[12].power = 40;
		skills[12].accuracy = 100;
		skills[12].pp = 30;
		skills[12].residual = skills[12].pp;
		skills[12].ae = burn;
		skills[12].pb = 10;
	}
	//013-µÉÑÛ---15
	{
		skills[13].name = "µÉÑÛ";
		skills[13].levelreq = 15;
		skills[13].ppt = Normal;
		skills[13].kind = Change;
		skills[13].power = 0;
		skills[13].accuracy = 100;
		skills[13].pp = 35;
		skills[13].residual = skills[13].pp;
		skills[13].ae = DefDn;
		skills[13].pb = 0;
	}
	//014-·ßÅ­---22
	{
		skills[14].name = "·ßÅ­";
		skills[14].levelreq = 22;
		skills[14].ppt = Normal;
		skills[14].kind = Physical;
		skills[14].power = 20;
		skills[14].accuracy = 100;
		skills[14].pp = 30;
		skills[14].residual = skills[14].pp;
		skills[14].ae = AtkUp;
		skills[14].pb = 0;
	}
	//015-Åü¿ª---30
	{
		skills[15].name = "Åü¿ª";
		skills[15].levelreq = 30;
		skills[15].ppt = Normal;
		skills[15].kind = Physical;
		skills[15].power = 70;
		skills[15].accuracy = 100;
		skills[15].pp = 25;
		skills[15].residual = skills[15].pp;
		skills[15].ae = CthUp;
		skills[15].pb = 10;
	}
	//016-ÅçÉä»ðÑæ---38
	{
		skills[16].name = "ÅçÉä»ðÑæ";
		skills[16].levelreq = 38;
		skills[16].ppt = Fire;
		skills[16].kind = Special;
		skills[16].power = 90;
		skills[16].accuracy = 100;
		skills[16].pp = 15;
		skills[16].residual = skills[16].pp;
		skills[16].ae = burn;
		skills[16].pb = 10;
	}
	//017-»ðÑæäöÎÐ---46
	{
		skills[17].name = "»ðÑæäöÎÐ";
		skills[17].levelreq = 46;
		skills[17].ppt = Fire;
		skills[17].kind = Special;
		skills[17].power = 35;
		skills[17].accuracy = 85;
		skills[17].pp = 15;
		skills[17].residual = skills[17].pp;
		skills[17].ae = burn;
		skills[17].pb = 0;
	}
	//018-ÑÌÄ»---10
	{
		skills[18].name = "ÑÌÄ»";
		skills[18].levelreq = 10;
		skills[18].ppt = Normal;
		skills[18].kind = Change;
		skills[18].power = 0;
		skills[18].accuracy = 100;
		skills[18].pp = 25;
		skills[18].residual = skills[18].pp;
		skills[18].ae = AccDn;
		skills[18].pb = 0;
	}
	//019-ÁúÖ®Å­---19
	{
		skills[19].name = "ÁúÖ®Å­";
		skills[19].levelreq = 19;
		skills[19].ppt = Dragon;
		skills[19].kind = Special;
		skills[19].power = 40;
		skills[19].accuracy = 100;
		skills[19].pp = 10;
		skills[19].residual = skills[19].pp;
		skills[19].ae = Nu;
		skills[19].pb = 0;
	}
	//020-»ðÖ®ÑÀ---26
	{
		skills[20].name = "»ðÖ®ÑÀ";
		skills[20].levelreq = 26;
		skills[20].ppt = Fire;
		skills[20].kind = Physical;
		skills[20].power = 65;
		skills[20].accuracy = 95;
		skills[20].pp = 15;
		skills[20].residual = skills[20].pp;
		skills[20].ae = burn;
		skills[20].pb = 10;
	}
	//021-Áú×¦---42
	{
		skills[21].name = "Áú×¦";
		skills[21].levelreq = 42;
		skills[21].ppt = Dragon;
		skills[21].kind = Physical;
		skills[21].power = 80;
		skills[21].accuracy = 100;
		skills[21].pp = 20;
		skills[21].residual = skills[21].pp;
		skills[21].ae = Nu;
		skills[21].pb = 0;
	}
	//022-ÒõÓ°×¦---44
	{
		skills[22].name = "ÒõÓ°×¦";
		skills[22].levelreq = 44;
		skills[22].ppt = Ghost;
		skills[22].kind = Physical;
		skills[22].power = 70;
		skills[22].accuracy = 100;
		skills[22].pp = 15;
		skills[22].residual = skills[22].pp;
		skills[22].ae = CthUp;
		skills[22].pb = 10;
	}
	//023-¿ÕÆøÇÐ¸î---49
	{
		skills[23].name = "¿ÕÆøÇÐ¸î";
		skills[23].levelreq = 49;
		skills[23].ppt = Flying;
		skills[23].kind = Special;
		skills[23].power = 75;
		skills[23].accuracy = 95;
		skills[23].pp = 20;
		skills[23].residual = skills[23].pp;
		skills[23].ae = CthUp;
		skills[23].pb = 10;
	}
	//024-ÈÈ·ç---71
	{
		skills[24].name = "ÈÈ·ç";
		skills[24].levelreq = 71;
		skills[24].ppt = Fire;
		skills[24].kind = Special;
		skills[24].power = 110;
		skills[24].accuracy = 90;
		skills[24].pp = 10;
		skills[24].residual = skills[24].pp;
		skills[24].ae = burn;
		skills[24].pb = 10;
	}
	//025-ÉÁÑæ³å·æ---77
	{
		skills[25].name = "ÉÁÑæ³å·æ";
		skills[25].levelreq = 77;
		skills[25].ppt = Fire;
		skills[25].kind = Physical;
		skills[25].power = 120;
		skills[25].accuracy = 100;
		skills[25].pp = 10;
		skills[25].residual = skills[25].pp;
		skills[25].ae = reflect;
		skills[25].pb = 0;
	}
	//026-Ò¡Î²°Í---04
	{
		skills[26].name = "Ò¡Î²°Í";
		skills[26].levelreq = 4;
		skills[26].ppt = Normal;
		skills[26].kind = Change;
		skills[26].power = 0;
		skills[26].accuracy = 100;
		skills[26].pp = 35;
		skills[26].residual = skills[26].pp;
		skills[26].ae = DefDn;
		skills[26].pb = 0;
	}
	//027-ÅÝÄ­---07
	{
		skills[27].name = "ÅÝÄ­";
		skills[27].levelreq = 7;
		skills[27].ppt = Water;
		skills[27].kind = Special;
		skills[27].power = 40;
		skills[27].accuracy = 100;
		skills[27].pp = 40;
		skills[27].residual = skills[27].pp;
		skills[27].ae = SpeDn;
		skills[27].pb = 10;
	}
	//028-Ë®Ç¹---13
	{
		skills[28].name = "Ë®Ç¹";
		skills[28].levelreq = 13;
		skills[28].ppt = Water;
		skills[28].kind = Special;
		skills[28].power = 40;
		skills[28].accuracy = 100;
		skills[28].pp = 40;
		skills[28].residual = skills[28].pp;
		skills[28].ae = Nu;
		skills[28].pb = 0;
	}
	//029-Ëõ¿Ç---10
	{
		skills[29].name = "Ëõ¿Ç";
		skills[29].levelreq = 10;
		skills[29].ppt = Water;
		skills[29].kind = Change;
		skills[29].power = 0;
		skills[29].accuracy = 0;
		skills[29].pp = 40;
		skills[29].residual = skills[29].pp;
		skills[29].ae = DefUp;
		skills[29].pb = 0;
	}
	//030-Ò§Ò§---17
	{
		skills[30].name = "Ò§Ò§";
		skills[30].levelreq = 17;
		skills[30].ppt = Dark;
		skills[30].kind = Physical;
		skills[30].power = 60;
		skills[30].accuracy = 100;
		skills[30].pp = 25;
		skills[30].residual = skills[30].pp;
		skills[30].ae = flinch;
		skills[30].pb = 30;
	}
	//031-¸ßËÙÐý×ª---25
	{
		skills[31].name = "¸ßËÙÐý×ª";
		skills[31].levelreq = 25;
		skills[31].ppt = Normal;
		skills[31].kind = Physical;
		skills[31].power = 20;
		skills[31].accuracy = 100;
		skills[31].pp = 40;
		skills[31].residual = skills[31].pp;
		skills[31].ae = deleech;
		skills[31].pb = 0;
	}
	//032-Ë®Ö®²¨¶¯---28
	{
		skills[32].name = "Ë®Ö®²¨¶¯";
		skills[32].levelreq = 28;
		skills[32].ppt = Water;
		skills[32].kind = Special;
		skills[32].power = 60;
		skills[32].accuracy = 100;
		skills[32].pp = 25;
		skills[32].residual = skills[32].pp;
		skills[32].ae = confusion;
		skills[32].pb = 20;
	}
	//033-±£»¤---31
	{
		skills[33].name = "±£»¤";
		skills[33].levelreq = 31;
		skills[33].ppt = Normal;
		skills[33].kind = Change;
		skills[33].power = 0;
		skills[33].accuracy = 0;
		skills[33].pp = 10;
		skills[33].residual = skills[33].pp;
		skills[33].ae = protect;
		skills[33].pb = 0;
	}
	//034-Ë®Î²°Í---33
	{
		skills[34].name = "Ë®Î²°Í";
		skills[34].levelreq = 33;
		skills[34].ppt = Water;
		skills[34].kind = Physical;
		skills[34].power = 90;
		skills[34].accuracy = 90;
		skills[34].pp = 10;
		skills[34].residual = skills[34].pp;
		skills[34].ae = Nu;
		skills[34].pb = 0;
	}
	//035-»ð¼ýÍ·é³---55
	{
		skills[35].name = "»ð¼ýÍ·é³";
		skills[35].levelreq = 55;
		skills[35].ppt = Normal;
		skills[35].kind = Physical;
		skills[35].power = 130;
		skills[35].accuracy = 100;
		skills[35].pp = 10;
		skills[35].residual = skills[35].pp;
		skills[35].ae = DefUp;
		skills[35].pb = 30;
	}
	//036-ÇóÓê---37
	{
		skills[36].name = "ÇóÓê";
		skills[36].levelreq = 37;
		skills[36].ppt = Water;
		skills[36].kind = Change;
		skills[36].power = 0;
		skills[36].accuracy = 0;
		skills[36].pp = 5;
		skills[36].residual = skills[36].pp;
		skills[36].ae = SatUp;
		skills[36].pb = 0;
	}
	//037-Ë®ÅÚ---47
	{
		skills[37].name = "Ë®ÅÚ";
		skills[37].levelreq = 47;
		skills[37].ppt = Water;
		skills[37].kind = Special;
		skills[37].power = 110;
		skills[37].accuracy = 80;
		skills[37].pp = 5;
		skills[37].residual = skills[37].pp;
		skills[37].ae = Nu;
		skills[37].pb = 0;
	}
	//038-ÆÃÉ³---03
	{
		skills[38].name = "ÆÃÉ³";
		skills[38].levelreq = 3;
		skills[38].ppt = Ground;
		skills[38].kind = Change;
		skills[38].power = 0;
		skills[38].accuracy = 100;
		skills[38].pp = 20;
		skills[38].residual = skills[38].pp;
		skills[38].ae = AccDn;
		skills[38].pb = 0;
	}
	//039-Æð·ç---07
	{
		skills[39].name = "Æð·ç";
		skills[39].levelreq = 7;
		skills[39].ppt = Flying;
		skills[39].kind = Special;
		skills[39].power = 40;
		skills[39].accuracy = 100;
		skills[39].pp = 35;
		skills[39].residual = skills[39].pp;
		skills[39].ae = Nu;
		skills[39].pb = 0;
	}
	//040-Áú¾í·ç---14
	{
		skills[40].name = "Áú¾í·ç";
		skills[40].levelreq = 14;
		skills[40].ppt = Dragon;
		skills[40].kind = Special;
		skills[40].power = 40;
		skills[40].accuracy = 100;
		skills[40].pp = 20;
		skills[40].residual = skills[40].pp;
		skills[40].ae = flinch;
		skills[40].pb = 20;
	}
	//041-ÓðÃ«Îè---19
	{
		skills[41].name = "ÓðÃ«Îè";
		skills[41].levelreq = 19;
		skills[41].ppt = Flying;
		skills[41].kind = Change;
		skills[41].power = 0;
		skills[41].accuracy = 100;
		skills[41].pp = 20;
		skills[41].residual = skills[41].pp;
		skills[41].ae = AtkDn;
		skills[41].pb = 0;
	}
	//042-¸ßËÙÒÆ¶¯---23
	{
		skills[42].name = "¸ßËÙÒÆ¶¯";
		skills[42].levelreq = 23;
		skills[42].ppt = Psychic;
		skills[42].kind = Change;
		skills[42].power = 0;
		skills[42].accuracy = 0;
		skills[42].pp = 40;
		skills[42].residual = skills[42].pp;
		skills[42].ae = SpeUp;
		skills[42].pb = 0;
	}
	//043-³á°òÅÄ»÷---27
	{
		skills[43].name = "³á°òÅÄ»÷";
		skills[43].levelreq = 27;
		skills[43].ppt = Flying;
		skills[43].kind = Physical;
		skills[43].power = 60;
		skills[43].accuracy = 100;
		skills[43].pp = 35;
		skills[43].residual = skills[43].pp;
		skills[43].ae = Nu;
		skills[43].pb = 0;
	}
	//044-ÓðÆÜ---32
	{
		skills[44].name = "ÓðÆÜ";
		skills[44].levelreq = 32;
		skills[44].ppt = Flying;
		skills[44].kind = Change;
		skills[44].power = 0;
		skills[44].accuracy = 0;
		skills[44].pp = 10;
		skills[44].residual = skills[44].pp;
		skills[44].ae = heal;
		skills[44].pb = 0;
	}
	//045-¿ÕÆøÇÐ¸î---38
	{
		skills[45].name = "¿ÕÆøÇÐ¸î";
		skills[45].levelreq = 38;
		skills[45].ppt = Flying;
		skills[45].kind = Special;
		skills[45].power = 75;
		skills[45].accuracy = 95;
		skills[45].pp = 15;
		skills[45].residual = skills[45].pp;
		skills[45].ae = flinch;
		skills[45].pb = 30;
	}
	//046-±©·ç---45
	{
		skills[46].name = "±©·ç";
		skills[46].levelreq = 45;
		skills[46].ppt = Flying;
		skills[46].kind = Special;
		skills[46].power = 110;
		skills[46].accuracy = 70;
		skills[46].pp = 10;
		skills[46].residual = skills[46].pp;
		skills[46].ae = confusion;
		skills[46].pb = 30;
	}
	//047-Ñà·µ---35
	{
		skills[47].name = "Ñà·µ";
		skills[47].levelreq = 35;
		skills[47].ppt = Flying;
		skills[47].kind = Physical;
		skills[47].power = 60;
		skills[47].accuracy = 0;
		skills[47].pp = 20;
		skills[47].residual = skills[47].pp;
		skills[47].ae = Nu;
		skills[47].pb = 0;
	}
	//048-ÓÂÄñÃÍ¹¥---52
	{
		skills[48].name = "ÓÂÄñÃÍ¹¥";
		skills[48].levelreq = 52;
		skills[48].ppt = Flying;
		skills[48].kind = Physical;
		skills[48].power = 120;
		skills[48].accuracy = 100;
		skills[48].pp = 15;
		skills[48].residual = skills[48].pp;
		skills[48].ae = reflect;
		skills[48].pb = 0;
	}
	//049-ÉñÄñÃÍ»÷---60
	{
		skills[49].name = "ÉñÄñÃÍ»÷";
		skills[49].levelreq = 60;
		skills[49].ppt = Flying;
		skills[49].kind = Physical;
		skills[49].power = 140;
		skills[49].accuracy = 90;
		skills[49].pp = 5;
		skills[49].residual = skills[49].pp;
		skills[49].ae = flinch;
		skills[49].pb = 30;
	}
	//050-ÈÈ·ç---42
	{
		skills[50].name = "ÈÈ·ç";
		skills[50].levelreq = 42;
		skills[50].ppt = Fire;
		skills[50].kind = Special;
		skills[50].power = 95;
		skills[50].accuracy = 90;
		skills[50].pp = 10;
		skills[50].residual = skills[50].pp;
		skills[50].ae = burn;
		skills[50].pb = 10;
	}
	//051-Èö½¿---03
	{
		skills[51].name = "Èö½¿";
		skills[51].levelreq = 3;
		skills[51].ppt = Fairy;
		skills[51].kind = Change;
		skills[51].power = 0;
		skills[51].accuracy = 100;
		skills[51].pp = 20;
		skills[51].residual = skills[51].pp;
		skills[51].ae = AtkDnn;
		skills[51].pb = 0;
	}
	//052-ÌìÊ¹Ö®ÎÇ---05
	{
		skills[52].name = "ÌìÊ¹Ö®ÎÇ";
		skills[52].levelreq = 5;
		skills[52].ppt = Fairy;
		skills[52].kind = Change;
		skills[52].power = 0;
		skills[52].accuracy = 75;
		skills[52].pp = 10;
		skills[52].residual = skills[52].pp;
		skills[52].ae = confusion;
		skills[52].pb = 0;
	}
	//053-¹î¼Æ---06
	{
		skills[53].name = "¹î¼Æ";
		skills[53].levelreq = 6;
		skills[53].ppt = Dark;
		skills[53].kind = Change;
		skills[53].power = 0;
		skills[53].accuracy = 0;
		skills[53].pp = 20;
		skills[53].residual = skills[53].pp;
		skills[53].ae = SatUpp;
		skills[53].pb = 0;
	}
	//054-µç»÷---07
	{
		skills[54].name = "µç»÷";
		skills[54].levelreq = 7;
		skills[54].ppt = Electric;
		skills[54].kind = Physical;
		skills[54].power = 40;
		skills[54].accuracy = 100;
		skills[54].pp = 30;
		skills[54].residual = skills[54].pp;
		skills[54].ae = paralyze;
		skills[54].pb = 10;
	}
	//055-µç¹âÒ»ÉÁ---10
	{
		skills[55].name = "µç¹âÒ»ÉÁ";
		skills[55].levelreq = 10;
		skills[55].ppt = Normal;
		skills[55].kind = Physical;
		skills[55].power = 40;
		skills[55].accuracy = 100;
		skills[55].pp = 30;
		skills[55].residual = skills[55].pp;
		skills[55].ae = Nu;
		skills[55].pb = 0;
	}
	//056-µçÇò---13  //»ù´¡ÍþÁ¦ÓëË«·½ËÙ¶ÈÓÐ¹Ø
	{
		skills[56].name = "µçÇò";
		skills[56].levelreq = 13;
		skills[56].ppt = Electric;
		skills[56].kind = Special;
		skills[56].power = 0;
		skills[56].accuracy = 100;
		skills[56].pp = 10;
		skills[56].residual = skills[56].pp;
		skills[56].ae = Nu;
		skills[56].pb = 0;
	}
	//057-µç´Å²¨---18
	{
		skills[57].name = "µç´Å²¨";
		skills[57].levelreq = 18;
		skills[57].ppt = Electric;
		skills[57].kind = Change;
		skills[57].power = 0;
		skills[57].accuracy = 90;
		skills[57].pp = 20;
		skills[57].residual = skills[57].pp;
		skills[57].ae = paralyze;
		skills[57].pb = 0;
	}
	//058-Ó°×Ó·ÖÉí---21
	{
		skills[58].name = "Ó°×Ó·ÖÉí";
		skills[58].levelreq = 21;
		skills[58].ppt = Normal;
		skills[58].kind = Change;
		skills[58].power = 0;
		skills[58].accuracy = 0;
		skills[58].pp = 15;
		skills[58].residual = skills[58].pp;
		skills[58].ae = EvaUp;
		skills[58].pb = 0;
	}
	//059-¿ÕÊÖÅü---08
	{
		skills[59].name = "¿ÕÊÖÅü";
		skills[59].levelreq = 8;
		skills[59].ppt = Fighting;
		skills[59].kind = Physical;
		skills[59].power = 50;
		skills[59].accuracy = 100;
		skills[59].pp = 25;
		skills[59].residual = skills[59].pp;
		skills[59].ae = CthUp;
		skills[59].pb = 20;
	}
	//060-Á¬»·°ÍÕÆ---13
	{
		skills[60].name = "Á¬»·°ÍÕÆ";
		skills[60].levelreq = 13;
		skills[60].ppt = Normal;
		skills[60].kind = Physical;
		skills[60].power = 15;
		skills[60].accuracy = 85;
		skills[60].pp = 10;
		skills[60].residual = skills[60].pp;
		skills[60].ae = combo;
		skills[60].pb = 25;
	}
	//061-Á¬ÐøÈ­---14
	{
		skills[61].name = "Á¬ÐøÈ­";
		skills[61].levelreq = 14;
		skills[61].ppt = Normal;
		skills[61].kind = Physical;
		skills[61].power = 18;
		skills[61].accuracy = 85;
		skills[61].pp = 15;
		skills[61].residual = skills[61].pp;
		skills[61].ae = combo;
		skills[61].pb = 25;
	}
	//062-°ÙÍò¶ÖÖØÈ­---41
	{
		skills[62].name = "°ÙÍò¶ÖÖØÈ­";
		skills[62].levelreq = 41;
		skills[62].ppt = Normal;
		skills[62].kind = Physical;
		skills[62].power = 80;
		skills[62].accuracy = 85;
		skills[62].pp = 20;
		skills[62].residual = skills[62].pp;
		skills[62].ae = Nu;
		skills[62].pb = 0;
	}
	//063-»ðÑæÈ­---38
	{
		skills[63].name = "»ðÑæÈ­";
		skills[63].levelreq = 38;
		skills[63].ppt = Fire;
		skills[63].kind = Physical;
		skills[63].power = 75;
		skills[63].accuracy = 100;
		skills[63].pp = 15;
		skills[63].residual = skills[63].pp;
		skills[63].ae = burn;
		skills[63].pb = 10;
	}
	//064-±ù¶³È­---38
	{
		skills[64].name = "±ù¶³È­";
		skills[64].levelreq = 38;
		skills[64].ppt = Ice;
		skills[64].kind = Physical;
		skills[64].power = 75;
		skills[64].accuracy = 100;
		skills[64].pp = 15;
		skills[64].residual = skills[64].pp;
		skills[64].ae = freeze;
		skills[64].pb = 10;
	}
	//065-À×µçÈ­---38	
	{
		skills[65].name = "À×µçÈ­";
		skills[65].levelreq = 38;
		skills[65].ppt = Electric;
		skills[65].kind = Physical;
		skills[65].power = 75;
		skills[65].accuracy = 100;
		skills[65].pp = 15;
		skills[65].residual = skills[65].pp;
		skills[65].ae = paralyze;
		skills[65].pb = 10;
	}
	//066-¼Ð×¡---10
	{
		skills[66].name = "¼Ð×¡";
		skills[66].levelreq = 10;
		skills[66].ppt = Normal;
		skills[66].kind = Physical;
		skills[66].power = 55;
		skills[66].accuracy = 100;
		skills[66].pp = 30;
		skills[66].residual = skills[66].pp;
		skills[66].ae = Nu;
		skills[66].pb = 0;
	}
	//067-Ðý·çµ¶---42
	{
		skills[67].name = "Ðý·çµ¶";
		skills[67].levelreq = 42;
		skills[67].ppt = Normal;
		skills[67].kind = Special;
		skills[67].power = 80;
		skills[67].accuracy = 100;
		skills[67].pp = 10;
		skills[67].residual = skills[67].pp;
		skills[67].ae = CthUp;
		skills[67].pb = 10;
	}
	//068-½£Îè---24
	{
		skills[68].name = "½£Îè";
		skills[68].levelreq = 24;
		skills[68].ppt = Normal;
		skills[68].kind = Change;
		skills[68].power = 0;
		skills[68].accuracy = 0;
		skills[68].pp = 20;
		skills[68].residual = skills[68].pp;
		skills[68].ae = AtkUpp;
		skills[68].pb = 0;
	}
	//069-¾ÓºÏÕ¶---17
	{
		skills[69].name = "¾ÓºÏÕ¶";
		skills[69].levelreq = 17;
		skills[69].ppt = Normal;
		skills[69].kind = Physical;
		skills[69].power = 50;
		skills[69].accuracy = 95;
		skills[69].pp = 30;
		skills[69].residual = skills[69].pp;
		skills[69].ae = Nu;
		skills[69].pb = 0;
	}
	//070-·ÉÏè---46
	{
		skills[70].name = "·ÉÏè";
		skills[70].levelreq = 46;
		skills[70].ppt = Flying;
		skills[70].kind = Physical;
		skills[70].power = 90;
		skills[70].accuracy = 95;
		skills[70].pp = 15;
		skills[70].residual = skills[70].pp;
		skills[70].ae = Nu;
		skills[70].pb = 0;
	}
	//071-Ë¤´ò---38
	{
		skills[71].name = "Ë¤´ò";
		skills[71].levelreq = 38;
		skills[71].ppt = Normal;
		skills[71].kind = Physical;
		skills[71].power = 80;
		skills[71].accuracy = 75;
		skills[71].pp = 20;
		skills[71].residual = skills[71].pp;
		skills[71].ae = Nu;
		skills[71].pb = 0;
	}
	//072-²ÈÌ¤---27
	{
		skills[72].name = "²ÈÌ¤";
		skills[72].levelreq = 27;
		skills[72].ppt = Normal;
		skills[72].kind = Physical;
		skills[72].power = 65;
		skills[72].accuracy = 100;
		skills[72].pp = 20;
		skills[72].residual = skills[72].pp;
		skills[72].ae = flinch;
		skills[72].pb = 30;
	}
	//073-Á¬Ìß---24
	{
		skills[73].name = "Á¬Ìß";
		skills[73].levelreq = 24;
		skills[73].ppt = Fighting;
		skills[73].kind = Physical;
		skills[73].power = 30;
		skills[73].accuracy = 100;
		skills[73].pp = 30;
		skills[73].residual = skills[73].pp;
		skills[73].ae = combo;
		skills[73].pb = 25;
	}
	//074-°ÙÍò¶ÖÖØÌß---57
	{
		skills[74].name = "°ÙÍò¶ÖÖØÌß";
		skills[74].levelreq = 57;
		skills[74].ppt = Normal;
		skills[74].kind = Physical;
		skills[74].power = 120;
		skills[74].accuracy = 75;
		skills[74].pp = 5;
		skills[74].residual = skills[74].pp;
		skills[74].ae = Nu;
		skills[74].pb = 0;
	}
	//075-·ÉÌß---47
	{
		skills[75].name = "·ÉÌß";
		skills[75].levelreq = 47;
		skills[75].ppt = Fighting;
		skills[75].kind = Physical;
		skills[75].power = 100;
		skills[75].accuracy = 95;
		skills[75].pp = 10;
		skills[75].residual = skills[75].pp;
		skills[75].ae = Nu;
		skills[75].pb = 0;
	}
	//076-»ØÐýÌß---27
	{
		skills[76].name = "»ØÐýÌß";
		skills[76].levelreq = 27;
		skills[76].ppt = Fighting;
		skills[76].kind = Physical;
		skills[76].power = 60;
		skills[76].accuracy = 85;
		skills[76].pp = 15;
		skills[76].residual = skills[76].pp;
		skills[76].ae = flinch;
		skills[76].pb = 30;
	}
	//077-½Ç×²---30
	{
		skills[77].name = "½Ç×²";
		skills[77].levelreq = 30;
		skills[77].ppt = Normal;
		skills[77].kind = Physical;
		skills[77].power = 65;
		skills[77].accuracy = 100;
		skills[77].pp = 25;
		skills[77].residual = skills[77].pp;
		skills[77].ae = Nu;
		skills[77].pb = 0;
	}
	//078-Í·é³---34
	{
		skills[78].name = "Í·é³";
		skills[78].levelreq = 34;
		skills[78].ppt = Normal;
		skills[78].kind = Physical;
		skills[78].power = 70;
		skills[78].accuracy = 100;
		skills[78].pp = 15;
		skills[78].residual = skills[78].pp;
		skills[78].ae = flinch;
		skills[78].pb = 30;
	}
	//079-Ì©É½Ñ¹¶¥---42
	{
		skills[79].name = "Ì©É½Ñ¹¶¥";
		skills[79].levelreq = 42;
		skills[79].ppt = Normal;
		skills[79].kind = Physical;
		skills[79].power = 85;
		skills[79].accuracy = 100;
		skills[79].pp = 15;
		skills[79].residual = skills[79].pp;
		skills[79].ae = paralyze;
		skills[79].pb = 30;
	}
	//080-ÂÒ»÷---24
	{
		skills[80].name = "ÂÒ»÷";
		skills[80].levelreq = 24;
		skills[80].ppt = Normal;
		skills[80].kind = Physical;
		skills[80].power = 20;
		skills[80].accuracy = 85;
		skills[80].pp = 20;
		skills[80].residual = skills[80].pp;
		skills[80].ae = combo;
		skills[80].pb = 25;
	}
	//081-Ë«Õë---20  ¿ÉÒÔÖÐ¶¾
	{
		skills[81].name = "Ë«Õë";
		skills[81].levelreq = 20;
		skills[81].ppt = Bug;
		skills[81].kind = Physical;
		skills[81].power = 25;
		skills[81].accuracy = 100;
		skills[81].pp = 20;
		skills[81].residual = skills[81].pp;
		skills[81].ae = combo;
		skills[81].pb = 25;
	}
	//082-³ª¸è---25
	{
		skills[82].name = "³ª¸è";
		skills[82].levelreq = 25;
		skills[82].ppt = Normal;
		skills[82].kind = Change;
		skills[82].power = 0;
		skills[82].accuracy = 55;
		skills[82].pp = 15;
		skills[82].residual = skills[82].pp;
		skills[82].ae = sleep;
		skills[82].pb = 0;
	}
	//083-³¬Òô²¨---20
	{
		skills[83].name = "³¬Òô²¨";
		skills[83].levelreq = 20;
		skills[83].ppt = Normal;
		skills[83].kind = Change;
		skills[83].power = 0;
		skills[83].accuracy = 55;
		skills[83].pp = 20;
		skills[83].residual = skills[83].pp;
		skills[83].ae = confusion;
		skills[83].pb = 0;
	}
	//084-ÈÜ½âÒº---08
	{
		skills[84].name = "ÈÜ½âÒº";
		skills[84].levelreq = 8;
		skills[84].ppt = Poison;
		skills[84].kind = Special;
		skills[84].power = 40;
		skills[84].accuracy = 100;
		skills[84].pp = 30;
		skills[84].residual = skills[84].pp;
		skills[84].ae = SdfDn;
		skills[84].pb = 10;
	}
	//085-³åÀË---47
	{
		skills[85].name = "³åÀË";
		skills[85].levelreq = 47;
		skills[85].ppt = Water;
		skills[85].kind = Special;
		skills[85].power = 90;
		skills[85].accuracy = 100;
		skills[85].pp = 15;
		skills[85].residual = skills[85].pp;
		skills[85].ae = Nu;
		skills[85].pb = 0;
	}
	//086-±ù¶³¹âÊø---47
	{
		skills[86].name = "±ù¶³¹âÊø";
		skills[86].levelreq = 47;
		skills[86].ppt = Ice;
		skills[86].kind = Special;
		skills[86].power = 90;
		skills[86].accuracy = 100;
		skills[86].pp = 10;
		skills[86].residual = skills[86].pp;
		skills[86].ae = freeze;
		skills[86].pb = 10;
	}
	//087-±©·çÑ©---54
	{
		skills[87].name = "±©·çÑ©";
		skills[87].levelreq = 54;
		skills[87].ppt = Ice;
		skills[87].kind = Special;
		skills[87].power = 110;
		skills[87].accuracy = 70;
		skills[87].pp = 5;
		skills[87].residual = skills[87].pp;
		skills[87].ae = freeze;
		skills[87].pb = 10;
	}
	//088-»ÃÏó¹âÏß---32
	{
		skills[88].name = "»ÃÏó¹âÏß";
		skills[88].levelreq = 32;
		skills[88].ppt = Psychic;
		skills[88].kind = Special;
		skills[88].power = 65;
		skills[88].accuracy = 100;
		skills[88].pp = 20;
		skills[88].residual = skills[88].pp;
		skills[88].ae = confusion;
		skills[88].pb = 10;
	}
	//089-ÅÝÄ­¹âÏß---32
	{
		skills[89].name = "ÅÝÄ­¹âÏß";
		skills[89].levelreq = 32;
		skills[89].ppt = Water;
		skills[89].kind = Special;
		skills[89].power = 65;
		skills[89].accuracy = 100;
		skills[89].pp = 20;
		skills[89].residual = skills[89].pp;
		skills[89].ae = SpeDn;
		skills[89].pb = 10;
	}
	//090-¼«¹âÊø---32
	{
		skills[90].name = "¼«¹âÊø";
		skills[90].levelreq = 32;
		skills[90].ppt = Ice;
		skills[90].kind = Special;
		skills[90].power = 65;
		skills[90].accuracy = 100;
		skills[90].pp = 20;
		skills[90].residual = skills[90].pp;
		skills[90].ae = AtkDn;
		skills[90].pb = 10;
	}
	//091-ÆÆ»µ¹âÏß---72
	{
		skills[91].name = "ÆÆ»µ¹âÏß";
		skills[91].levelreq = 72;
		skills[91].ppt = Normal;
		skills[91].kind = Special;
		skills[91].power = 150;
		skills[91].accuracy = 90;
		skills[91].pp = 5;
		skills[91].residual = skills[91].pp;
		skills[91].ae = Nu;
		skills[91].pb = 0;
	}
	//092-×Ä×ê---42
	{
		skills[92].name = "×Ä×ê";
		skills[92].levelreq = 42;
		skills[92].ppt = Flying;
		skills[92].kind = Physical;
		skills[92].power = 80;
		skills[92].accuracy = 100;
		skills[92].pp = 20;
		skills[92].residual = skills[92].pp;
		skills[92].ae = Nu;
		skills[92].pb = 0;
	}
	//093-×Ä---07
	{
		skills[93].name = "×Ä";
		skills[93].levelreq = 7;
		skills[93].ppt = Flying;
		skills[93].kind = Physical;
		skills[93].power = 35;
		skills[93].accuracy = 100;
		skills[93].pp = 35;
		skills[93].residual = skills[93].pp;
		skills[93].ae = Nu;
		skills[93].pb = 0;
	}
	//094-µØÓü·­¹ö---42
	{
		skills[94].name = "µØÓü·­¹ö";
		skills[94].levelreq = 42;
		skills[94].ppt = Fighting;
		skills[94].kind = Physical;
		skills[94].power = 80;
		skills[94].accuracy = 80;
		skills[94].pp = 20;
		skills[94].residual = skills[94].pp;
		skills[94].ae = Nu;
		skills[94].pb = 0;
	}
	//095-µØÇòÉÏÍ¶---25  Ôì³ÉºÍ×Ô¼ºµÈ¼¶ÏàÍ¬µÄÉËº¦
	{
		skills[95].name = "µØÇòÉÏÍ¶";
		skills[95].levelreq = 25;
		skills[95].ppt = Fighting;
		skills[95].kind = Physical;
		skills[95].power = 0;
		skills[95].accuracy = 100;
		skills[95].pp = 20;
		skills[95].residual = skills[95].pp;
		skills[95].ae = Nu;
		skills[95].pb = 0;
	}
	//096-¹ÖÁ¦---42
	{
		skills[96].name = "¹ÖÁ¦";
		skills[96].levelreq = 42;
		skills[96].ppt = Normal;
		skills[96].kind = Physical;
		skills[96].power = 80;
		skills[96].accuracy = 100;
		skills[96].pp = 15;
		skills[96].residual = skills[96].pp;
		skills[96].ae = Nu;
		skills[96].pb = 0;
	}
	//097-ÎüÈ¡---20
	{
		skills[97].name = "ÎüÈ¡";
		skills[97].levelreq = 20;
		skills[97].ppt = Grass;
		skills[97].kind = Special;
		skills[97].power = 20;
		skills[97].accuracy = 100;
		skills[97].pp = 25;
		skills[97].residual = skills[97].pp;
		skills[97].ae = drain;
		skills[97].pb = 0;
	}
	//098-ÈÕ¹âÊø---54
	{
		skills[98].name = "ÈÕ¹âÊø";
		skills[98].levelreq = 54;
		skills[98].ppt = Grass;
		skills[98].kind = Special;
		skills[98].power = 120;
		skills[98].accuracy = 100;
		skills[98].pp = 5;
		skills[98].residual = skills[98].pp;
		skills[98].ae = Nu;
		skills[98].pb = 0;
	}
	//099-Ê®Íò·üÌØ---45
	{
		skills[99].name = "Ê®Íò·üÌØ";
		skills[99].levelreq = 45;
		skills[99].ppt = Electric;
		skills[99].kind = Special;
		skills[99].power = 90;
		skills[99].accuracy = 100;
		skills[99].pp = 15;
		skills[99].residual = skills[99].pp;
		skills[99].ae = paralyze;
		skills[99].pb = 10;
	}
	//100-´òÀ×---52
	{
		skills[100].name = "´òÀ×";
		skills[100].levelreq = 52;
		skills[100].ppt = Electric;
		skills[100].kind = Special;
		skills[100].power = 110;
		skills[100].accuracy = 70;
		skills[100].pp = 10;
		skills[100].residual = skills[100].pp;
		skills[100].ae = paralyze;
		skills[100].pb = 30;
	}
	//101-ÂäÊ¯---17
	{
		skills[101].name = "ÂäÊ¯";
		skills[101].levelreq = 17;
		skills[101].ppt = Rock;
		skills[101].kind = Physical;
		skills[101].power = 50;
		skills[101].accuracy = 90;
		skills[101].pp = 15;
		skills[101].residual = skills[101].pp;
		skills[101].ae = Nu;
		skills[101].pb = 0;
	}
	//102-µØÕð---47
	{
		skills[102].name = "µØÕð";
		skills[102].levelreq = 47;
		skills[102].ppt = Ground;
		skills[102].kind = Physical;
		skills[102].power = 100;
		skills[102].accuracy = 100;
		skills[102].pp = 10;
		skills[102].residual = skills[102].pp;
		skills[102].ae = Nu;
		skills[102].pb = 0;
	}
	//103-ÍÚ¶´---42
	{
		skills[103].name = "ÍÚ¶´";
		skills[103].levelreq = 42;
		skills[103].ppt = Ground;
		skills[103].kind = Physical;
		skills[103].power = 80;
		skills[103].accuracy = 100;
		skills[103].pp = 10;
		skills[103].residual = skills[103].pp;
		skills[103].ae = Nu;
		skills[103].pb = 0;
	}
	//104-ÄîÁ¦---17
	{
		skills[104].name = "ÄîÁ¦";
		skills[104].levelreq = 17;
		skills[104].ppt = Psychic;
		skills[104].kind = Special;
		skills[104].power = 50;
		skills[104].accuracy = 100;
		skills[104].pp = 25;
		skills[104].residual = skills[104].pp;
		skills[104].ae = confusion;
		skills[104].pb = 10;
	}
	//105-¾«ÉñÇ¿Äî---47
	{
		skills[105].name = "¾«ÉñÇ¿Äî";
		skills[105].levelreq = 47;
		skills[105].ppt = Psychic;
		skills[105].kind = Special;
		skills[105].power = 90;
		skills[105].accuracy = 100;
		skills[105].pp = 10;
		skills[105].residual = skills[105].pp;
		skills[105].ae = SdfDn;
		skills[105].pb = 10;
	}
	//106-ºÚÒ¹Ä§Ó°---25 ¸øÓèºÍ×Ô¼ºµÈ¼¶Í¬µÈµÄÉËº¦
	{
		skills[106].name = "ºÚÒ¹Ä§Ó°";
		skills[106].levelreq = 25;
		skills[106].ppt = Ghost;
		skills[106].kind = Special;
		skills[106].power = 0;
		skills[106].accuracy = 100;
		skills[106].pp = 15;
		skills[106].residual = skills[106].pp;
		skills[106].ae = Nu;
		skills[106].pb = 0;
	}
	//107-×ÔÎÒÔÙÉú---37
	{
		skills[107].name = "×ÔÎÒÔÙÉú";
		skills[107].levelreq = 37;
		skills[107].ppt = Normal;
		skills[107].kind = Change;
		skills[107].power = 0;
		skills[107].accuracy = 0;
		skills[107].pp = 10;
		skills[107].residual = skills[107].pp;
		skills[107].ae = heal;
		skills[107].pb = 0;
	}
	//108-ÆæÒìÖ®¹â---17
	{
		skills[108].name = "ÆæÒìÖ®¹â";
		skills[108].levelreq = 17;
		skills[108].ppt = Ghost;
		skills[108].kind = Change;
		skills[108].power = 0;
		skills[108].accuracy = 100;
		skills[108].pp = 10;
		skills[108].residual = skills[108].pp;
		skills[108].ae = confusion;
		skills[108].pb = 0;
	}
	//109-±äÔ²---15
	{
		skills[109].name = "±äÔ²";
		skills[109].levelreq = 15;
		skills[109].ppt = Normal;
		skills[109].kind = Change;
		skills[109].power = 0;
		skills[109].accuracy = 0;
		skills[109].pp = 40;
		skills[109].residual = skills[109].pp;
		skills[109].ae = DefUp;
		skills[109].pb = 0;
	}
	//110-ÆÁÕÏ---27
	{
		skills[110].name = "ÆÁÕÏ";
		skills[110].levelreq = 27;
		skills[110].ppt = Psychic;
		skills[110].kind = Change;
		skills[110].power = 0;
		skills[110].accuracy = 0;
		skills[110].pp = 10;
		skills[110].residual = skills[110].pp;
		skills[110].ae = DefUpp;
		skills[110].pb = 0;
	}
	//111-¹âÇ½---32
	{
		skills[111].name = "¹âÇ½";
		skills[111].levelreq = 32;
		skills[111].ppt = Psychic;
		skills[111].kind = Change;
		skills[111].power = 0;
		skills[111].accuracy = 0;
		skills[111].pp = 30;
		skills[111].residual = skills[111].pp;
		skills[111].ae = SdfUpp;
		skills[111].pb = 0;
	}
	//112-Õ¨µ°---49
	{
		skills[112].name = "Õ¨µ°";
		skills[112].levelreq = 49;
		skills[112].ppt = Normal;
		skills[112].kind = Physical;
		skills[112].power = 100;
		skills[112].accuracy = 75;
		skills[112].pp = 10;
		skills[112].residual = skills[112].pp;
		skills[112].ae = Nu;
		skills[112].pb = 0;
	}
	//113-ÉàÌò--07
	{
		skills[113].name = "ÉàÌò";
		skills[113].levelreq = 7;
		skills[113].ppt = Ghost;
		skills[113].kind = Physical;
		skills[113].power = 30;
		skills[113].accuracy = 11300;
		skills[113].pp = 30;
		skills[113].residual = skills[113].pp;
		skills[113].ae = paralyze;
		skills[113].pb = 30;
	}
	//114-×ÇÎí---14
	{
		skills[114].name = "×ÇÎí";
		skills[114].levelreq = 1144;
		skills[114].ppt = Poison;
		skills[114].kind = Special;
		skills[114].power = 30;
		skills[114].accuracy = 70;
		skills[114].pp = 20;
		skills[114].residual = skills[114].pp;
		skills[114].ae = poison;
		skills[114].pb = 40;
	}
	//115-ÎÛÄà¹¥»÷---30
	{
		skills[115].name = "ÎÛÄà¹¥»÷";
		skills[115].levelreq = 30;
		skills[115].ppt = Poison;
		skills[115].kind = Special;
		skills[115].power = 65;
		skills[115].accuracy = 11500;
		skills[115].pp = 20;
		skills[115].residual = skills[115].pp;
		skills[115].ae = poison;
		skills[115].pb = 30;
	}
	//116-¹Ç°ô---27
	{
		skills[116].name = "¹Ç°ô";
		skills[116].levelreq = 27;
		skills[116].ppt = Ground;
		skills[116].kind = Physical;
		skills[116].power = 65;
		skills[116].accuracy = 85;
		skills[116].pp = 20;
		skills[116].residual = skills[116].pp;
		skills[116].ae = flinch;
		skills[116].pb = 10;
	}
	//117-´ó×Ö±¬Ñ×---52
	{
		skills[117].name = "´ó×Ö±¬Ñ×";
		skills[117].levelreq = 52;
		skills[117].ppt = Fire;
		skills[117].kind = Special;
		skills[117].power = 110;
		skills[117].accuracy = 85;
		skills[117].pp = 5;
		skills[117].residual = skills[117].pp;
		skills[117].ae = burn;
		skills[117].pb = 10;
	}
	//118-ÅÊÆÙ---35
	{
		skills[118].name = "ÅÊÆÙ";
		skills[118].levelreq = 35;
		skills[118].ppt = Water;
		skills[118].kind = Physical;
		skills[118].power = 80;
		skills[118].accuracy = 100;
		skills[118].pp = 15;
		skills[118].residual = skills[118].pp;
		skills[118].ae = flinch;
		skills[118].pb = 20;
	}
	//119-¸ßËÙÐÇÐÇ---24
	{
		skills[119].name = "¸ßËÙÐÇÐÇ";
		skills[119].levelreq = 24;
		skills[119].ppt = Normal;
		skills[119].kind = Special;
		skills[119].power = 60;
		skills[119].accuracy = 0;
		skills[119].pp = 20;
		skills[119].residual = skills[119].pp;
		skills[119].ae = Nu;
		skills[119].pb = 0;
	}
	//120-¼â´Ì¼ÓÅ©ÅÚ---15
	{
		skills[120].name = "¼â´Ì¼ÓÅ©ÅÚ";
		skills[120].levelreq = 15;
		skills[120].ppt = Normal;
		skills[120].kind = Physical;
		skills[120].power = 20;
		skills[120].accuracy = 100;
		skills[120].pp = 15;
		skills[120].residual = skills[120].pp;
		skills[120].ae = combo;
		skills[120].pb = 25;
	}
	//121-·ÉÏ¥Ìß---62
	{
		skills[121].name = "·ÉÏ¥Ìß";
		skills[121].levelreq = 62;
		skills[121].ppt = Fighting;
		skills[121].kind = Physical;
		skills[121].power = 130;
		skills[121].accuracy = 90;
		skills[121].pp = 10;
		skills[121].residual = skills[121].pp;
		skills[121].ae = Nu;
		skills[121].pb = 0;
	}
	//122-Ê³ÃÎ---55
	{
		skills[122].name = "Ê³ÃÎ";
		skills[122].levelreq = 55;
		skills[122].ppt = Psychic;
		skills[122].kind = Special;
		skills[122].power = 100;
		skills[122].accuracy = 100;
		skills[122].pp = 15;
		skills[122].residual = skills[122].pp;
		skills[122].ae = drain;
		skills[122].pb = 0;
	}
	//123-ÎüÑª---47
	{
		skills[123].name = "ÎüÑª";
		skills[123].levelreq = 47;
		skills[123].ppt = Bug;
		skills[123].kind = Physical;
		skills[123].power = 80;
		skills[123].accuracy = 100;
		skills[123].pp = 10;
		skills[123].residual = skills[123].pp;
		skills[123].ae = drain;
		skills[123].pb = 0;
	}
	//124-ÃÔ»èÈ­---36
	{
		skills[124].name = "ÃÔ»èÈ­";
		skills[124].levelreq = 36;
		skills[124].ppt = Normal;
		skills[124].kind = Physical;
		skills[124].power = 70;
		skills[124].accuracy = 100;
		skills[124].pp = 10;
		skills[124].residual = skills[124].pp;
		skills[124].ae = confusion;
		skills[124].pb = 20;
	}
	//125-Ä¢¹½æß×Ó---27
	{
		skills[125].name = "Ä¢¹½æß×Ó";
		skills[125].levelreq = 27;
		skills[125].ppt = Grass;
		skills[125].kind = Change;
		skills[125].power = 0;
		skills[125].accuracy = 100;
		skills[125].pp = 15;
		skills[125].residual = skills[125].pp;
		skills[125].ae = sleep;
		skills[125].pb = 0;
	}
	//126-ÉÁ¹â---27
	{
		skills[126].name = "ÉÁ¹â";
		skills[126].levelreq = 27;
		skills[126].ppt = Normal;
		skills[126].kind = Change;
		skills[126].power = 0;
		skills[126].accuracy = 100;
		skills[126].pp = 20;
		skills[126].residual = skills[126].pp;
		skills[126].ae = AccDn;
		skills[126].pb = 0;
	}
	//127-¾«Éñ²¨---30  Ôì³ÉÊ¹ÓÃÕßµÈ¼¶*£¨0.5-1.5£©µÄ¹Ì¶¨ÉËº¦
	{
		skills[127].name = "¾«Éñ²¨";
		skills[127].levelreq = 30;
		skills[127].ppt = Psychic;
		skills[127].kind = Special;
		skills[127].power = 0;
		skills[127].accuracy = 100;
		skills[127].pp = 15;
		skills[127].residual = skills[127].pp;
		skills[127].ae = Nu;
		skills[127].pb = 0;
	}
	//128-Ð·Ç¯´¸---47
	{
		skills[128].name = "Ð·Ç¯´¸";
		skills[128].levelreq = 47;
		skills[128].ppt = Water;
		skills[128].kind = Physical;
		skills[128].power = 100;
		skills[128].accuracy = 90;
		skills[128].pp = 10;
		skills[128].residual = skills[128].pp;
		skills[128].ae = CthUp;
		skills[128].pb = 10;
	}
	//129-¹ÇÍ·ïÚ---39
	{
		skills[129].name = "¹ÇÍ·ïÚ";
		skills[129].levelreq = 39;
		skills[129].ppt = Ground;
		skills[129].kind = Physical;
		skills[129].power = 50;
		skills[129].accuracy = 90;
		skills[129].pp = 10;
		skills[129].residual = skills[129].pp;
		skills[129].ae = combo;
		skills[129].pb = 25;
	}
	//130-ÑÒ±À---37
	{
		skills[130].name = "ÑÒ±À";
		skills[130].levelreq = 37;
		skills[130].ppt = Rock;
		skills[130].kind = Physical;
		skills[130].power = 75;
		skills[130].accuracy = 90;
		skills[130].pp = 10;
		skills[130].residual = skills[130].pp;
		skills[130].ae = flinch;
		skills[130].pb = 30;
	}
	//131-±ØÉ±ÃÅÑÀ---40
	{
		skills[131].name = "±ØÉ±ÃÅÑÀ";
		skills[131].levelreq = 40;
		skills[131].ppt = Normal;
		skills[131].kind = Physical;
		skills[131].power = 80;
		skills[131].accuracy = 90;
		skills[131].pp = 15;
		skills[131].residual = skills[131].pp;
		skills[131].ae = flinch;
		skills[131].pb = 20;
	}
}