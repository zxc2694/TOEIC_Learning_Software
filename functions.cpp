#include "stdafx.h"
#include "MFCApplication.h"
#include "MFCApplicationDlg.h"
#include "afxdialogex.h"
#include "functions.h"

int button_Read(int *d) // How many day are selected
{
	int n = 0;
	for (int i = 0; i < 31; i++)
	{
		if (d[i] == 1)
			n++;
	}
	return n;
}

void getDayWord(int Day, Words &myWords)
{
	if (Day == 1)
		getWords_Day1(myWords);

	if (Day == 2)
		getWords_Day2(myWords);

	if (Day == 3)
		getWords_Day3(myWords);

	if (Day == 4)
		getWords_Day4(myWords);

	if (Day == 5)
		getWords_Day5(myWords);

	if (Day == 6)
		getWords_Day6(myWords);

	if (Day == 7)
		getWords_Day7(myWords);

	if (Day == 8)
		getWords_Day8(myWords);

	if (Day == 9)
		getWords_Day9(myWords);

	if (Day == 10)
		getWords_Day10(myWords);

	if (Day == 11)
		getWords_Day11(myWords);

	if (Day == 12)
		getWords_Day12(myWords);

	if (Day == 13)
		getWords_Day13(myWords);

	if (Day == 14)
		getWords_Day14(myWords);

	if (Day == 15)
		getWords_Day15(myWords);

	if (Day == 16)
		getWords_Day16(myWords);

	if (Day == 17)
		getWords_Day17(myWords);

	if (Day == 18)
		getWords_Day18(myWords);

	if (Day == 19)
		getWords_Day19(myWords);

	if (Day == 20)
		getWords_Day20(myWords);

	if (Day == 21)
		getWords_Day21(myWords);

	if (Day == 22)
		getWords_Day22(myWords);

	if (Day == 23)
		getWords_Day23(myWords);

	if (Day == 24)
		getWords_Day24(myWords);

	if (Day == 25)
		getWords_Day25(myWords);

	if (Day == 26)
		getWords_Day26(myWords);

	if (Day == 27)
		getWords_Day27(myWords);

	if (Day == 28)
		getWords_Day28(myWords);

	if (Day == 29)
		getWords_Day29(myWords);

	if (Day == 30)
		getWords_Day30(myWords);
}

void getWords_Day1(Words &words)
{
}
void getWords_Day2(Words &words)
{
}
void getWords_Day3(Words &words)
{
}
void getWords_Day4(Words &words)
{
}
void getWords_Day5(Words &words)
{
}
void getWords_Day6(Words &words)
{
}
void getWords_Day7(Words &words)
{
}
void getWords_Day8(Words &words)
{
}
void getWords_Day9(Words &words)
{
}
void getWords_Day10(Words &words)
{
}
void getWords_Day11(Words &words)
{
}
void getWords_Day12(Words &words)
{
}
void getWords_Day13(Words &words)
{
}
void getWords_Day14(Words &words)
{
}
void getWords_Day15(Words &words)
{
}
void getWords_Day16(Words &words)
{
}
void getWords_Day17(Words &words)
{
}
void getWords_Day18(Words &words)
{
}
void getWords_Day19(Words &words)
{
}
void getWords_Day20(Words &words)
{
}
void getWords_Day21(Words &words)
{
}
void getWords_Day22(Words &words)
{
}
void getWords_Day23(Words &words)
{
	words.word[0] = _T("constitute"); words.number[0] = 2201; words.chinese[0] = _T("v. �c���B�]��");	 words.ps[0] = _T("\r\nps. constitution (n) �˪k�B���{�B�զ��Fconstitutional (adj) �˪k���B��檺");
	words.word[1] = _T("breakdown"); words.number[1] = 2204; words.chinese[1] = _T("n. �G�١B���l�B�}��");	 words.ps[1] = _T("");
	words.word[2] = _T("originate"); words.number[2] = 2208; words.chinese[2] = _T("v. �o���a�B�ӦۡB�Щl");	 words.ps[2] = _T("\r\nps. original (adj) ��Ъ��B���Ӫ��Foriginally (adv) ��ӡB�_��");
	words.word[3] = _T("receivable"); words.number[3] = 2211; words.chinese[3] = _T("adj. �����ڪ��B�i������");	 words.ps[3] = _T("");
	words.word[4] = _T("consulate"); words.number[4] = 2214; words.chinese[4] = _T("n. ����]");	 words.ps[4] = _T("");
	words.word[5] = _T("circulate"); words.number[5] = 2217; words.chinese[5] = _T("v. �Ǿ\(���~�B��T��)�B�y�q�B�`���B�Ǽ�");	 words.ps[5] = _T("\r\nps. circulation (n) �`���B�y�q");
	words.word[6] = _T("sequel"); words.number[6] = 2220; words.chinese[6] = _T("n. (�q�v�B�Ѫ�) �򶰡B�H���ӨӪ���");	 words.ps[6] = _T("");
	words.word[7] = _T("adverse"); words.number[7] = 2222; words.chinese[7] = _T("adj. �t�����B���`���B���Q���B�Ĺ諸");	 words.ps[7] = _T("\r\nps. adversely (adv) �t���a�B���Q�a");
	words.word[8] = _T("frustrated"); words.number[8] = 2226; words.chinese[8] = _T("adj. �Ҵo���B���𪺡B���骺");	 words.ps[8] = _T("\r\nps. frustrate (v) �Ϯ��ѡB�Ϯ���B����Ffrustration (n) ����B�q��");
	words.word[9] = _T("prosperous"); words.number[9] = 2229; words.chinese[9] = _T("adj. ���\���B�������B�c�a��");	 words.ps[9] = _T("\r\nps. prosperity (n) �c�a�B�����B���\");
	words.word[10] = _T("breakage"); words.number[10] = 2232; words.chinese[10] = _T("n. �}�l�B���a");	 words.ps[10] = _T("");
	words.word[11] = _T("constantly"); words.number[11] = 2237; words.chinese[11] = _T("adj. ����a�B���_�a");	 words.ps[11] = _T("\r\nps. constant (adj) ���s���_���B����");
	words.word[12] = _T("solely"); words.number[12] = 2240; words.chinese[12] = _T("adv. ���a");	 words.ps[12] = _T("\r\nps. sole (adj) �Ȧ��B�ߤ@��");
	words.word[13] = _T("expenditure"); words.number[13] = 2242; words.chinese[13] = _T("n. ��X�B�g�O");	 words.ps[13] = _T("\r\nps. �P�q���Gcosts�Bexpenses");
	words.word[14] = _T("definitive"); words.number[14] = 2245; words.chinese[14] = _T("adj. �̲ת��B�M�w�ʪ��B�̨Ϊ�");	 words.ps[14] = _T("\r\nps. definitively (adj) �̲צa");
	words.word[15] = _T("fixture"); words.number[15] = 2248; words.chinese[15] = _T("n. (�ЫΤ��T�w��)�˸m�B�]��");	 words.ps[15] = _T("");
	words.word[16] = _T("ongoing"); words.number[16] = 2252; words.chinese[16] = _T("adj. ����i�檺�B���_�o�i��");	 words.ps[16] = _T("");
	words.word[17] = _T("compatible"); words.number[17] = 2254; words.chinese[17] = _T("adj. �ۮe���B��@�s��");	 words.ps[17] = _T("\r\nps. compatibility (n) �ۮe�ʡB�æs�F�ۤϵ��Gincompatible (adj) ���ۮe��");
	words.word[18] = _T("bookkeeper"); words.number[18] = 2257; words.chinese[18] = _T("n. ï�O��");	 words.ps[18] = _T("");
	words.word[19] = _T("demolish"); words.number[19] = 2261; words.chinese[19] = _T("v. �鷴�B���a�B��½");	 words.ps[19] = _T("\r\nps. demolition (n) �}�a");
	words.word[20] = _T("extraordinary"); words.number[20] = 2265; words.chinese[20] = _T("adj. �D�Z���B�S�O���B��H���B�S����");	 words.ps[20] = _T("\r\nps. �ۤϵ��Gordinary ���q���B���Z��");
	words.word[21] = _T("loyalty"); words.number[21] = 2266; words.chinese[21] = _T("n. ���۫סB����");	 words.ps[21] = _T("");
	words.word[22] = _T("consolidate"); words.number[22] = 2274; words.chinese[22] = _T("v. �d�T(�B�ҡB�a��)�B�ϰ��T�B�X��");	 words.ps[22] = _T("\r\nps. consolidation (n) �[�j�B�d�T");
	words.word[23] = _T("perishable"); words.number[23] = 2275; words.chinese[23] = _T("adj. ���G�ꪺ�B���ܽ誺");	 words.ps[23] = _T("\r\nps. perish (v) �G��B���h");
	words.word[24] = _T("simplify"); words.number[24] = 2279; words.chinese[24] = _T("v. ²�ơB��¤�");	 words.ps[24] = _T("\r\nps. simplification (n) ��¤ơB²��ơFsimplicity (n) ²��B���");
	words.word[25] = _T("delicate"); words.number[25] = 2283; words.chinese[25] = _T("adj. �Ƥ⪺�B�L�����B�ֲӪ��B�ܮz���B��o��  =  fragile");	 words.ps[25] = _T("");
	words.word[26] = _T("dismissal"); words.number[26] = 2285; words.chinese[26] = _T("n. �Ѷ��B�K¾�B���Ҽ{");	 words.ps[26] = _T("\r\nps. dismiss (v) �Ѷ��B���Ҽ{");
	words.word[27] = _T("inaugurate"); words.number[27] = 2288; words.chinese[27] = _T("v. �|��}��/������§�B�ЫءB�}�l");	 words.ps[27] = _T("\r\nps. inauguration (n) �N¾�B�}���B�}�l");
	words.word[28] = _T("activate"); words.number[28] = 2292; words.chinese[28] = _T("v. �ҰʡB����");	 words.ps[28] = _T("\r\nps. acitve (adj) �n�����B���⪺�Factivation (n) ����(�@��)�Factivity (n)����");
	words.word[29] = _T("reform"); words.number[29] = 2294; words.chinese[29] = _T("v. �ﭲ�B���s�B��y");	 words.ps[29] = _T("");
	words.word[30] = _T("surplus"); words.number[30] = 2298; words.chinese[30] = _T("n. �վl�B���t�B�Ѿl�B�L��");	 words.ps[30] = _T("");
	words.word[31] = _T("recovery"); words.number[31] = 2300; words.chinese[31] = _T("n. (�g��)�^�ɡB�_�d�B��_");	 words.ps[31] = _T("\r\nps. recover (v) ��_�B�d�_�B��^");

}
void getWords_Day24(Words &words)
{
	words.word[0] = _T("lessen"); words.number[0] = 2305; words.chinese[0] = _T("v. ��֡B��B�ܤp");	 words.ps[0] = _T("\r\nps. less (adj) ���p���F(adv) ���p�a�F\r\n    lesser (adj) ���p���B���֪��B���n���F(adv) ����");
	words.word[1] = _T("obstacle"); words.number[1] = 2307; words.chinese[1] = _T("n. ��ê(��)�B��ê = obstruction");	 words.ps[1] = _T("");
	words.word[2] = _T("arbitration"); words.number[2] = 2310; words.chinese[2] = _T("n. (�ɪ�����)����B���M");	 words.ps[2] = _T("");
	words.word[3] = _T("installment"); words.number[3] = 2311; words.chinese[3] = _T("n. �����I�ڡB�@���B�@�`");	 words.ps[3] = _T("");
	words.word[4] = _T("pedestrian"); words.number[4] = 2315; words.chinese[4] = _T("n. ��H�Fadj. �{�B���B�B�檺");	 words.ps[4] = _T("");
	words.word[5] = _T("remarkable"); words.number[5] = 2317; words.chinese[5] = _T("adj. ��H���B�X����");	 words.ps[5] = _T("\r\nps. remarkably (adv) �D�Z�a�B����a");
	words.word[6] = _T("conservation"); words.number[6] = 2320; words.chinese[6] = _T("n. �O�@�B�O�s = preservation");	 words.ps[6] = _T("\r\nps. conserve (v) �O�s�B�O�@ = preserve");
	words.word[7] = _T("harsh"); words.number[7] = 2324; words.chinese[7] = _T("adj. �Y�F���B�V�誺�B(����B����)�x����");	 words.ps[7] = _T("\r\nps. harshly (adv) �Y�V�a�Fharshness (n) �V��B�c�H");
	words.word[8] = _T("waive"); words.number[8] = 2327; words.chinese[8] = _T("v. �M�^�B�߱�(�k�w�v���B�v�Q)");	 words.ps[8] = _T("\r\nps. waiver (n) (�v�Q��)�߱�B���v");
	words.word[9] = _T("equal"); words.number[9] = 2329; words.chinese[9] = _T("adj. �۵����B�۷����Fv. ����Fn. �۵����H�ƪ�");	 words.ps[9] = _T("\r\nps. equally (adv) �۵��a�B�����a�Fequality (n) �P��");
	words.word[10] = _T("lasting"); words.number[10] = 2332; words.chinese[10] = _T("adj. ���[���B�@�[��");	 words.ps[10] = _T("\r\nps. last (v) ����B����");
	words.word[11] = _T("proficiency"); words.number[11] = 2335; words.chinese[11] = _T("n. ��q�B���m");	 words.ps[11] = _T("");
	words.word[12] = _T("prominent"); words.number[12] = 2339; words.chinese[12] = _T("adj. �ۦW���B�㲴���B�ǥX��");	 words.ps[12] = _T("\r\nps. prominently (adv) ��ۦa�B���n�a");
	words.word[13] = _T("simultaneously"); words.number[13] = 2342; words.chinese[13] = _T("adv. �P�ɦa");	 words.ps[13] = _T("\r\nps. simultaneous (adj) �P�ɪ�");
	words.word[14] = _T("distract"); words.number[14] = 2345; words.chinese[14] = _T("v. �Ϥ��ߡB�ಾ'�B�x�Z");	 words.ps[14] = _T("\r\nps. distracting (adj) �O�H���ߪ��Fdistraction (n) �`�N�O�����B�ϤH���ߪ���");
	words.word[15] = _T("attest"); words.number[15] = 2348; words.chinese[15] = _T("v. �ҹ�B�ҩ�");	 words.ps[15] = _T("");
	words.word[16] = _T("breakthrough"); words.number[16] = 2354; words.chinese[16] = _T("n. ��}�B���j�i�i");	 words.ps[16] = _T("");
	words.word[17] = _T("conditional"); words.number[17] = 2356; words.chinese[17] = _T("adj. �����󪺡B�H~������");	 words.ps[17] = _T("\r\nps. �ۤϵ��Gunconditional (adj) �L����");
	words.word[18] = _T("carrier"); words.number[18] = 2360; words.chinese[18] = _T("n. �B��~�B�B��~��");	 words.ps[18] = _T("");
	words.word[19] = _T("inconsistency"); words.number[19] = 2363; words.chinese[19] = _T("n. ���@�P���B�e��٬�");	 words.ps[19] = _T("\r\nps. �ۤϵ��Gconsistency �@�e�B�@�P�F\r\n    inconsistent (adj) ���@�P���B�e��٬ު�");
	words.word[20] = _T("dimension"); words.number[20] = 2365; words.chinese[20] = _T("n. ����(��/�e/��)�B���V�B�譱 = aspect (1505)");	 words.ps[20] = _T("\r\nps. three-dimensional (adj) �T�תŶ���");
	words.word[21] = _T("discretion"); words.number[21] = 2368; words.chinese[21] = _T("n. �ۦ�M�w�v�B�B�z�v�B�ԷV");	 words.ps[21] = _T("\r\nps. discreet (adj) �Ԩ��V�檺�B���㲴��");
	words.word[22] = _T("entail"); words.number[22] = 2371; words.chinese[22] = _T("v. �ݭn�B�ϥ��n = involve (428)");	 words.ps[22] = _T("");
	words.word[23] = _T("entrepreneur"); words.number[23] = 2374; words.chinese[23] = _T("n. ���~�a�B�з~��");	 words.ps[23] = _T("");
	words.word[24] = _T("ballot"); words.number[24] = 2377; words.chinese[24] = _T("n. �ﲼ�B�벼���|");	 words.ps[24] = _T("");
	words.word[25] = _T("interpersonal"); words.number[25] = 2378; words.chinese[25] = _T("adj. �H��(���Y)��");	 words.ps[25] = _T("");
	words.word[26] = _T("determined"); words.number[26] = 2382; words.chinese[26] = _T("adj. ���w�������B�G�_���B�U�w�M�ߪ�");	 words.ps[26] = _T("\r\nps. determine (v) �ϨM�w�B�ϤU�M�ߡFdetermination (n) ���w�B�M��");
	words.word[27] = _T("miscellaneous"); words.number[27] = 2385; words.chinese[27] = _T("adj. �U���U�˪��B�V���� = various");	 words.ps[27] = _T("");
	words.word[28] = _T("transcript"); words.number[28] = 2391; words.chinese[28] = _T("n. �å��B�ۥ��B��r�Z = transcription");	 words.ps[28] = _T("\r\nps. transcribe (v) �üg�B�ۿ�");
	words.word[29] = _T("sacrifice"); words.number[29] = 2395; words.chinese[29] = _T("v. �묹");	 words.ps[29] = _T("");
	words.word[30] = _T("renewal"); words.number[30] = 2396; words.chinese[30] = _T("n. ��q�B(�ؿv���B�a�Ϫ�)��s�B�A�}�o");	 words.ps[30] = _T("\r\nps. renew (v) �ϧ�s�B���s�}�l�Frenewable (n) �i��s��");
	words.word[31] = _T("stipulate"); words.number[31] = 2400; words.chinese[31] = _T("v. �W�w�B���T�n�D");	 words.ps[31] = _T("\r\nps. stipulation (n) �W�w�B����");
}
void getWords_Day25(Words &words)
{
	words.word[0] = _T("margin"); words.number[0] = 2402; words.chinese[0] = _T("n. �Q���B����ťաB(���Ƶ�)�t���F\r\nps. marginal (adj) �p���B�����n���Fmarginally (adv) �ֶq�a�B���L�a");
	words.word[1] = _T("glance"); words.number[1] = 2404; words.chinese[1] = _T("v. �s���B(�ʲ��a)�ݤ@�U�B�@�h�Fn. �@�h");
	words.word[2] = _T("evacuation"); words.number[2] = 2409; words.chinese[2] = _T("n. �����B�M���B���šF\r\nps. evacuate (v) �M�šB�M��");
	words.word[3] = _T("courtesy"); words.number[3] = 2411; words.chinese[3] = _T("adj. �K�O���B§�����Fn. §���B�Ȯ�ܡF\r\nps. courteous (adj.) ��§����");
	words.word[4] = _T("neglect"); words.number[4] = 2414; words.chinese[4] = _T("v. �����B�����B�����B���|�Fn. �����B�����F\r\nps. negligent (adj) �������B�ʤߪ��Fnegligence (n) �����B�婿¾�u");
	words.word[5] = _T("conglomerate"); words.number[5] = 2416; words.chinese[5] = _T("n.  ���~���ΡFadj. ���~���Ϊ�");
	words.word[6] = _T("counterfeit"); words.number[6] = 2419; words.chinese[6] = _T("adj. ���y���B���_���Fv. ���y�B��y�Fn. ���y���B���f");
	words.word[7] = _T("elevate"); words.number[7] = 2424; words.chinese[7] = _T("v. �ﰪ�B�|�_�B���ɡF\r\nps. elevated (adj) �ɰ����B���[���B���|���Felevation (n) �ɰ��B����\r\n    elevator �q��");
	words.word[8] = _T("altitude"); words.number[8] = 2428; words.chinese[8] = _T("n. ���סB����");
	words.word[9] = _T("imperative"); words.number[9] = 2429; words.chinese[9] = _T("adj. �����n���B���n���B��ݳB�z���Fn. ���n��檺�ơB���n����");
	words.word[10] = _T("artificial"); words.number[10] = 2433; words.chinese[10] = _T("adj. �H�u���B�H�y��");
	words.word[11] = _T("condense"); words.number[11] = 2436; words.chinese[11] = _T("v. �@�Y�B�Y��F\r\nps. condensation (n.) �@�Y�B����");
	words.word[12] = _T("corridor"); words.number[12] = 2439; words.chinese[12] = _T("n. ���Y�B�q�D = hallway");
	words.word[13] = _T("element"); words.number[13] = 2442; words.chinese[13] = _T("n. (�c����)�n���B�����B(�q�l���~)����B�򥻭�z");
	words.word[14] = _T("alter"); words.number[14] = 2445; words.chinese[14] = _T("v. ���ܡB�ܧ�F\r\nps. alteration n. ���ܡB���");
	words.word[15] = _T("injection"); words.number[15] = 2449; words.chinese[15] = _T("n. �`�g�B�`�J�F\r\nps. inject (v) �`�g�B(�����)��J");
	words.word[16] = _T("array"); words.number[16] = 2453; words.chinese[16] = _T("n.  �@�t�C�B�j��B�j�q�Fv. ���m�B�ƦC");
	words.word[17] = _T("immune"); words.number[17] = 2456; words.chinese[17] = _T("adj. �K�̪��B�����v�T���F\r\nps. immunity (n.) �K�̡B�K�̤O�B�ŧK�v�Fimmunize (v) �ϧK�̡F\r\n    immunization (n) �K��");
	words.word[18] = _T("foster"); words.number[18] = 2459; words.chinese[18] = _T("v. �U���B�P�i�B���i�B���y�B�N�i");
	words.word[19] = _T("blame"); words.number[19] = 2461; words.chinese[19] = _T("v. ��~�k�S��F�d�ơF\r\nps. blameless (adj) �L�i�d�ơB�L�L����");
	words.word[20] = _T("convence"); words.number[20] = 2464; words.chinese[20] = _T("v. (�|ĳ)�l�}�B�l��");
	words.word[21] = _T("equivalent"); words.number[21] = 2468; words.chinese[21] = _T("adj. �ۦP���B���Ȫ��Fn. �P�����B�������F\r\nps. equivalence (n) �۵��B����");
	words.word[22] = _T("inhale"); words.number[22] = 2474; words.chinese[22] = _T("v. �l�J�B�l��F\r\nps. inhalation (n) �l�J");
	words.word[23] = _T("mutual"); words.number[23] = 2475; words.chinese[23] = _T("adj. �ۤ����B�@�P���F\r\nps. mutually (adv) ���ۦa�B�����a�B�@�P�a");
	words.word[24] = _T("aggressive"); words.number[24] = 2480; words.chinese[24] = _T("adj.  �j�x���B�Ӧb���o���B�I���ʪ��B�n�����D���F\r\nps. aggressively (adv) �I���ʦa");
	words.word[25] = _T("biography"); words.number[25] = 2483; words.chinese[25] = _T("n. �ǰO�F\r\nps. biographical (adj) �ǰO���Fautobiography (n) �۶�");
	words.word[26] = _T("forbid"); words.number[26] = 2486; words.chinese[26] = _T("v. ��ê�B�T�� = prohibit (1200)");
	words.word[27] = _T("immigration"); words.number[27] = 2488; words.chinese[27] = _T("n. (�q�~��)�����B���~�F\r\nps. �ۤϵ��Gemigration (n) ���~�~��B�����X�ҡF\r\n    immigrate (v) �E���B�����Fimmigrant (n) (�~�Ӫ�)����");
	words.word[28] = _T("renowned"); words.number[28] = 2491; words.chinese[28] = _T("adj. �D�W���B���n�檺�F\r\nps. renown (n) �W�n�B�n��");
	words.word[29] = _T("adjacent"); words.number[29] = 2493; words.chinese[29] = _T("adj. �F�񪺡B�۾F��");
	words.word[30] = _T("scheme"); words.number[30] = 2497; words.chinese[30] = _T("n. �p�e(��])�B��סB�p�ѡFv. �p�e�B���w�p�e");
	words.word[31] = _T("obscure"); words.number[31] = 2500; words.chinese[31] = _T("adj. �A���H�����B�ҽk���B�t���Fv. ���ܷt�B�����z�ѡB�V�c�F\r\nps. obviously (adv) �O�Ѧa");

}
void getWords_Day26(Words &words)
{
	words.word[0] = _T("amusement"); words.number[0] = 2506; words.chinese[0] = _T("n. �T�֡B�r���B�T�֬��ʡF\r\nps. amuse (v) ��~�}�ߡB�T��");
	words.word[1] = _T("identical"); words.number[1] = 2508; words.chinese[1] = _T("adj. �����@�ˡB�ۦP���F\r\nps. identification (n)(297) Ų�O�B�����ҩ��B�{�P�Fidentity (n) �����B�ۦP");
	words.word[2] = _T("besides"); words.number[2] = 2510; words.chinese[2] = _T("prep. ��~���~�B�b~���~ = in addition to �Fadv. ���~�B�ӥB");
	words.word[3] = _T("amenity"); words.number[3] = 2512; words.chinese[3] = _T("n. �K�Q�]�I�B�T�ֳ]�I�B�ξA�B�A�N");
	words.word[4] = _T("mortage"); words.number[4] = 2515; words.chinese[4] = _T("n. ���U�ڡFv. ���");
	words.word[5] = _T("adamantly"); words.number[5] = 2517; words.chinese[5] = _T("dav. ���M�a�F\r\nps. adamant (adj.) ���M���B���w��");
	words.word[6] = _T("accelerate"); words.number[6] = 2518; words.chinese[6] = _T("v. �[�t�B�P�i�B(������)���e�F\r\nps. acceleration (n) �[�t");
	words.word[7] = _T("belongings"); words.number[7] = 2522; words.chinese[7] = _T("n. �Ҧ����B�]�� = possessions");
	words.word[8] = _T("delinquent"); words.number[8] = 2526; words.chinese[8] = _T("adj. �����ú���B������I���B���L����");
	words.word[9] = _T("consultation"); words.number[9] = 2529; words.chinese[9] = _T("n. �ԸߡB��ĳ�B�|�E�F\r\nps. consultant (n.) �U��");
	words.word[10] = _T("diverse"); words.number[10] = 2532; words.chinese[10] = _T("adj. ���P���B�h�˪��F\r\nps. diversity (n) �h�˩ʡFdiversify (v) �Ϧh���ơB�Ϧh�ˤ�");
	words.word[11] = _T("beneficiary"); words.number[11] = 2527; words.chinese[11] = _T("n. ���q�H�B���f�̡F\r\nps. Benefit (n)(178) �Q�q�B�n�B�Fbeneficial (adj) ���Q���B���q��");
	words.word[12] = _T("engage"); words.number[12] = 2540; words.chinese[12] = _T("v. �ϱq�ơB�Ϧ���B�l�ަ��B�P~��ԡF\r\nps. engaged (adj) �w�q�B���B�Q�e�Ϊ��B����~���F\r\n    engagement (n) ���|�B�q�B�B����");
	words.word[13] = _T("accumulation"); words.number[13] = 2542; words.chinese[13] = _T("n. �n�E�B�ֿn(�ƶq)�B�v���W�[�F\r\nps. accumulate (v) �ֿn�B�n�E");
	words.word[14] = _T("merit"); words.number[14] = 2546; words.chinese[14] = _T("n. �u�I�B����");
	words.word[15] = _T("tangible"); words.number[15] = 2548; words.chinese[15] = _T("adj. ��誺�B���Ϊ��B�iĲ���F\r\nps. �ۤϵ��Gintangible (adj.) �L�Ϊ�");
	words.word[16] = _T("vague"); words.number[16] = 2555; words.chinese[16] = _T("adj. �ҽk���B�t�k���B�����T��");
	words.word[17] = _T("notable"); words.number[17] = 2556; words.chinese[17] = _T("adj. ��۪��B�ȱo�d�N���B���W���F\r\nps. note (v) �`�N�B���ΡFnoted (adj) �ۦW��");
	words.word[18] = _T("obviously"); words.number[18] = 2560; words.chinese[18] = _T("adv. ��M�a�B����a�F\r\nps. obvious (adj) ���㪺�B������");
	words.word[19] = _T("patent"); words.number[19] = 2562; words.chinese[19] = _T("n. �M�Q�v�B�v�Q�Fadj. �M�Q���B���㪺�Fv. ���o�M�Q�v");
	words.word[20] = _T("outskirts"); words.number[20] = 2566; words.chinese[20] = _T("n. ���ϡB���~");
	words.word[21] = _T("altruism"); words.number[21] = 2569; words.chinese[21] = _T("n. �Q�L�߲z�B�Q�L�D�q�F\r\nps. altruistic (adj) �Q�L��");
	words.word[22] = _T("protocol"); words.number[22] = 2571; words.chinese[22] = _T("n. (��a������)��ĳ�B������סB(�~��)§�`�B(�q��)�q�T��w");
	words.word[23] = _T("troubleshooting"); words.number[23] = 2574; words.chinese[23] = _T("n. �����ƸѡF\r\nps. troubleshooter (n) �����ƸѪ̡B�˭פH��");
	words.word[24] = _T("impose"); words.number[24] = 2579; words.chinese[24] = _T("v. (�W�w����) �j����B�j�[�B�ϱ���(�N��)");
	words.word[25] = _T("resistance"); words.number[25] = 2580; words.chinese[25] = _T("n. �ϧܡB��ܡB���B��ܤO�F\r\nps. resistant (adj) ��ܪ��Fresist (v) ��ܡB���");
	words.word[26] = _T("retrieval"); words.number[26] = 2584; words.chinese[26] = _T("(v) �˯��B�^���B���^�B����F\r\nps. retrieve (v) �˯��B�^���B���^�B����");
	words.word[27] = _T("detach"); words.number[27] = 2587; words.chinese[27] = _T("v. ���}�B�Ϥ����F\r\nps.  �ۤϵ��Gattach (349) ���W�B�Ϫ��ۡFdetachment (n) �����B�W�M");
	words.word[28] = _T("remedy"); words.number[28] = 2589; words.chinese[28] = _T("n. �ɱϡB��i���I�B�B�z��k = solution�B�v���k�Fv. �ɱϡB�勵�B�ȥ�");
	words.word[29] = _T("impending"); words.number[29] = 2592; words.chinese[29] = _T("adj. �Y�N��Ӫ��B�G��");
	words.word[30] = _T("testimonial"); words.number[30] = 2595; words.chinese[30] = _T("n. ����(��)�B�ҩ�(�H)�B�P��(��)");
	words.word[31] = _T("debut"); words.number[31] = 2598; words.chinese[31] = _T("n. �즸�n�x�B�����t�X");

}
void getWords_Day27(Words &words)
{
	words.word[0] = _T("proliferate");	words.number[0] = 2601; words.chinese[0] = _T("v. (�ƶq�W)���ؤW��/�c�ޡF\r\nps. proliferation (n.) �E�W�B��{");
	words.word[1] = _T("symptom");		words.number[1] = 2604; words.chinese[1] = _T("n. �g���B�x��");
	words.word[2] = _T("obligation");	words.number[2] = 2607; words.chinese[2] = _T("n. �q�ȡB�d���F'\r\nps. obligate (v.) �ϭt�q�ȡB�ϭt�d��");
	words.word[3] = _T("skyscraper");	words.number[3] = 2608; words.chinese[3] = _T("n. ���Ѥj��");
	words.word[4] = _T("attorney");		words.number[4] = 2614; words.chinese[4] = _T("n. �k�w�N�z�H�B�߮v = lawyer");
	words.word[5] = _T("inhabitant");	words.number[5] = 2618; words.chinese[5] = _T("n. �~���B�~���̡F\r\nps. habitat (n.)(2975) �Ϯ��a�B(�ʪ�)�ͬ����ҡFinhabit (v.) �~���� ");
	words.word[6] = _T("stability");	words.number[6] = 2621; words.chinese[6] = _T("adv. í�w(��)�B�w�w�����A�F\r\nps. �ۤϵ��Ginstability ���w�w�ʡF stable í�w�� <--> unstable ��í�w��");
	words.word[7] = _T("apparently");	words.number[7] = 2624; words.chinese[7] = _T("adv. ��M�a�F\r\nps. apparent (adj.) �������B��ө�����");
	words.word[8] = _T("rebate");		words.number[8] = 2627; words.chinese[8] = _T("n. �h�ٴڡB�^���B�馩");
	words.word[9] = _T("politely");		words.number[9] = 2630; words.chinese[9] = _T("adv. ��§���a�F\r\nps. polite (adj) ��§�����Fpoliteness (n.) ��§���B�Ȯ�");
	words.word[10] = _T("prevalent");	words.number[10] = 2633; words.chinese[10] = _T("adj. ���M���B���檺�B�y�檺�F\r\nps. prevalence (n) ���M�B����B�y��");
	words.word[11] = _T("lucrative");	words.number[11] = 2636; words.chinese[11] = _T("adj. �ȿ����B��Q�h�� = profitable (1674)");
	words.word[12] = _T("fierce");		words.number[12] = 2641; words.chinese[12] = _T("adj. �j�P���B�E�P���B���ݪ��B�r�P��");
	words.word[13] = _T("congress");	words.number[13] = 2644; words.chinese[13] = _T("n. (����)��|�Bĳ�|�F\r\nps. congressional (adj) ��a�ߪk�������Bĳ�|��");
	words.word[14] = _T("trustee");		words.number[14] = 2647; words.chinese[14] = _T("n. ���ơB�z�ơB(�H�U�]����)���U�޲z�H");
	words.word[15] = _T("superficial"); words.number[15] = 2650; words.chinese[15] = _T("adj. �������B���L���F\r\nps. superficially (adv.) �����a�B���L�a");
	words.word[16] = _T("ascertain");	words.number[16] = 2653; words.chinese[16] = _T("v. �T�w(�ƹ�B�u���)�B�d��");
	words.word[17] = _T("permanent");	words.number[17] = 2656; words.chinese[17] = _T("adj. ���[���B�ä[���B�û����F\r\nps. permanently (adv.) �ä[�a�B�������ܦa�Fpermanence (n) �ä[(��) ");
	words.word[18] = _T("tremendous");	words.number[18] = 2660; words.chinese[18] = _T("adj. ��H���B���j��");
	words.word[19] = _T("definitely");	words.number[19] = 2663; words.chinese[19] = _T("adv. �L�æa�B�֩w�a�B���M�F\r\nps. definite (adj) ���T���B�T�w��");
	words.word[20] = _T("gathering");	words.number[20] = 2666; words.chinese[20] = _T("n. ���|�B�E�|�B����");
	words.word[21] = _T("attire");		words.number[21] = 2667; words.chinese[21] = _T("n. �A�ˡB��� = clothes�Fv.�Ϭ��B����");
	words.word[22] = _T("split");		words.number[22] = 2672; words.chinese[22] = _T("v. ���}�B����B���� (�Q�q�B�O��)�B�����Fn. ���_�B����");
	words.word[23] = _T("mandate");		words.number[23] = 2675; words.chinese[23] = _T("n. (���|�B�벼����)�v�O�B���v�B���O�B�R�O�Fv. ���v�F\r\nps. mandatory (adj)(1665) �q�Ȫ��B�k�w�� ");
	words.word[24] = _T("superb");		words.number[24] = 2677; words.chinese[24] = _T("adj. �@�y���B���Ϊ��F\r\nps. superbly (adv.) �W���a�B���n�a");
	words.word[25] = _T("sustain");		words.number[25] = 2680; words.chinese[25] = _T("v. �D�� (�l�`�B�ˮ`)�F���� = support�B�Ӿ�F\r\nps. sustained (adj) ���[���B����");
	words.word[26] = _T("enlarge");		words.number[26] = 2683; words.chinese[26] = _T("v. ��j�B�X�i�B�W�[(�ƶq)�F\r\nps. enlargement (n.) �X�j");
	words.word[27] = _T("excursion");	words.number[27] = 2686; words.chinese[27] = _T("n. �u�~�Ȧ�B����");
	words.word[28] = _T("controversial");words.number[28] = 2690; words.chinese[28] = _T("adj. ��ĳ�ʪ��B�ް_��ĳ���F\r\nps. �ۤϵ��Guncontroversial (adj.) ���|�ް_��ĳ���Fcontroversy (n.) ��ĳ");
	words.word[29] = _T("sophisticated");words.number[29] = 2693; words.chinese[29] = _T("adj. (����B�˸m��)��K���B�������B�ѽm���B���L�@�����F\r\nps. Sophistication (n) �ѽm�B���оi�B���g��");
	words.word[30] = _T("fabulous");	words.number[30] = 2695; words.chinese[30] = _T("adj. �������B���n���B���j��");
	words.word[31] = _T("anonymous");	words.number[31] = 2700; words.chinese[31] = _T("adj. �ΦW���F\r\nps. anonymously (adv.) �ΦW�a�Fannoyed (adj.) �дo�� (= little angry)");

}
void getWords_Day28(Words &words)
{
	words.word[0] = _T("execute");		words.number[0] = 2703;		words.chinese[0] = _T("v. ����(���ȡB�p�e)�B��I�F\r\nps. executive (adj.) �޲z���B��F�� (n.) �g�z�B�D�ޡF\r\n    execution (n.) ����B��I");
	words.word[1] = _T("boast");		words.number[1] = 2705;		words.chinese[1] = _T("v. �֦�(~�ۻ�)�B�j�N�B��ģ�Fn. �j�N�B��ģ�B�ޥH���a���ƪ�");
	words.word[2] = _T("burst");		words.number[2] = 2707;		words.chinese[2] = _T("v. �z���B�}���F��M�Ĩ�~�Fn. �}���B�z�o");
	words.word[3] = _T("tentative");	words.number[3] = 2709;		words.chinese[3] = _T("adj. �Ȯɩʪ��B�S�ݤ��M���F\r\nps. tentatively (adv.) �Ȯɩʦa");
	words.word[4] = _T("boundary");		words.number[4] = 2713;		words.chinese[4] = _T("n. ����(�u)�B���");
	words.word[5] = _T("acclaim");		words.number[5] = 2717;		words.chinese[5] = _T("v. �������׵����B�ܪ��B�w��B���g�Fn. �ܪ��B���g");
	words.word[6] = _T("consquence");	words.number[6] = 2721;		words.chinese[6] = _T("n. �����B��G�F\r\nps. consequently (adv.) ���G�B�]���B�ҥH�Fconsequent (adj.) \r\n    �H���o�ͪ� = consequential");
	words.word[7] = _T("apparatus");	words.number[7] = 2722;		words.chinese[7] = _T("n. �����B�˸m�B���� =  equipment");
	words.word[8] = _T("enact");		words.number[8] = 2726;		words.chinese[8] = _T("v. ��q�B�q�L (�k�׵�)�Fenactment (n.) (�k�ߪ�)��q�B�k�ߡB�k�W");
	words.word[9] = _T("severely");		words.number[9] = 2729;		words.chinese[9] = _T("adv. �Y���a�B�Y��a�F\r\nps. servere (adj.) �Y�����B�Y�F�� = rigid");
	words.word[10] = _T("demanding");	words.number[10] = 2732;	words.chinese[10] = _T("adj. �O�O���B�n�D�������B�D�窺�B�Y�V��");
	words.word[11] = _T("devise");		words.number[11] = 2736;	words.chinese[11] = _T("v. �]�p�B�Q�X�B�o���F\r\nps. device (n.) �˸m�B�]��");
	words.word[12] = _T("attain");		words.number[12] = 2740;	words.chinese[12] = _T("v. �F��(�ؼСB�F��(��m�B�a�쵥)�F\r\nps. attainable (adj) �i�F�����Fattainment (n.) �F���B���N");
	words.word[13] = _T("inherently");	words.number[13] = 2743;	words.chinese[13] = _T("adv. ����W�a�B�T���a�F\r\nps. inherent (adj.) ���Ӫ��B���誺");
	words.word[14] = _T("captalize");	words.number[14] = 2747;	words.chinese[14] = _T("v. �q����Q = take advantage of�B�ϸꥻ�ơB����(�ꥻ)�B�Τj�p�r���Ѽg�F\r\nps. capital (n)(754) �ꥻ�B�����B�j�g�r�� ");
	words.word[15] = _T("neutrality");	words.number[15] = 2750;	words.chinese[15] = _T("n. ����(��)�F\r\nps. neutral (adj.) ���ߪ��Fneutally (adv.) ���ߦa�B�O�����ߦa");
	words.word[16] = _T("deliberate");	words.number[16] = 2752;	words.chinese[16] = _T("adj. ��N���B�V�����B�q�e���Fv. �`����{���F\r\nps. deliberately (adv.) �V���a�B�G�N�a");
	words.word[17] = _T("exaggerate");	words.number[17] = 2755;	words.chinese[17] = _T("v. �ؤj�B�رi�B���L���F\r\nps. exaggration (n.) �رi�B�ؤj");
	words.word[18] = _T("blend");		words.number[18] = 2756;	words.chinese[18] = _T("v. �V�X�B�ĦX�B�ջs�Fn. �V�X�F\r\nps. blender (n.) �ͩվ�");
	words.word[19] = _T("expose");		words.number[19] = 2760;	words.chinese[19] = _T("v. �ϼ��S(�b�M�I����)�B���S(�ƹ굥) = reveal (878)�F\r\nps. exposure (n.) ���S�B���S�B�n��");
	words.word[20] = _T("engrave");		words.number[20] = 2763;	words.chinese[20] = _T("v. �J��B�N��ʰO");
	words.word[21] = _T("commodity");	words.number[21] = 2769;	words.chinese[21] = _T("n. �ӫ~�B���Ϊ��F��");
	words.word[22] = _T("halt");		words.number[22] = 2771;	words.chinese[22] = _T("n. ���_�B����B�Ȱ��Fv. �Ϥ��_�B����");
	words.word[23] = _T("antibiotic");	words.number[23] = 2775;	words.chinese[23] = _T("n. �ܥͯ��F adj. �ܥͪ��B�ܵߪ�");
	words.word[24] = _T("diminish");	words.number[24] = 2777;	words.chinese[24] = _T("v. ��֡B�Y�� = decrease");
	words.word[25] = _T("infrastructure");words.number[25] = 2781;	words.chinese[25] = _T("n. (��a����)��¦�س]�B���γ]��");
	words.word[26] = _T("bulk");		words.number[26] = 2784;	words.chinese[26] = _T("n. �j�����B�D��B�j�q�Fadj. �j�媺�B�j�q��");
	words.word[27] = _T("bewildering");	words.number[27] = 2788;	words.chinese[27] = _T("adj. �O�H�x�b���F\r\nps. bewilder (v.) �ϰg�b�B�Ͻk��");
	words.word[28] = _T("constraint");	words.number[28] = 2790;	words.chinese[28] = _T("n. ����B�����F\r\nps. constrain (v.) �j���B���� = restrict (1411)");
	words.word[29] = _T("susceptible");	words.number[29] = 2792;	words.chinese[29] = _T("adj. �����P�V/�v�T���B�ӷP���B���ʷP����");
	words.word[30] = _T("outlook");		words.number[30] = 2795;	words.chinese[30] = _T("n. �e���B�i��B���ѡB�[�I");
	words.word[31] = _T("fabricate");	words.number[31] = 2800;	words.chinese[31] = _T("v. �ոˡB�s�y = manufacture (105)�F\r\nps. fabrication (n.) �s�y�Fprefabricated (adj.) (�ؿv)�w�s�c�ت�");
}
void getWords_Day29(Words &words)
{
	words.word[0] = _T("bounce"); 		words.number[0] = 2801; 	words.chinese[0] = _T("v. (�y��)�u�_�B(�䲼�B�q�l�l��)�h�^�F n. �u���B���O");
	words.word[1] = _T("thrive"); 		words.number[1] = 2805; 	words.chinese[1] = _T("v. �����B�c�a (= flourish)�F\r\nps. thriving ������");
	words.word[2] = _T("abrupt");		words.number[2] = 2807; 	words.chinese[2] = _T("adj. ��M���B�N�~���B(�A�סB�y��)�|�����F\r\nps. abruptly ��M�a ");
	words.word[3] = _T("incredible");	words.number[3] = 2810; 	words.chinese[3] = _T("adj. ���Ϊ��B���i�m�H���F\r\nps. incredibly ���H�m�H�a");
	words.word[4] = _T("compel");		words.number[4] = 2814; 	words.chinese[4] = _T("v. �j���B�Ϥ��o���F\r\nps. compelling �O�H�H�A���B�ޤH�J�Ӫ�");
	words.word[5] = _T("facilitate");	words.number[5] = 2817; 	words.chinese[5] = _T("v. �P�i�B�Ϯe���F\r\nps. facility �]�ơB�]�I�Ffacilitation ²���ơB�P�i");
	words.word[6] = _T("undertake");	words.number[6] = 2820; 	words.chinese[6] = _T("v. �ۤ�i��B�t�d�B�Ӿ�(�Ʊ��B�d��)�B���\�B�����F\r\nps. undergo �g���Bundergraduate �j�ǥ�");
	words.word[7] = _T("bilingual");	words.number[7] = 2823; 	words.chinese[7] = _T("v. ���١B�_���F\r\nps. assertive (adj.) �_�����B�Z�_��");
	words.word[8] = _T("assert"); 		words.number[8] = 2827; 	words.chinese[8] = _T("adj. ��h�O�ܪ��B�Ӻɪ��B�Χ����F\r\nps. exhausting �ϤH��h�O�ܪ�");
	words.word[9] = _T("exhausted"); 	words.number[9] = 2829; 	words.chinese[9] = _T("v. ��|�B�z�ѡB��c�Fn. �z�ѡB���");
	words.word[10] = _T("grasp"); 		words.number[10] = 2831; 	words.chinese[10] = _T("v. �����B�c�a�B(�Ӫ�)�Z�K");
	words.word[11] = _T("aptitude"); 	words.number[11] = 2837; 	words.chinese[11] = _T("n. �Ѹ�B�~��B�A�y�B�۵M�ɦV");
	words.word[12] = _T("escalate");	words.number[12] = 2840; 	words.chinese[12] = _T("v. (�{��)�[�@�B�c�ơB(�~��B������)�v���W��");
	words.word[13] = _T("laundry"); 	words.number[13] = 2843; 	words.chinese[13] = _T("n. �e�~�窫�B�~�穱");
	words.word[14] = _T("integrate"); 	words.number[14] = 2846; 	words.chinese[14] = _T("v. ��X�B�ϧ���F\r\nps. integration (n.) ��X�B�ĦX�Fintegrated (adj.) ��X��");
	words.word[15] = _T("censorship");	words.number[15] = 2850; 	words.chinese[15] = _T("n. �f�d(���)�F\r\nps. censor (n.) (�X�����B�q�v����)�f�d��");
	words.word[16] = _T("apprehensive");words.number[16] = 2852; 	words.chinese[16] = _T("adj. ��~���B�~�{���B�⮩��");
	words.word[17] = _T("heritage"); 	words.number[17] = 2855; 	words.chinese[17] = _T("n. (��ƾ��v��)�򲣡B�ǩ�");
	words.word[18] = _T("cusine");		words.number[18] = 2859; 	words.chinese[18] = _T("n. �i���B�i���k�B���a");
	words.word[19] = _T("contingent"); 	words.number[19] = 2863; 	words.chinese[19] = _T("adj. �]���p�өw���F�H~������");
	words.word[20] = _T("densely"); 	words.number[20] = 2865; 	words.chinese[20] = _T("adj. �K���a�B�Y�K�a�F\r\nps. dense (adj.)�Y�K���B�K�����Bdensity (n)�K�סB�@��");
	words.word[21] = _T("creditable");	words.number[21] = 2868; 	words.chinese[21] = _T("adj. �ȱo���g���B�i�H���F\r\nps. credit (n.)�H�ΡB�W�A�B�s�ڪ��B�B����");
	words.word[22] = _T("affix"); 		words.number[22] = 2872; 	words.chinese[22] = _T("v. �H�K�W(�l����)�B���W�B�\(�L��)�Fn. ���[��");
	words.word[23] = _T("fundraiser"); 	words.number[23] = 2875; 	words.chinese[23] = _T("n. �Ҵڬ��ʡB�Ҵڪ̡F\r\nps. fundraising (n.) �w�ڡB�Ҵ� (adj) �Ҵڪ�");
	words.word[24] = _T("simulate"); 	words.number[24] = 2878; 	words.chinese[24] = _T("v. �����B�_�R�B���ˡF\r\nps. simulation (n.) �����B�_�R");
	words.word[25] = _T("elict");		words.number[25] = 2881; 	words.chinese[25] = _T("v. �ޥX�B���X�B����");
	words.word[26] = _T("interact"); 	words.number[26] = 2883; 	words.chinese[26] = _T("v. ���ʡB��ۧ@�ΡB���ۼv�T�F\r\nps. interaction (n.) ���ʡB���ۧ@�ΡFinteractive (adj.) �ۤ��@�Ϊ�");
	words.word[27] = _T("comprise");	words.number[27] = 2885; 	words.chinese[27] = _T("v. ��~�զ��B�]�t (consist of)");
	words.word[28] = _T("massive");		words.number[28] = 2889; 	words.chinese[28] = _T("adj. �e�j���B�j�W�Ҫ��B���ꪺ�F\r\nps. mass (n.) �j�q�B���h (adj.) �j�媺�B�j�q�� (v)�E���F\r\n     massively (adv.) �j�q�a");
	words.word[29] = _T("irrigation");	words.number[29] = 2891; 	words.chinese[29] = _T("n. ��@");
	words.word[30] = _T("deficit");		words.number[30] = 2895; 	words.chinese[30] = _T("n. ���r���B������");
	words.word[31] = _T("impede");		words.number[31] = 2898; 	words.chinese[31] = _T("v. ��ê�B��ê");
}
void getWords_Day30(Words &words)
{
	words.word[0] = _T("disclose"); 	words.number[0] = 2901; 	words.chinese[0] = _T("v. �z�|�B���o�B���} = reveal (878) = expose (2760)�F\r\nps. disclosure (n.) ���o�B�z�S�B���}");
	words.word[1] = _T("inevitable"); 	words.number[1] = 2903; 	words.chinese[1] = _T("adj. ���M���B�L�i�קK��");
	words.word[2] = _T("deplete");		words.number[2] = 2906; 	words.chinese[2] = _T("v. n. �ϴ�֡B�\�ܡB�Ӻ�");
	words.word[3] = _T("magnificent"); 	words.number[3] = 2909; 	words.chinese[3] = _T("adj. �������B���R���B���n��");
	words.word[4] = _T("discrepancy"); 	words.number[4] = 2914; 	words.chinese[4] = _T("n. �t���B���@�P");
	words.word[5] = _T("collapse"); 	words.number[5] = 2916; 	words.chinese[5] = _T("v. n. �˶�B�Y��B(����)�ɶ^");
	words.word[6] = _T("revolutionary"); words.number[6] = 2919; 	words.chinese[6] = _T("adj. �зs���B���R���Fn. ���R�̡F\r\nps. revolution (n.) ���s�B�ܭ�");
	words.word[7] = _T("byproduct"); 	words.number[7] = 2924; 	words.chinese[7] = _T("n. �Ʋ��~�B���a���G");
	words.word[8] = _T("sluggish"); 	words.number[8] = 2927; 	words.chinese[8] = _T("adj. ��w���B�������B�i�k��");
	words.word[9] = _T("defy"); 		words.number[9] = 2930; 	words.chinese[9] = _T("v. ���H(�ήe)�B�L�k(�۫H)�B�ڧܡF\r\nps. defiant (adj.) �H�ܪ��B�D�]���Fdefuance (n.) �H�ܡB���");
	words.word[10] = _T("flourish"); 	words.number[10] = 2933; 	words.chinese[10] = _T("v. �����B�c�a�B(�Ӫ�)�Z�K");
	words.word[11] = _T("manipulate"); 	words.number[11] = 2936; 	words.chinese[11] = _T("v.�ާ@�B���a�F\r\nps. manipulation (n.) �ާ@�B���a");
	words.word[12] = _T("layoff");		words.number[12] = 2940; 	words.chinese[12] = _T("n. �껺�B�{�ɸѶ�");
	words.word[13] = _T("bilateral"); 	words.number[13] = 2943; 	words.chinese[13] = _T("adj. ���誺�B���䪺");
	words.word[14] = _T("incidental"); 	words.number[14] = 2946; 	words.chinese[14] = _T("adj. ���a���B���n���B���H�ӨӪ�");
	words.word[15] = _T("intervention"); words.number[15] = 2949; 	words.chinese[15] = _T("n. ���J�B�z�A�B�հ��F\r\nps. intervene (v.) ���J�B�z�A�B�հ�");
	words.word[16] = _T("endorse"); 	words.number[16] = 2953; 	words.chinese[16] = _T("v. �٦P(�N��)�B�I�ѡF\r\nps. endorsement (n.) ����B�I��");
	words.word[17] = _T("dilute"); 		words.number[17] = 2955; 	words.chinese[17] = _T("v. �}���B�d�z�Fadj. �g�}�����B��z���F�F\r\nps. dilution (n.) �}��");
	words.word[18] = _T("confine"); 	words.number[18] = 2958; 	words.chinese[18] = _T("v. ����B�ϫ]��");
	words.word[19] = _T("trivial"); 	words.number[19] = 2962; 	words.chinese[19] = _T("adj. �Ӻ����B�L�����D��");
	words.word[20] = _T("elaborate"); 	words.number[20] = 2964; 	words.chinese[20] = _T("adj. �륩���B��߻s�@���Fv.�륩�s�@�B�Բӻ����F\r\nps. elaboration (n.) �����B�륩");
	words.word[21] = _T("discriminate"); words.number[21] = 2968; 	words.chinese[21] = _T("v. �[���B�Ϥ�(�t��)�B��O�F\r\nps. discrimination (n.) �t�O�B�������ݹJ�B�[��");
	words.word[22] = _T("vulnerable"); 	words.number[22] = 2972; 	words.chinese[22] = _T("adj. �����˪��B�ܮz��");
	words.word[23] = _T("habitat"); 	words.number[23] = 2975; 	words.chinese[23] = _T("n. (�ʪ�)�Ϯ��a�B(�Ӫ�)�ͪ��a");
	words.word[24] = _T("radical"); 	words.number[24] = 2977; 	words.chinese[24] = _T("adj. �������B�ڥ����B�E�i���F\r\nps. radically (adv.) �ڥ��a�B�E�i�a�B�����a");
	words.word[25] = _T("spontaneous"); words.number[25] = 2979; 	words.chinese[25] = _T("adj. �۵M���B�۵o�F\r\nps. spantaneously (adv.) �۵M�a�B���ѦۥD�a");
	words.word[26] = _T("rigid"); 		words.number[26] = 2982; 	words.chinese[26] = _T("adj. �Y�檺�B���w���B���ƪ��F\r\nps. �ۤϵ�: flexible (1654)�Frigidly (adv.) ���w�a�B�Y��a");
	words.word[27] = _T("voucher"); 	words.number[27] = 2985; 	words.chinese[27] = _T("n. �ӫ~��B��Ψ�B�̳�");
	words.word[28] = _T("bias"); 		words.number[28] = 2989; 	words.chinese[28] = _T("n. �����B�����Fv. �Ϧs����");
	words.word[29] = _T("fraud"); 		words.number[29] = 2992; 	words.chinese[29] = _T("n. �B�F�B�B�F(�欰)�B�F���B�F�l");
	words.word[30] = _T("fundamental"); words.number[30] = 2996; 	words.chinese[30] = _T("adj. �򥻪��F�ڥ����F�Q�����n���Fn. �򥻭�z�F\r\nps. fundamentally (adv.) ��¦�a�B���n�a");
	words.word[31] = _T("arouse"); 		words.number[31] = 3000; 	words.chinese[31] = _T("v. �E�_�B��_�B�Ͼĵo");
}
