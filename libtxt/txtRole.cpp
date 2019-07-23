#include "txtRole.h"

ccc_txt_instance_cpp(txtRole);

txtRole::txtRole()
{
	sRole role;
	int _actionIdx;
	for (int e = (int)eMod::eJueSe0; e <= (int)eMod::eJueSeEnd; ++e)
	{

		if (e == (int)eMod::eJueSe������ || e == (int)eMod::eJueSeɱ����)
		{
			_actionIdx = 3;
		}
		else
		{
			_actionIdx = 2;
		}
		role.actionMaps.resize(_actionIdx);
		role.actions.resize(_actionIdx);
		role.sounds.resize(_actionIdx);
		role.points.resize(_actionIdx);
		_tables.insert(std::make_pair((eMod)e, role));
	}

	sRole* _role;
	int _headIdx;
	txtAction::sAction* _face;
	txtAction::sAction* _head;
	txtAction::sAction* _body;
	txtAction::sAction* _actionMap;
	txtAction::sAction* _action;
	txtAction::sAction* _sound;
	sPoint* _point;

#define ccc_txt_role_init(_mod_, _name_, _color_)\
_role = &_tables.at(_mod_);\
_role->name = _name_;\
_role->color = _color_;\
_headIdx = _actionIdx = 0

#define ccc_txt_role_hea3(_amigo_,_dialog_,_small_,_big_,_happy_small_, _happy_big_, _sad_small_,_sad_big_,_proud_samll_,_proud_bug_)\
_head = &_role->heads[_headIdx];\
_head->insert(std::make_pair(eAct::Big, _big_));\
_head->insert(std::make_pair(eAct::Dialog, _dialog_));\
_head->insert(std::make_pair(eAct::Small, _small_))

#define ccc_txt_role_head(_amigo_,_dialog_,_small_,_big_,_happy_small_, _happy_big_, _sad_small_,_sad_big_,_proud_samll_,_proud_bug_)\
_face = &_role->faces[_headIdx];\
_face->insert(std::make_pair(eAct::Amigo, _amigo_));\
\
ccc_txt_role_hea3(_amigo_,_dialog_,_small_,_big_,_happy_small_, _happy_big_, _sad_small_,_sad_big_,_proud_samll_,_proud_bug_);\
++_headIdx;\
_face->insert(std::make_pair(eAct::HappySmall, _happy_small_));\
_face->insert(std::make_pair(eAct::HappyBig, _happy_big_));\
_face->insert(std::make_pair(eAct::SadSmall, _sad_small_));\
_face->insert(std::make_pair(eAct::SadBig, _sad_big_));\
_face->insert(std::make_pair(eAct::ProudSmall, _proud_samll_));\
_face->insert(std::make_pair(eAct::ProudBig, _proud_bug_))

#define ccc_txt_role_body(_body_bow_,_body_cry_,_body_dance_,_body_greet_,_body_sit_,_body_angry_)\
_body = &_role->bodies;\
_body->insert(std::make_pair(eAct::BodyBow, _body_bow_));\
_body->insert(std::make_pair(eAct::BodyCry, _body_cry_));\
_body->insert(std::make_pair(eAct::BodyDance, _body_dance_));\
_body->insert(std::make_pair(eAct::BodyGreet, _body_greet_));\
_body->insert(std::make_pair(eAct::BodySit, _body_sit_));\
_body->insert(std::make_pair(eAct::BodyAngry, _body_angry_))

#define ccc_txt_role_action(_stand_,_walk_,_fight_,_go_,_atk_,_atk2_,_magic_,_def_,_suffer_,_dead_,_back_)\
_actionMap = &_role->actionMaps[_actionIdx];\
_action = &_role->actions[_actionIdx];\
_sound = &_role->sounds[_actionIdx];\
_point = &_role->points[_actionIdx];\
++_actionIdx;\
_actionMap->insert(std::make_pair(eAct::Stand, _stand_)); \
_actionMap->insert(std::make_pair(eAct::Walk, _walk_));\
_action->insert(std::make_pair(eAct::Fight, _fight_)); \
_action->insert(std::make_pair(eAct::Go, _go_)); \
_action->insert(std::make_pair(eAct::Atk, _atk_)); \
_action->insert(std::make_pair(eAct::Atk2, _atk2_)); \
_action->insert(std::make_pair(eAct::Magic, _magic_)); \
_action->insert(std::make_pair(eAct::Def, _def_)); \
_action->insert(std::make_pair(eAct::Suffer, _suffer_)); \
_action->insert(std::make_pair(eAct::Dead, _dead_)); \
_action->insert(std::make_pair(eAct::Back, _back_))

#define ccc_txt_role_sound(_atk_,_atk2_,_suffer_,_magic_,_def_,_dead_)\
_sound->insert(std::make_pair(eAct::eAtk, _atk_));\
_sound->insert(std::make_pair(eAct::eAtk2, _atk2_));\
_sound->insert(std::make_pair(eAct::eSuffer, _suffer_));\
_sound->insert(std::make_pair(eAct::eMagic, _magic_));\
_sound->insert(std::make_pair(eAct::eDef, _def_));\
_sound->insert(std::make_pair(eAct::eDead, _dead_))

#define ccc_txt_role_point(_offx_,_atk_,_magic_)\
_point->offx = _offx_;\
_point->atk = _atk_;\
_point->magic = _magic_

	//////////////////////////////////////////////////////////////////////////
	ccc_txt_role_init(eMod::eJueSe������, "������", 0xDFADD6D6);
	ccc_txt_role_head(0x78FD19DB, 0xCACF7E2E, 0x540BC221, 0xD785E500, 0x2568DDBC, 0xB84DA131, 0xE041B0D6, 0x67FA5ED8, 0x3F56DAB1, 0xE54739CE);
	ccc_txt_role_head(0x9553F95B, 0x2DEAD602, 0xD3895EF6, 0x42B8EBE4, 0xF5E6B976, 0x44B232C8, 0xFA5B3B66, 0xED2FB801, 0xAA5BC894, 0x31D3DCF7);
	ccc_txt_role_hea3(0x00000000, 0x501878CF, 0xD107A1E8, 0xA35A9D3E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x3D1E587C, 0xF2E2B3FC, 0xF3386465, 0x362D967B, 0xCA7EED95, 0x79064B95);
	ccc_txt_role_action(0x49386FCE, 0x54F3FC94, 0x42DC698F, 0x2506639C, 0xB740CED5, 0x00000000, 0x29D55AD9, 0x9A03D562, 0x883EE3DA, 0x3B1B7EDE, 0x2EA1A54D);
	ccc_txt_role_sound(0x17E18D73, 0x00000000, 0x093F94E4, 0x131B52D5, 0x07E26E1D, 0x4F1D43F8);
	ccc_txt_role_point(70, 4, 2);
	ccc_txt_role_action(0x49386FCE, 0x54F3FC94, 0x9C8F4201, 0x1E92847E, 0xA94FBD68, 0x00000000, 0x58A17D26, 0xDECD5B16, 0x15937FAB, 0x7671EBDF, 0xA6E77CF1);
	ccc_txt_role_sound(0xCDBC5B50, 0x00000000, 0x837A7CC6, 0x758B5E56, 0x8D30EA0D, 0x616EF73A);
	ccc_txt_role_point(70, 6, 2);


	ccc_txt_role_init(eMod::eJueSe��ң��, "��ң��", 0x00002001);
	ccc_txt_role_head(0x88CED0B6, 0x987143FE, 0xF8F90822, 0xEDC003F1, 0x8F956A2B, 0xBFF8005C, 0xCBDF7263, 0x04B76A29, 0x9E1CE468, 0x9D8F44C6);
	ccc_txt_role_head(0xD79F8049, 0x1DB452B0, 0xE71950D2, 0x5682DE8B, 0x25B8B48B, 0x29F591A9, 0xD806AA0B, 0x47562FCC, 0xBBB0131E, 0xA61CF569);
	ccc_txt_role_hea3(0x00000000, 0x55810442, 0xB7AE1962, 0x81F5605E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x7DC11A01, 0x40962A41, 0x90C037B5, 0x77DE18E6, 0x81105904, 0x91704F51);

	ccc_txt_role_action(0x58FB5047, 0x122D197F, 0x61235297, 0x5A235818, 0xA6F62E79, 0x00000000, 0x5BC4A3BC, 0xDECDF4A2, 0x06EC04A6, 0x6A3DDE8E, 0x85B1F8A7);
	ccc_txt_role_sound(0x74FA3644, 0x00000000, 0x9DE15357, 0x78014430, 0xF0EF43B4, 0x1EEF0B4D); ccc_txt_role_point(70, 5, 2);
	ccc_txt_role_action(0x22CED97B, 0x122D197F, 0x3878205A, 0x4770B1CB, 0x2E460AAF, 0x00000000, 0xEB9300D7, 0xF4411DFD, 0x3C435808, 0x8965609B, 0x6DD1270E);
	ccc_txt_role_sound(0xF002353C, 0x00000000, 0x265EB335, 0xDF489E5A, 0x06E94050, 0x59A0AD28); ccc_txt_role_point(50, 4, 2);

	ccc_txt_role_init(eMod::eJueSe����Ů, "����Ů", 0x00002002);
	ccc_txt_role_head(0x6B22EF43, 0xA82D451B, 0x6A5637E4, 0x1480D65F, 0xBFEFCDA4, 0x7AF761A5, 0xB186D711, 0x9446D23B, 0xAA49ED58, 0xC9AACF1E);
	ccc_txt_role_head(0xDAA5AB9F, 0x980DE2C5, 0xCB26F960, 0xA514884A, 0x8A50F18D, 0x8989957E, 0x552A811B, 0xDB2FD439, 0x96C49699, 0xB07A2FDD);
	ccc_txt_role_hea3(0x00000000, 0x75B32BC4, 0x9DB0DC4F, 0x71990A6B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0xE1809081, 0x895C048B, 0x1566CD1B, 0xB9386349, 0x45988F73, 0x93DDAFDF);

	ccc_txt_role_action(0xA16A06FF, 0x4FBA48B8, 0x58C29373, 0x5FD1EF3F, 0x3CAE878A, 0x00000000, 0x243B5D3F, 0xF516BD4A, 0xE91E294B, 0x7B45E2A6, 0xFAB5AD1D);
	ccc_txt_role_sound(0x8D07C630, 0x00000000, 0x5CE4D624, 0x00E5E050, 0x1A35AEDA, 0x6D81CA3B); ccc_txt_role_point(80, 9, 2);
	ccc_txt_role_action(0xA16A06FF, 0x4FBA48B8, 0xC0C44A3E, 0xA8785250, 0x7D6413D7, 0x00000000, 0x7BC690C3, 0x01C15F1A, 0x9025619D, 0x133CC7E1, 0x6F8475C7);
	ccc_txt_role_sound(0xDA2F70D2, 0x00000000, 0x87D6DB09, 0x4E2FA831, 0xE5FEE391, 0x970200BA); ccc_txt_role_point(70, 5/*7*/, 2); // ƫ�ƶ� 7 ��һ�� 

	ccc_txt_role_init(eMod::eJueSeӢŮ��, "ӢŮ��", 0x00002003);
	ccc_txt_role_head(0xE40E03F6, 0x662A6A85, 0x06B3E954, 0xF3511034, 0x006B6FA9, 0x063BC9B6, 0xB134453F, 0xAF152077, 0xF8C1EDBC, 0x025B61D9);
	ccc_txt_role_head(0xA7DFEB0E, 0x74B4118F, 0x344C2738, 0xA4AE0830, 0xA16BDD4B, 0xDCC7C9A8, 0x1BC63165, 0x66D7EDBA, 0x9CB0490A, 0xBD292A33);
	ccc_txt_role_hea3(0x00000000, 0x72697F9E, 0x4E0D47EA, 0x43633756, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x4F3CF641, 0xE4544F8F, 0x2A1566E7, 0x04E4DB15, 0x8AE7E3A4, 0x76BD10D7);

	ccc_txt_role_action(0xACC99D2C, 0xDD0B0D7A, 0x10EBB1F4, 0x78894E74, 0x43721FDF, 0x00000000, 0x4F777D18, 0x69097048, 0x6A57A487, 0x20D42CE0, 0x2A78431D);
	ccc_txt_role_sound(0x9B3F9ABE, 0x00000000, 0xB1634ECE, 0x9B353987, 0x9A06B5F8, 0x7BE67DCD); ccc_txt_role_point(55, 4, 2);
	ccc_txt_role_action(0xACC99D2C, 0xDD0B0D7A, 0x1D0E8DB8, 0xCBE4270C, 0x409738A9, 0x00000000, 0xEF57B6C6, 0x6D16C030, 0x86FB7296, 0x20D42CE0, 0xD3E52BC2);
	ccc_txt_role_sound(0x9B3F9ABE, 0x00000000, 0xB1634ECE, 0x9B353987, 0x3EEC0360, 0x7BE67DCD); ccc_txt_role_point(70, 8, 2);

	ccc_txt_role_init(eMod::eJueSe��ͷ��, "��ͷ��", 0x00002004);
	ccc_txt_role_head(0xEE0413AB, 0x994A57CA, 0x5E6B1F0D, 0x6DF97509, 0x2DBC0CC7, 0x552EC746, 0x3F685ECD, 0x4B93FA4A, 0x53CB3681, 0x006B44E5);
	ccc_txt_role_head(0x28B2F03B, 0x3662CFAC, 0x40784B0F, 0xF5E250AB, 0xA4CA07F4, 0xD8748C7C, 0x0C3F2DF4, 0xB5AA72BE, 0xE2C3576F, 0xB0787885);
	ccc_txt_role_hea3(0x00000000, 0x7EE6A09B, 0x4594C7F1, 0x3787664B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x2EF645C6, 0x89DD84B6, 0xFBA592DC, 0xB440A790, 0x0431506B, 0x22C99B8A);

	ccc_txt_role_action(0x220AEF93, 0x2FE08CEB, 0x65A5FB7E, 0xE4AE3638, 0xBE0A1E83, 0x00000000, 0x27559E77, 0xEB8235CF, 0xFEC040B1, 0xE53AB100, 0xBAF05FBA);
	ccc_txt_role_sound(0x841369B5, 0x00000000, 0xACD043F0, 0xF2C5A3CD, 0xA8ADC9AC, 0xE15F9806); ccc_txt_role_point(70, 4/*8*/, 2); // ƫ�ƶ� 8 ��һ�� 
	ccc_txt_role_action(0x220AEF93, 0x2FE08CEB, 0x72E1B8C7, 0x7C83B9D4, 0x935672A0, 0x00000000, 0x704B48CC, 0x6E57F609, 0x0581A7A6, 0x67C54CFB, 0x1A618AAD);
	ccc_txt_role_sound(0x4AA34783, 0x00000000, 0x7C6CC4E7, 0x8D88CDAC, 0x0B26B4AF, 0xAFC70B91); ccc_txt_role_point(100, 6, 2);

	ccc_txt_role_init(eMod::eJueSe��ħ��, "��ħ��", 0xE88CE841);
	ccc_txt_role_head(0x33BD5993, 0x93969AE2, 0xDB90AD38, 0x4C9C73A2, 0xE3E4CD06, 0xC55C3C89, 0xD10D7589, 0x20D71AA9, 0x2FC26ED2, 0x6D339B12);
	ccc_txt_role_head(0x7DCA1748, 0xCB191932, 0x628DD9B2, 0x8D3AE74F, 0x2822EE05, 0x32A82B59, 0x01342B0F, 0x00DE373F, 0x64952742, 0xE33738E2);
	ccc_txt_role_hea3(0x00000000, 0x87C8EA73, 0xFC48B9DC, 0x7DB1FB33, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x3DC23211, 0xE861FDD7, 0xE3751A53, 0x9145B5D3, 0x8349ECD1, 0xD19634A1);

	ccc_txt_role_action(0x83F05A9A, 0x3EAE6B97, 0x9D58D9EE, 0x8782CB98, 0x1E5547B5, 0x00000000, 0xA3F460FA, 0x617F2C68, 0xF34E1359, 0xF09E9903, 0x8CDDD04A);
	ccc_txt_role_sound(0x025FCC8B, 0x00000000, 0x369FA868, 0x55389EED, 0xB73D1C5B, 0x8A7637EE); ccc_txt_role_point(107, 7, 2);
	ccc_txt_role_action(0x83F05A9A, 0x3EAE6B97, 0x2C8E5059, 0xCBB9B74C, 0x5A7D6EDB, 0x00000000, 0x236FB485, 0x1FD25090, 0xACA9BF28, 0xAFF25120, 0x5CF52765);
	ccc_txt_role_sound(0x28642ACE, 0x00000000, 0x5476654C, 0xFE8594E2, 0xDFB7A019, 0x9DAF226A); ccc_txt_role_point(70, 6, 2);

	ccc_txt_role_init(eMod::eJueSe�Ǿ���, "�Ǿ���", 0x00002006);
	ccc_txt_role_head(0x46F2817B, 0x7EC32B15, 0xEDF32E35, 0x5E2FAF62, 0x471A17B4, 0x13F970F4, 0x73E81A66, 0x1A3346FA, 0x4DF310A9, 0x36FD1533);
	ccc_txt_role_head(0x87203977, 0xDCBA7BD8, 0x938ACC41, 0x96E07FB5, 0x323B179C, 0x34904D9F, 0x31AC7431, 0xADD80700, 0x79EBB815, 0x69B6338B);
	ccc_txt_role_hea3(0x00000000, 0xD49B7214, 0x833B4998, 0x83DB4728, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0xFEEB9C10, 0x51A9F3FB, 0x4661C37A, 0x7158A588, 0x72AFA4E9, 0x9E61EA3E);

	ccc_txt_role_action(0x3072AAB6, 0x1D6C9873, 0xFC1AD8BE, 0xB033AB67, 0xB56ABB22, 0x00000000, 0xD6AFCAC2, 0x9E547897, 0xFDE88236, 0xD9366D7C, 0x7EB3A12F);
	ccc_txt_role_sound(0x1DC5C317, 0x00000000, 0x91E9EB7B, 0x3E51C7DA, 0xDB75ABC8, 0x3C887DDF); ccc_txt_role_point(70, 7, 8);
	ccc_txt_role_action(0x3072AAB6, 0x1D6C9873, 0x3F66F204, 0x78ADFF2E, 0x922E6CCB, 0x00000000, 0xDA002F0B, 0xCF4C2B84, 0xD123DBD0, 0x7135607E, 0x2992E0CC);
	ccc_txt_role_sound(0x68DBA74A, 0x00000000, 0xC00F60E5, 0xBF13CC2B, 0xE73EBCC8, 0x60FAD7D4); ccc_txt_role_point(60, 6, 12);

	ccc_txt_role_init(eMod::eJueSe������, "������", 0x00002007);
	ccc_txt_role_head(0x875DA17D, 0x4FBEF1FE, 0xC32BA452, 0x0B82DDB2, 0xDF80CA8D, 0xB19DD1DE, 0x26FB2680, 0xEDF288B9, 0x211F1AC9, 0xB1C5F054);
	ccc_txt_role_head(0xDF384A18, 0xB3ED18A6, 0x3724661D, 0x7A823606, 0x01676D75, 0x1BF1F51E, 0xF83B5AAF, 0xB94F2E5C, 0x01676D75, 0x93E4550D);
	ccc_txt_role_hea3(0x00000000, 0x64747904, 0x38BFDE1C, 0x1F164F7E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x86437F46, 0x2BA25024, 0x1D7090B8, 0x670D8648, 0x9C1633C8, 0x3CDB50D2);

	ccc_txt_role_action(0xDFB3D729, 0xEDBC3127, 0x675DFD29, 0xF5F3C3AA, 0x43E0C68D, 0x00000000, 0x0039363E, 0x121B67FD, 0xD0C2CA2D, 0x0EBE00EA, 0x78F3FC2A);
	ccc_txt_role_sound(0x5F4CAE8D, 0x00000000, 0x8FB12C3F, 0x2FE29187, 0x5856D5AC, 0x0D47CD0F); ccc_txt_role_point(70, 7, 2);
	ccc_txt_role_action(0xDFB3D729, 0xEDBC3127, 0x6FA9E11C, 0x38814574, 0x08888364, 0x00000000, 0x5E85332F, 0xCEAF6543, 0xBF7B4626, 0xBD8CDFC9, 0x737B29C4);
	ccc_txt_role_sound(0xBA882151, 0x00000000, 0xEF60B8F2, 0x3E7DA76E, 0xB4C9A8E0, 0x218D2A2C); ccc_txt_role_point(90, 7, 2);

	ccc_txt_role_init(eMod::eJueSe��̫��, "��̫��", 0x00002008);
	ccc_txt_role_head(0x59800CE5, 0xDE04CA8F, 0x100C4240, 0xB0F6CF7F, 0x3E6B868D, 0x6614FBE1, 0x63CF149D, 0xF06BB480, 0xA7FC11CF, 0x038A8272);
	ccc_txt_role_head(0x9BAD855B, 0x1D850712, 0x1DF9E1E6, 0xC0C11BCB, 0x368E141D, 0xE8B3810C, 0x27583FF0, 0x291C5720, 0x7BE991F8, 0x96F785CD);
	ccc_txt_role_hea3(0x00000000, 0x12A55F25, 0xF586B778, 0xF5DF5167, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0xFC730687, 0xAB7773C8, 0xB3FE4383, 0x260DA424, 0x1D76393F, 0xFEFD5E0B);

	ccc_txt_role_action(0xAF8399B0, 0xF44C3FDE, 0x793E2626, 0xFC478A8D, 0x0E5F8449, 0x00000000, 0x9B3532C1, 0xB8E0193A, 0xEC66721B, 0x4C4E8E59, 0xA56B1779);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(65, 3/*5*/, 2); // ƫ�ƶ� 5 ��һ�� 
	ccc_txt_role_action(0xAF8399B0, 0xF44C3FDE, 0x17B1F393, 0x4C8B0590, 0x3B5927BC, 0x00000000, 0x3E26809D, 0x2A39A150, 0x45F32E1B, 0x93FC6108, 0xB4C48AE9);
	ccc_txt_role_sound(0x00085193, 0x00000000, 0xED605E67, 0xDF2D05C9, 0x6C9F6213, 0xF904345D); ccc_txt_role_point(80, 6, 2);

	ccc_txt_role_init(eMod::eJueSe�����, "�����", 0x00002009);
	ccc_txt_role_head(0x96481726, 0x7BE47C1E, 0x19073945, 0xD8909E18, 0x05054DCE, 0x796C7CDF, 0xAAB8A857, 0x9CB34AB2, 0x463F200C, 0x42ED6AF4);
	ccc_txt_role_head(0x65E4C5B9, 0x7F4D48C6, 0x4393883E, 0xAA5E2D9D, 0xC92D54ED, 0x6D6C0EFA, 0x1A9314C3, 0xE2C55B16, 0x87A898D5, 0xDE5E4A52);
	ccc_txt_role_hea3(0x00000000, 0xD21238B8, 0x4C76431B, 0xF8450820, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0xC73B0780, 0xE11C8E4A, 0xBA75CDB4, 0xBFEB5BF7, 0xA4D3F138, 0x36A9F581);

	ccc_txt_role_action(0x7E18DB15, 0x556C6551, 0x5BBDE21F, 0x946372CC, 0xBB1FA5ED, 0x00000000, 0x5AF39EEE, 0x6EB595BD, 0x8393202D, 0xC1C99339, 0xFB22F566);
	ccc_txt_role_sound(0x81B89F88, 0x00000000, 0x2E7C9873, 0xB4005117, 0x05DE025C, 0x271F03E8); ccc_txt_role_point(70, 10, 2);
	ccc_txt_role_action(0x7E18DB15, 0x556C6551, 0xB93F766F, 0x98AA3ECF, 0x5756C1C3, 0x00000000, 0xA1CA7C44, 0xAD8042D2, 0xA6B1F5AF, 0x6252396E, 0xC44A1FF3);
	ccc_txt_role_sound(0x27486A5C, 0x00000000, 0xB55DC704, 0xD0566D8B, 0xFC9BB005, 0xDB274D75); ccc_txt_role_point(90, 5, 2);

	ccc_txt_role_init(eMod::eJueSe���ʶ�, "���ʶ�", 0x00002010);
	ccc_txt_role_head(0x711AB57A, 0x5D00A773, 0x906C547A, 0x6CACF7D3, 0x2648A14C, 0x96181E89, 0xE3F1BDB4, 0x0FE23783, 0x964D9EE4, 0xBBC96FB5);
	ccc_txt_role_head(0x3CF9F50E, 0x77961E72, 0x7BB787D6, 0x0D8FBBB0, 0x13B82F9F, 0xEFC2EF87, 0xB986D1A8, 0x9694955C, 0xA990B945, 0x4F2BF65A);
	ccc_txt_role_hea3(0x00000000, 0x109B9E36, 0xD0C16179, 0x497BDB3D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x75A23D38, 0x173A7FBD, 0x6185E141, 0x08F18768, 0xF6820612, 0x3A6BFEA1);

	ccc_txt_role_action(0x51327E35, 0xDD757619, 0x0AF85B1A, 0x852A046D, 0xEB5088EA, 0x00000000, 0x80E3D5EA, 0xE6ABAE51, 0x9E62EE06, 0x5977EF1B, 0x49D6C8F1);
	ccc_txt_role_sound(0xC4FD75A8, 0x00000000, 0x249F1445, 0x6AD3D5D3, 0xFC029511, 0x00000000); ccc_txt_role_point(90, 3, 2);
	ccc_txt_role_action(0x51327E35, 0xDD757619, 0x8895F47C, 0x14356ACE, 0xFA74CEC4, 0x00000000, 0x6069C9D3, 0x2B7234F0, 0x97BC2496, 0xC41FEF07, 0xF204D02E);
	ccc_txt_role_sound(0xE6072A32, 0x00000000, 0x837941C0, 0x893F0FB4, 0x84D6DE9E, 0x00000000); ccc_txt_role_point(70, 6, 2);

	ccc_txt_role_init(eMod::eJueSe���켧, "���켧", 0x00002011);
	ccc_txt_role_head(0xA8F0A636, 0x31E53903, 0xD36F58F7, 0xF9619AEF, 0xD49C2C29, 0xD67A4945, 0x8C7FEE80, 0xE10ECEE6, 0xBE15F694, 0x5BC9838E);
	ccc_txt_role_head(0x2B7C98C3, 0x381E1367, 0x3D232596, 0x28A93F74, 0x57EB4A40, 0xF430F4EB, 0xB81963DB, 0x9F18491D, 0x1DAB56D9, 0xF8FF5961);
	ccc_txt_role_hea3(0x00000000, 0xFDC081F1, 0x640631E6, 0x08A769BE, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x548EEA91, 0xE7E627BC, 0x78B0869B, 0xA7EFAB9A, 0xEA711B40, 0xDFF68DCE);

	ccc_txt_role_action(0x326C8C14, 0x122CC513, 0xCD3B5103, 0x4A03FDE6, 0xA55E0045, 0x00000000, 0x6A75DCB1, 0x05247549, 0xF577111E, 0x15D07EC3, 0xB0F56869);
	ccc_txt_role_sound(0x2FF674EE, 0x00000000, 0x4CCAEE4D, 0xB865C712, 0xF836A9DB, 0x0C3694B7); ccc_txt_role_point(90, 8, 2);
	ccc_txt_role_action(0x3EA35ADD, 0xE1380841, 0xF9B292E5, 0xEB009BA9, 0xF9F2A3F2, 0x00000000, 0xC3578B7F, 0xA7BE3DEF, 0x24687325, 0xB5643809, 0xC801C2F1);
	ccc_txt_role_sound(0x3D9E3182, 0x00000000, 0xEDEEF46B, 0xF4DE8179, 0x8F939D62, 0xEA8D6634); ccc_txt_role_point(70, 3, 2);

	ccc_txt_role_init(eMod::eJueSe������, "������", 0x00002012);
	ccc_txt_role_head(0x14E81692, 0xF602FC8D, 0x4CC78D26, 0x755C949A, 0xABFF98BB, 0xB5A42AE6, 0xAE950445, 0x2D2D2CE2, 0x7BB02052, 0xFF482C16);
	ccc_txt_role_head(0x40EF3F56, 0xCE2C5FC5, 0x4A36089A, 0xA7A14BEF, 0xB49B9004, 0xB34BFB5C, 0x71F4E5FA, 0x04BF8DB3, 0xE37C2CEC, 0x2B11DF94);
	ccc_txt_role_hea3(0x00000000, 0x1794F083, 0xC3AC9016, 0x3561E809, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x16F9E90F, 0x6F0A4CF8, 0x51F85B52, 0x5E759D76, 0x2FE9BB64, 0xEFA9D6DF);

	ccc_txt_role_action(0x0C12BAE8, 0xF97BF92C, 0xE551C914, 0xC957AAA3, 0x8F4F67FC, 0x00000000, 0x84472A9D, 0xC4A2DC02, 0x56F3B5BB, 0x331B4FAB, 0xDE7F399E);
	ccc_txt_role_sound(0xC4FD75A8, 0x00000000, 0x8FB12C3F, 0x6AD3D5D3, 0xFC029511, 0x5BF1BAAB); ccc_txt_role_point(50, 6, 2);
	ccc_txt_role_action(0x5F7E8261, 0x0F355F7E, 0x9AFA43ED, 0xE6DA5D9B, 0x2B27EBBE, 0x00000000, 0xFC6ECFA0, 0x58A508D5, 0x0A2F6F1A, 0x4871C6FA, 0xD8731C7A);
	ccc_txt_role_sound(0xC4FD75A8, 0x00000000, 0x8FB12C3F, 0x6AD3D5D3, 0xFC029511, 0x5BF1BAAB); ccc_txt_role_point(70, 9, 2);

	ccc_txt_role_init(eMod::eJueSe������, "������", 0x00002013);
	ccc_txt_role_head(0x8DAB0CE7, 0x3A9CE28B, 0x73A0FAC5, 0xFA05D0FA, 0x656D445E, 0xF736A6A1, 0x68CE4ED1, 0xDE259A4D, 0x9EA7ECD1, 0xD059420B);
	ccc_txt_role_head(0x1D5B5EE3, 0xA116EBAE, 0x6ED9E8FA, 0x99D4DBE5, 0xA93131DD, 0xB9B2DBC4, 0x4531FC41, 0x154968DD, 0x73D4A272, 0xBA52A0ED);
	ccc_txt_role_hea3(0x00000000, 0x1A86BC3C, 0x8C4F2537, 0x513DC331, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x007E5AFC, 0x19BE8EF3, 0x698267A2, 0xF0788774, 0x2E3ECEAB, 0x04CACF58);

	ccc_txt_role_action(0x99E31696, 0x6ECB1E60, 0x5281B3CF, 0x476CCE9D, 0x70F20DBE, 0x00000000, 0xB4F23D56, 0x5C8EE307, 0x5A661D62, 0x21FB7ED1, 0x684FB095);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(0, 6, 2);
	ccc_txt_role_action(0x99E31696, 0xEADB8E80, 0x87F4A86A, 0x476CCE9D, 0x1F91CAFB, 0x00000000, 0xF6A7D696, 0x5C8EE307, 0x5A661D62, 0x21FB7ED1, 0x684FB095);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(55, 5, 2);
	ccc_txt_role_action(0x0FA78C45, 0xEADB8E80, 0x43E95E7C, 0x476CCE9D, 0x0286DC3B, 0x00000000, 0xF6A7D696, 0x5C8EE307, 0x5A661D62, 0x21FB7ED1, 0x684FB095);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(0, 8, 2);

	ccc_txt_role_init(eMod::eJueSeɱ����, "ɱ����", 0x00002014);
	ccc_txt_role_head(0x94A6E1F7, 0x9621BF55, 0xDFB8C7C5, 0xAB48ECC1, 0x3E5D0F54, 0xA03851BE, 0x9F840F59, 0xF32CD4B4, 0x4B3759D6, 0x1154E5B5);
	ccc_txt_role_head(0x198ADE50, 0xB8B2F37C, 0x02CADDA8, 0xE75C4ABA, 0x78A65ECA, 0xD777546D, 0x98F6EF1D, 0x3DBA9956, 0x00421D2B, 0x4BBAA472);
	ccc_txt_role_hea3(0x00000000, 0x08BC9208, 0x362D3B57, 0x2B7291DF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x0E1A52C7, 0xAA514523, 0xDDCEEA15, 0xFD3CBF63, 0x1ABE1CDE, 0xC3CC7675);

	ccc_txt_role_action(0xAEAA9422, 0x3D83C169, 0x4B7637F2, 0x66975748, 0xB6D35BAC, 0x00000000, 0x999908AE, 0x46BC84BB, 0xE4B2C508, 0xBFA37C7F, 0xFA4A6A69);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(55, 7, 3);
	ccc_txt_role_action(0x26DFF13F, 0x3D83C169, 0xFCC8B6B0, 0x66975748, 0x8512C2CA, 0x00000000, 0xD371B6B5, 0xD85257B0, 0xE4B2C508, 0xBFA37C7F, 0xFA4A6A69);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(0, 6, 5);
	ccc_txt_role_action(0xAEAA9422, 0xFFCFDA5B, 0x0A023999, 0x66975748, 0xD3EF50FA, 0x00000000, 0xA0C395DD, 0xD85257B0, 0xE4B2C508, 0xBFA37C7F, 0xFA4A6A69);
	ccc_txt_role_sound(0x0BAC8762, 0x00000000, 0xCB139041, 0xB31C5987, 0xDCB60BED, 0x928CE1E1); ccc_txt_role_point(0, 6, 5);

	ccc_txt_role_init(eMod::eJueSe����ʦ, "����ʦ", 0); // ���� C8FDA195 C8FDA428
	ccc_txt_role_head(0x00000000, 0x2445E772, 0xC05BF610, 0xB98E5C2C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_head(0x00000000, 0xB67F9F81, 0xEFDCD6AD, 0xFE1524A8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_hea3(0x00000000, 0xCF77E753, 0x43CD9158, 0x7830D01D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);

	// 0xC8FDA315 0x0C8FDA55
	// 0xC8FDA320 0xC8FDA138
	ccc_txt_role_action(0xC8FDA184, 0x0C8FDA39, 0xC8FDA204, 0x0C8FDA50, 0xC8FDA320, 0x00000000, 0xC8FDA138, 0xC8FDA404, 0xC8FDA352, 0xC8FDA263, 0x0C8FDA21);
	ccc_txt_role_sound(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000); ccc_txt_role_point(70, 5, 2);
	ccc_txt_role_action(0xC8FDA120, 0xC8FDA132, 0x0C8FDA90, 0x0C8FDA63, 0xC8FDA315, 0x00000000, 0x0C8FDA55, 0x00C8FDA5, 0xC8FDA371, 0xC8FDA179, 0xC8FDA365);
	ccc_txt_role_sound(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000); ccc_txt_role_point(70, 5, 2);

	ccc_txt_role_init(eMod::eJueSe��زز, "��زز", 0); // ���� 0C8FDA28 0C8FDA70
	ccc_txt_role_head(0x00000000, 0xB3CC6902, 0xB5FCB8C1, 0xCE0F0BAA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_head(0x00000000, 0xC88B63DC, 0x8F9F3F9E, 0xD758EB88, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_hea3(0x00000000, 0x1CFD013A, 0x58A52D08, 0x6A427002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);

	// 0x0C8FDA47
	// 0x0C8FDA14
	ccc_txt_role_action(0x0C8FD731, 0x0C8FDA18, 0xC8FDA234, 0x0C8FD732, 0x0C8FDA14, 0x00000000, 0x0C8FD725, 0x0C8FDA76, 0x0C8FD727, 0x0C8FD720, 0x0C8FD733);
	ccc_txt_role_sound(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000); ccc_txt_role_point(50, 6, 2);
	ccc_txt_role_action(0xC8FDA448, 0xC8FDA142, 0x0C8FD718, 0xC8FDA289, 0x0C8FDA47, 0x00000000, 0xC8FDA296, 0xC8FDA180, 0xC8FDA287, 0x0C8FD720, 0xC8FDA200);
	ccc_txt_role_sound(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000); ccc_txt_role_point(50, 6, 2);


	ccc_txt_role_init(eMod::eJueSe������, "������", 0); // ���� 0x094C5BFB  0xFE2D2B18
	ccc_txt_role_head(0x00000000, 0xD9C7192F, 0x2FA31C7A, 0xCAF5F2F9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_head(0x00000000, 0x7B90C55C, 0x5D02F7F9, 0x2E101606, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_hea3(0x00000000, 0x8C5A5E38, 0xD72B417F, 0x7D1FE366, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	ccc_txt_role_body(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);

	// 0xC8FDA390 0xC8FDA339 0xC8FDA176
	ccc_txt_role_action(0xC8FDA335, 0x0C8FDA67, 0xC8FDA244, 0xC8FDA464, 0xC8FD9114, 0x00000000, 0xC8FDA231, 0xC8FDA439, 0xC8FDA135, 0xC8FD9247, 0xC8FDA422);
	ccc_txt_role_sound(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000); ccc_txt_role_point(50, 6, 2);
	ccc_txt_role_action(0xC8FDA390, 0xC8FDA400, 0xC8FDA339, 0xC8FDA202, 0x00C8FDA4, 0x00000000, 0xC8FDA282, 0xC8FDA279, 0xC8FDA176, 0xC8FDA253, 0xC8FDA328);
	ccc_txt_role_sound(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000); ccc_txt_role_point(50, 6, 2);


#undef ccc_txt_role_init
#undef ccc_txt_role_head
#undef ccc_txt_role_hea3
#undef ccc_txt_role_body
#undef ccc_txt_role_action
#undef ccc_txt_role_sound
#undef ccc_txt_role_point

	for (eMod e = eMod::eJueSe0; e <= eMod::eJueSeEnd; e = (eMod)((int)e + 1))
	{
		auto& role = _tables.at(e);
		auto& h0 = role.heads.at(0);
		auto& h2 = role.heads.at(2);
		std::swap(h0.at(eAct::Dialog), h0.at(eAct::Big));
		std::swap(h2.at(eAct::Dialog), h2.at(eAct::Big));
		std::swap(h0.at(eAct::Dialog), h0.at(eAct::Small));
		std::swap(h2.at(eAct::Dialog), h2.at(eAct::Small));
	}

	_tables.at(eMod::eJueSe����ʦ).sounds[0] = _tables.at(eMod::eJueSe������).sounds[0];
	_tables.at(eMod::eJueSe��زز).sounds[0] = _tables.at(eMod::eJueSe������).sounds[0];
	_tables.at(eMod::eJueSe������).sounds[0] = _tables.at(eMod::eJueSe����Ů).sounds[0];
}
