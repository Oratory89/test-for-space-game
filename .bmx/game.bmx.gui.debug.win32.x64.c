#include "game.bmx.gui.debug.win32.x64.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s0={
	&bbStringClass,
	0x75cdc067fd4d9b00,
	64,
	{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81
	,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103
	,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
	,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}
};
static BBString _s1={
	&bbStringClass,
	0xf25a07ea0c0e69f,
	54,
	{65,110,32,101,108,101,109,101,110,116,32,119,105,116,104,32,116
	,104,101,32,115,97,109,101,32,107,101,121,32,97,108,114,101
	,97,100,121,32,101,120,105,115,116,115,32,105,110,32,116,104
	,101,32,109,97,112}
};
static BBString _s12={
	&bbStringClass,
	0xad36fdc9aaf2b5ac,
	17,
	{84,101,120,116,117,114,101,115,92,68,117,100,101,46,98,109,112
}
};
static BBString _s11={
	&bbStringClass,
	0x36070fd1abc59a7e,
	19,
	{84,101,120,116,117,114,101,115,92,71,114,111,117,110,100,46,98
	,109,112}
};
static BBString _s2={
	&bbStringClass,
	0xbfd0800945fa68b4,
	18,
	{84,104,101,32,113,117,101,117,101,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s3={
	&bbStringClass,
	0x5c2b786e4055ff04,
	18,
	{84,104,101,32,115,116,97,99,107,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s4={
	&bbStringClass,
	0xf8c407ed2d3563fa,
	13,
	{108,105,115,116,32,105,115,32,101,109,112,116,121}
};
static BBString _s9={
	&bbStringClass,
	0x558220868d858e40,
	37,
	{108,111,119,101,114,86,97,108,117,101,32,105,115,32,103,114,101
	,97,116,101,114,32,116,104,97,110,32,117,112,112,101,114,86
	,97,108,117,101}
};
static BBString _s5={
	&bbStringClass,
	0x42ce070328eb2a04,
	4,
	{110,111,100,101}
};
static BBString _s7={
	&bbStringClass,
	0x7f0d637a59d0dd2b,
	25,
	{110,111,100,101,32,105,115,32,102,114,111,109,32,97,110,111,116
	,104,101,114,32,108,105,115,116}
};
static BBString _s6={
	&bbStringClass,
	0xdf1cc2d23552cb81,
	29,
	{110,111,100,101,32,112,97,114,101,110,116,32,108,105,115,116,32
	,105,115,32,100,105,102,102,101,114,101,110,116}
};
static BBString _s8={
	&bbStringClass,
	0x44dc2ffe03a7a88e,
	5,
	{111,116,104,101,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
struct brl_max2d_image_TImage_obj* _m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
struct brl_max2d_image_TImage_obj* _m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
BBFLOAT _m_game_DudeX=400.000000f;
BBFLOAT _m_game_DudeY=250.000000f;
struct brl_linkedlist_TList_obj* _m_game_CharacterList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
BBARRAY _m_game_Map_Array=(&bbEmptyArray);
void __m_game_CharacterType_New(struct _m_game_CharacterType_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_game_CharacterType;
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_x = .00000000f;
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_y = .00000000f;
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir = .00000000f;
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed = 0.02f;
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_texture = (struct brl_max2d_image_TImage_obj*)_m_game_DudeTImage;
}
void __m_game_CharacterType_Draw(struct _m_game_CharacterType_obj* o){
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":CharacterType",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 29, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_game_DudeTImage,((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_x ,((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_y ,0);
	bbOnDebugLeaveScope();
}
void __m_game_CharacterType_Move(struct _m_game_CharacterType_obj* o){
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":CharacterType",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 33, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed <0.000000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 33, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed =0.000000000f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 34, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed >0.1f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 34, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed =0.1f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 35, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(brl_polledinput_KeyDown(68)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 36, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir =(((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir +0.1f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 38, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(brl_polledinput_KeyDown(65)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 39, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir =(((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir -0.1f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {0x2c7cc27c5469e525, 41, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(brl_polledinput_KeyDown(87)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 42, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed =(((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed +0.0001f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {0x2c7cc27c5469e525, 44, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(brl_polledinput_KeyDown(83)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 45, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed =(((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed -0.0001f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {0x2c7cc27c5469e525, 47, 0};
	bbOnDebugEnterStm(&__stmt_6);
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_x =((BBFLOAT)(((BBDOUBLE)((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_x )+(((BBDOUBLE)((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed )*bbCos((double)((BBDOUBLE)((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir )))));
	struct BBDebugStm __stmt_7 = {0x2c7cc27c5469e525, 47, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_y =((BBFLOAT)(((BBDOUBLE)((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_y )+(((BBDOUBLE)((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_speed )*bbSin((double)((BBDOUBLE)((struct _m_game_CharacterType_obj*)bbNullObjectTest(o))->__m_game_charactertype_dir )))));
	bbOnDebugLeaveScope();
}
struct BBDebugScope_8 _m_game_CharacterType_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"CharacterType",
	{
		{
			BBDEBUGDECL_FIELD,
			"X",
			"f",
			.field_offset=offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"Y",
			"f",
			.field_offset=offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"Dir",
			"f",
			.field_offset=offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_dir)
		},
		{
			BBDEBUGDECL_FIELD,
			"Speed",
			"f",
			.field_offset=offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_speed)
		},
		{
			BBDEBUGDECL_FIELD,
			"Texture",
			":TImage",
			.field_offset=offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_texture)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_game_CharacterType_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Draw",
			"()",
			.var_address=(void*)&__m_game_CharacterType_Draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Move",
			"()",
			.var_address=(void*)&__m_game_CharacterType_Move
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_game_CharacterType _m_game_CharacterType={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_game_CharacterType_scope,
	sizeof(struct _m_game_CharacterType_obj),
	(void (*)(BBOBJECT))__m_game_CharacterType_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_texture) - offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_x) + sizeof(struct brl_max2d_image_TImage_obj*)
	,0
	,offsetof(struct _m_game_CharacterType_obj,__m_game_charactertype_x)
	,__m_game_CharacterType_Draw
	,__m_game_CharacterType_Move
};

static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_game_GroundTImage, &_m_game_Map_Array + 1);
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxunit_maxunit();
		__bb_brl_maxutil_maxutil();
		__bb_brl_objectlist_objectlist();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_platform_platform();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_randomdefault_randomdefault();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_uuid_uuid();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_nfd_nfd();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_opengles3_opengles3();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m_game_CharacterType);
		bbRegisterSource(0x2c7cc27c5469e525, "d:/blitz max stuff/test for space game/game.bmx");
		bbRegisterSource(0x5358ddd295e5a468, "c:/--=Program=--/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x91c71394e6b40146, "c:/--=Program=--/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		struct BBDebugScope_6 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"game",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"GroundTImage",
					":TImage",
					.var_address=(void*)&_m_game_GroundTImage
				},
				{
					BBDEBUGDECL_GLOBAL,
					"DudeTImage",
					":TImage",
					.var_address=(void*)&_m_game_DudeTImage
				},
				{
					BBDEBUGDECL_GLOBAL,
					"DudeX",
					"f",
					.var_address=(void*)&_m_game_DudeX
				},
				{
					BBDEBUGDECL_GLOBAL,
					"DudeY",
					"f",
					.var_address=(void*)&_m_game_DudeY
				},
				{
					BBDEBUGDECL_GLOBAL,
					"CharacterList",
					":TList",
					.var_address=(void*)&_m_game_CharacterList
				},
				{
					BBDEBUGDECL_GLOBAL,
					"Map_Array",
					"[,]i",
					.var_address=(void*)&_m_game_Map_Array
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 2, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(800,600,0,0,0,-1,-1);
		struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 3, 0};
		bbOnDebugEnterStm(&__stmt_1);
		brl_random_SeedRnd(bbMilliSecs());
		struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 5, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s11,-1);
		struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 6, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s12,-1);
		struct BBDebugStm __stmt_4 = {0x2c7cc27c5469e525, 9, 0};
		bbOnDebugEnterStm(&__stmt_4);
		struct BBDebugStm __stmt_5 = {0x2c7cc27c5469e525, 10, 0};
		bbOnDebugEnterStm(&__stmt_5);
		struct BBDebugStm __stmt_6 = {0x2c7cc27c5469e525, 12, 0};
		bbOnDebugEnterStm(&__stmt_6);
		_m_game_CharacterList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		struct BBDebugStm __stmt_7 = {0x2c7cc27c5469e525, 15, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_game_Map_Array=bbArrayNew("i", 2, 50, 50);
		struct BBDebugStm __stmt_8 = {0x2c7cc27c5469e525, 17, 0};
		bbOnDebugEnterStm(&__stmt_8);
		{
			BBINT bbt_X=0;
			for(;(bbt_X<=49);bbt_X=(bbt_X+1)){
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"X",
							"i",
							.var_address=&bbt_X
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 18, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBUINT* bbt_=((BBARRAY)_m_game_Map_Array)->scales + 1;
				((BBINT*)BBARRAYDATAINDEX((_m_game_Map_Array),(_m_game_Map_Array)->dims,(*(bbt_)) * ((BBUINT)bbt_X) + 37U))[(*(bbt_)) * ((BBUINT)bbt_X) + 37U]=1;
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_9 = {0x2c7cc27c5469e525, 51, 0};
		bbOnDebugEnterStm(&__stmt_9);
		{
			BBINT bbt_N=1;
			for(;(bbt_N<=2);bbt_N=(bbt_N+1)){
				struct _m_game_CharacterType_obj* bbt_NewCharacter=(struct _m_game_CharacterType_obj*)(&bbNullObject);
				struct BBDebugScope_2 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"N",
							"i",
							.var_address=&bbt_N
						},
						{
							BBDEBUGDECL_LOCAL,
							"NewCharacter",
							":CharacterType",
							.var_address=&bbt_NewCharacter
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 52, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_NewCharacter=(struct _m_game_CharacterType_obj*)(&bbNullObject);
				struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 53, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_NewCharacter=(struct _m_game_CharacterType_obj*)(struct _m_game_CharacterType_obj*)bbObjectNew((BBClass *)&_m_game_CharacterType);
				struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 54, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_NewCharacter))->__m_game_charactertype_x =((BBFLOAT)brl_random_Rand(5,800));
				struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 55, 0};
				bbOnDebugEnterStm(&__stmt_3);
				((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_NewCharacter))->__m_game_charactertype_y =((BBFLOAT)brl_random_Rand(5,600));
				struct BBDebugStm __stmt_4 = {0x2c7cc27c5469e525, 56, 0};
				bbOnDebugEnterStm(&__stmt_4);
				((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_NewCharacter))->__m_game_charactertype_dir =((BBFLOAT)brl_random_Rand(0,360));
				struct BBDebugStm __stmt_5 = {0x2c7cc27c5469e525, 57, 0};
				bbOnDebugEnterStm(&__stmt_5);
				((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_game_CharacterList))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_game_CharacterList,(BBOBJECT)bbt_NewCharacter);
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_10 = {0x2c7cc27c5469e525, 62, 0};
		bbOnDebugEnterStm(&__stmt_10);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 63, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_Cls();
			struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 65, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_game_CharacterList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_game_CharacterList);
			while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_2))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
				struct _m_game_CharacterType_obj* bbt_Character=(struct _m_game_CharacterType_obj*)(&bbNullObject);
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"Character",
							":CharacterType",
							.var_address=&bbt_Character
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				bbt_Character=(struct _m_game_CharacterType_obj*)((struct _m_game_CharacterType_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_2))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&_m_game_CharacterType));
				if(bbt_Character==&bbNullObject){
					bbOnDebugLeaveScope();
					continue;
				}
				struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 66, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_Character))->clas->m_Draw((struct _m_game_CharacterType_obj*)bbt_Character);
				struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 67, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_Character))->clas->m_Move((struct _m_game_CharacterType_obj*)bbt_Character);
				struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 68, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_standardio_Print(bbStringFromFloat(((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_Character))->__m_game_charactertype_dir ));
				struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 69, 0};
				bbOnDebugEnterStm(&__stmt_3);
				brl_standardio_Print(bbStringFromFloat(((struct _m_game_CharacterType_obj*)bbNullObjectTest(bbt_Character))->__m_game_charactertype_speed ));
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 73, 0};
			bbOnDebugEnterStm(&__stmt_2);
			{
				BBINT bbt_X2=0;
				for(;(bbt_X2<=49);bbt_X2=(bbt_X2+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"X",
								"i",
								.var_address=&bbt_X2
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 74, 0};
					bbOnDebugEnterStm(&__stmt_0);
					{
						BBINT bbt_Y=0;
						for(;(bbt_Y<=49);bbt_Y=(bbt_Y+1)){
							struct BBDebugScope_1 __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									{
										BBDEBUGDECL_LOCAL,
										"Y",
										"i",
										.var_address=&bbt_Y
									},
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 76, 0};
							bbOnDebugEnterStm(&__stmt_0);
							BBUINT* bbt_3=((BBARRAY)_m_game_Map_Array)->scales + 1;
							if(((BBINT*)BBARRAYDATAINDEX((_m_game_Map_Array),(_m_game_Map_Array)->dims,(*(bbt_3)) * ((BBUINT)bbt_X2) + ((BBUINT)bbt_Y)))[(*(bbt_3)) * ((BBUINT)bbt_X2) + ((BBUINT)bbt_Y)]==1){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 77, 0};
								bbOnDebugEnterStm(&__stmt_0);
								brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_game_GroundTImage,((BBFLOAT)(bbt_X2*16)),((BBFLOAT)(bbt_Y*16)),0);
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
					}
					bbOnDebugLeaveScope();
				}
			}
			struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 83, 0};
			bbOnDebugEnterStm(&__stmt_3);
			brl_graphics_Flip(-1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}