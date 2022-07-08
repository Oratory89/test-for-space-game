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
static BBString _s13={
	&bbStringClass,
	0x74ea3849079de930,
	14,
	{68,101,102,97,117,108,116,95,87,101,97,112,111,110}
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
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct brl_max2d_image_TImage_obj* _m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
struct brl_max2d_image_TImage_obj* _m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
BBFLOAT _m_game_DudeX=400.000000f;
BBFLOAT _m_game_DudeY=250.000000f;
struct brl_linkedlist_TList_obj* _m_game_CharacterList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
struct brl_linkedlist_TList_obj* _m_game_ProjectileList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
BBARRAY _m_game_Map_Array=(&bbEmptyArray);
void __m_game_TCharacter_New(struct _m_game_TCharacter_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_game_TCharacter;
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_x = .00000000f;
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_y = .00000000f;
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir = .00000000f;
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed = 0.02f;
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_texture = (struct brl_max2d_image_TImage_obj*)_m_game_DudeTImage;
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_weapon = &_s13;
}
void __m_game_TCharacter_Draw(struct _m_game_TCharacter_obj* o){
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Draw",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TCharacter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 52, 0};
	bbOnDebugEnterStm(&__stmt_0);
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_texture ,((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_x ,((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_y ,0);
	bbOnDebugLeaveScope();
}
void __m_game_TCharacter_Shoot(struct _m_game_TCharacter_obj* o){
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o));
	struct _m_game_TProjectile_obj* bbt_NewProjectile=(struct _m_game_TProjectile_obj*)(&bbNullObject);
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Shoot",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TCharacter",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"NewProjectile",
				":TProjectile",
				.var_address=&bbt_NewProjectile
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 57, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_NewProjectile=(struct _m_game_TProjectile_obj*)(&bbNullObject);
	struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 64, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_game_ProjectileList))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList,(BBOBJECT)__m_game_TProjectile_New_ffff_ObjectNew((struct _m_game_TProjectile_obj*)&_m_game_TProjectile,((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_x ,((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_y ,((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir ,0.02f));
	bbOnDebugLeaveScope();
}
void __m_game_TCharacter_Move(struct _m_game_TCharacter_obj* o){
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TCharacter",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 69, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed <0.000000000f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 69, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed =0.000000000f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 70, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed >0.1f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 70, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed =0.1f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 71, 0};
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
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 72, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir =(((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir +0.1f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 74, 0};
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
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 75, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir =(((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir -0.1f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {0x2c7cc27c5469e525, 77, 0};
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
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 78, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed =(((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed +0.0001f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {0x2c7cc27c5469e525, 80, 0};
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
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 81, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed =(((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed -0.0001f);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_6 = {0x2c7cc27c5469e525, 83, 0};
	bbOnDebugEnterStm(&__stmt_6);
	if(brl_polledinput_KeyDown(32)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 84, 0};
		bbOnDebugEnterStm(&__stmt_0);
		((struct _m_game_TCharacter_obj*)bbNullObjectTest(o));
		((struct _m_game_TCharacter_obj*)o)->clas->m_Shoot((struct _m_game_TCharacter_obj*)o);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_7 = {0x2c7cc27c5469e525, 86, 0};
	bbOnDebugEnterStm(&__stmt_7);
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_x =((BBFLOAT)(((BBDOUBLE)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_x )+(((BBDOUBLE)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed )*bbCos((double)((BBDOUBLE)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir )))));
	struct BBDebugStm __stmt_8 = {0x2c7cc27c5469e525, 86, 0};
	bbOnDebugEnterStm(&__stmt_8);
	((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_y =((BBFLOAT)(((BBDOUBLE)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_y )+(((BBDOUBLE)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_speed )*bbSin((double)((BBDOUBLE)((struct _m_game_TCharacter_obj*)bbNullObjectTest(o))->__m_game_tcharacter_dir )))));
	bbOnDebugLeaveScope();
}
struct BBDebugScope_10 _m_game_TCharacter_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TCharacter",
	{
		{
			BBDEBUGDECL_FIELD,
			"X",
			"f",
			.field_offset=offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"Y",
			"f",
			.field_offset=offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"Dir",
			"f",
			.field_offset=offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_dir)
		},
		{
			BBDEBUGDECL_FIELD,
			"Speed",
			"f",
			.field_offset=offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_speed)
		},
		{
			BBDEBUGDECL_FIELD,
			"Texture",
			":TImage",
			.field_offset=offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_texture)
		},
		{
			BBDEBUGDECL_FIELD,
			"Weapon",
			"$",
			.field_offset=offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_weapon)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_game_TCharacter_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Draw",
			"()",
			.var_address=(void*)&__m_game_TCharacter_Draw
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Shoot",
			"()",
			.var_address=(void*)&__m_game_TCharacter_Shoot
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Move",
			"()",
			.var_address=(void*)&__m_game_TCharacter_Move
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_game_TCharacter _m_game_TCharacter={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_game_TCharacter_scope,
	sizeof(struct _m_game_TCharacter_obj),
	(void (*)(BBOBJECT))__m_game_TCharacter_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_weapon) - offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_x) + sizeof(BBSTRING)
	,0
	,offsetof(struct _m_game_TCharacter_obj,__m_game_tcharacter_x)
	,__m_game_TCharacter_Draw
	,__m_game_TCharacter_Shoot
	,__m_game_TCharacter_Move
};

void __m_game_TProjectile_New_ffff(struct _m_game_TProjectile_obj* o,BBFLOAT bbt_X,BBFLOAT bbt_Y,BBFLOAT bbt_Dir,BBFLOAT bbt_Speed) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_game_TProjectile;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_x = .00000000f;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_y = .00000000f;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_dir = .00000000f;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_speed = 0.2f;
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"X",
				"f",
				.var_address=&bbt_X
			},
			{
				BBDEBUGDECL_LOCAL,
				"Y",
				"f",
				.var_address=&bbt_Y
			},
			{
				BBDEBUGDECL_LOCAL,
				"Dir",
				"f",
				.var_address=&bbt_Dir
			},
			{
				BBDEBUGDECL_LOCAL,
				"Speed",
				"f",
				.var_address=&bbt_Speed
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 36, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_x =bbt_X;
	struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 37, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_y =bbt_Y;
	struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 38, 0};
	bbOnDebugEnterStm(&__stmt_2);
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_dir =bbt_Dir;
	struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 39, 0};
	bbOnDebugEnterStm(&__stmt_3);
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_speed =bbt_Speed;
	bbOnDebugLeaveScope();
}
struct _m_game_TProjectile_obj* __m_game_TProjectile_New_ffff_ObjectNew(BBClass * clas,BBFLOAT bbt_X,BBFLOAT bbt_Y,BBFLOAT bbt_Dir,BBFLOAT bbt_Speed) {
	struct _m_game_TProjectile_obj* o = bbObjectAtomicNewNC(clas);
	__m_game_TProjectile_New_ffff(o, bbt_X, bbt_Y, bbt_Dir, bbt_Speed);
	return o;
}
void __m_game_TProjectile_New(struct _m_game_TProjectile_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_game_TProjectile;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_x = .00000000f;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_y = .00000000f;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_dir = .00000000f;
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_speed = 0.2f;
}
void __m_game_TProjectile_Move(struct _m_game_TProjectile_obj* o){
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Move",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TProjectile",
				.var_address=&o
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 32, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_x =((BBFLOAT)(((BBDOUBLE)((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_x )+(((BBDOUBLE)((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_speed )*bbCos((double)((BBDOUBLE)((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_dir )))));
	struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 32, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_y =((BBFLOAT)(((BBDOUBLE)((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_y )+(((BBDOUBLE)((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_speed )*bbSin((double)((BBDOUBLE)((struct _m_game_TProjectile_obj*)bbNullObjectTest(o))->__m_game_tprojectile_dir )))));
	bbOnDebugLeaveScope();
}
struct BBDebugScope_7 _m_game_TProjectile_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TProjectile",
	{
		{
			BBDEBUGDECL_FIELD,
			"X",
			"f",
			.field_offset=offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_x)
		},
		{
			BBDEBUGDECL_FIELD,
			"Y",
			"f",
			.field_offset=offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_y)
		},
		{
			BBDEBUGDECL_FIELD,
			"Dir",
			"f",
			.field_offset=offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_dir)
		},
		{
			BBDEBUGDECL_FIELD,
			"Speed",
			"f",
			.field_offset=offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_speed)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.var_address=(void*)&__m_game_TProjectile_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Move",
			"()",
			.var_address=(void*)&__m_game_TProjectile_Move
		},
		{
			BBDEBUGDECL_TYPEFUNCTION,
			"New",
			"(f,f,f,f):TProjectile",
			.var_address=(void*)&__m_game_TProjectile_New_ffff
		},
		BBDEBUGDECL_END
	}
};
struct BBClass__m_game_TProjectile _m_game_TProjectile={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_game_TProjectile_scope,
	sizeof(struct _m_game_TProjectile_obj),
	(void (*)(BBOBJECT))__m_game_TProjectile_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_speed) - offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_x) + sizeof(BBFLOAT)
	,0
	,offsetof(struct _m_game_TProjectile_obj,__m_game_tprojectile_x)
	,__m_game_TProjectile_Move
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
		bbObjectRegisterType((BBCLASS)&_m_game_TCharacter);
		bbObjectRegisterType((BBCLASS)&_m_game_TProjectile);
		bbRegisterSource(0x2c7cc27c5469e525, "d:/blitz max stuff/test for space game/game.bmx");
		bbRegisterSource(0x5358ddd295e5a468, "c:/--=Program=--/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x91c71394e6b40146, "c:/--=Program=--/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		struct BBDebugScope_7 __scope = {
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
					"ProjectileList",
					":TList",
					.var_address=(void*)&_m_game_ProjectileList
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
		struct BBDebugStm __stmt_7 = {0x2c7cc27c5469e525, 13, 0};
		bbOnDebugEnterStm(&__stmt_7);
		_m_game_ProjectileList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		struct BBDebugStm __stmt_8 = {0x2c7cc27c5469e525, 16, 0};
		bbOnDebugEnterStm(&__stmt_8);
		_m_game_Map_Array=bbArrayNew("i", 2, 50, 50);
		struct BBDebugStm __stmt_9 = {0x2c7cc27c5469e525, 18, 0};
		bbOnDebugEnterStm(&__stmt_9);
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
				struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 19, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBUINT* bbt_=((BBARRAY)_m_game_Map_Array)->scales + 1;
				((BBINT*)BBARRAYDATAINDEX((_m_game_Map_Array),(_m_game_Map_Array)->dims,(*(bbt_)) * ((BBUINT)bbt_X2) + 37U))[(*(bbt_)) * ((BBUINT)bbt_X2) + 37U]=1;
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_10 = {0x2c7cc27c5469e525, 91, 0};
		bbOnDebugEnterStm(&__stmt_10);
		{
			BBINT bbt_N=1;
			for(;(bbt_N<=1);bbt_N=(bbt_N+1)){
				struct _m_game_TCharacter_obj* bbt_NewCharacter=(struct _m_game_TCharacter_obj*)(&bbNullObject);
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
							":TCharacter",
							.var_address=&bbt_NewCharacter
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 92, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_NewCharacter=(struct _m_game_TCharacter_obj*)(&bbNullObject);
				struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 93, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_NewCharacter=(struct _m_game_TCharacter_obj*)(struct _m_game_TCharacter_obj*)bbObjectNew((BBClass *)&_m_game_TCharacter);
				struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 94, 0};
				bbOnDebugEnterStm(&__stmt_2);
				((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_NewCharacter))->__m_game_tcharacter_x =400.000000f;
				struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 95, 0};
				bbOnDebugEnterStm(&__stmt_3);
				((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_NewCharacter))->__m_game_tcharacter_y =300.000000f;
				struct BBDebugStm __stmt_4 = {0x2c7cc27c5469e525, 96, 0};
				bbOnDebugEnterStm(&__stmt_4);
				((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_NewCharacter))->__m_game_tcharacter_dir =((BBFLOAT)brl_random_Rand(0,360));
				struct BBDebugStm __stmt_5 = {0x2c7cc27c5469e525, 97, 0};
				bbOnDebugEnterStm(&__stmt_5);
				((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_game_CharacterList))->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_game_CharacterList,(BBOBJECT)bbt_NewCharacter);
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_11 = {0x2c7cc27c5469e525, 102, 0};
		bbOnDebugEnterStm(&__stmt_11);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 103, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_Cls();
			struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 105, 0};
			bbOnDebugEnterStm(&__stmt_1);
			struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_game_CharacterList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_game_CharacterList);
			while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_2))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
				struct _m_game_TCharacter_obj* bbt_Character=(struct _m_game_TCharacter_obj*)(&bbNullObject);
				struct BBDebugScope_1 __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						{
							BBDEBUGDECL_LOCAL,
							"Character",
							":TCharacter",
							.var_address=&bbt_Character
						},
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				bbt_Character=(struct _m_game_TCharacter_obj*)((struct _m_game_TCharacter_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_2))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&_m_game_TCharacter));
				if(bbt_Character==&bbNullObject){
					bbOnDebugLeaveScope();
					continue;
				}
				struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 106, 0};
				bbOnDebugEnterStm(&__stmt_0);
				((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_Character))->clas->m_Draw((struct _m_game_TCharacter_obj*)bbt_Character);
				struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 107, 0};
				bbOnDebugEnterStm(&__stmt_1);
				((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_Character))->clas->m_Move((struct _m_game_TCharacter_obj*)bbt_Character);
				struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 108, 0};
				bbOnDebugEnterStm(&__stmt_2);
				brl_standardio_Print(bbStringFromFloat(((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_Character))->__m_game_tcharacter_dir ));
				struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 109, 0};
				bbOnDebugEnterStm(&__stmt_3);
				brl_standardio_Print(bbStringFromFloat(((struct _m_game_TCharacter_obj*)bbNullObjectTest(bbt_Character))->__m_game_tcharacter_speed ));
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 113, 0};
			bbOnDebugEnterStm(&__stmt_2);
			{
				BBINT bbt_X3=0;
				for(;(bbt_X3<=49);bbt_X3=(bbt_X3+1)){
					struct BBDebugScope_1 __scope = {
						BBDEBUGSCOPE_LOCALBLOCK,
						0,
						{
							{
								BBDEBUGDECL_LOCAL,
								"X",
								"i",
								.var_address=&bbt_X3
							},
							BBDEBUGDECL_END 
						}
					};
					bbOnDebugEnterScope(&__scope);
					struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 114, 0};
					bbOnDebugEnterStm(&__stmt_0);
					{
						BBINT bbt_Y2=0;
						for(;(bbt_Y2<=49);bbt_Y2=(bbt_Y2+1)){
							struct BBDebugScope_1 __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									{
										BBDEBUGDECL_LOCAL,
										"Y",
										"i",
										.var_address=&bbt_Y2
									},
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 116, 0};
							bbOnDebugEnterStm(&__stmt_0);
							BBUINT* bbt_3=((BBARRAY)_m_game_Map_Array)->scales + 1;
							if(((BBINT*)BBARRAYDATAINDEX((_m_game_Map_Array),(_m_game_Map_Array)->dims,(*(bbt_3)) * ((BBUINT)bbt_X3) + ((BBUINT)bbt_Y2)))[(*(bbt_3)) * ((BBUINT)bbt_X3) + ((BBUINT)bbt_Y2)]==1){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 117, 0};
								bbOnDebugEnterStm(&__stmt_0);
								brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_game_GroundTImage,((BBFLOAT)(bbt_X3*16)),((BBFLOAT)(bbt_Y2*16)),0);
								bbOnDebugLeaveScope();
							}
							bbOnDebugLeaveScope();
						}
					}
					struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 122, 0};
					bbOnDebugEnterStm(&__stmt_1);
					struct brl_linkedlist_TListEnum_obj* bbt_4=(struct brl_linkedlist_TListEnum_obj*)((struct brl_linkedlist_TList_obj*)bbNullObjectTest(_m_game_ProjectileList))->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList);
					while(((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_4))->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_4)!=0){
						struct _m_game_TProjectile_obj* bbt_Projectile=(struct _m_game_TProjectile_obj*)(&bbNullObject);
						struct BBDebugScope_1 __scope = {
							BBDEBUGSCOPE_LOCALBLOCK,
							0,
							{
								{
									BBDEBUGDECL_LOCAL,
									"Projectile",
									":TProjectile",
									.var_address=&bbt_Projectile
								},
								BBDEBUGDECL_END 
							}
						};
						bbOnDebugEnterScope(&__scope);
						bbt_Projectile=(struct _m_game_TProjectile_obj*)((struct _m_game_TProjectile_obj*)bbObjectDowncast((BBOBJECT)((struct brl_linkedlist_TListEnum_obj*)bbNullObjectTest(bbt_4))->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_4),(BBClass*)&_m_game_TProjectile));
						if(bbt_Projectile==&bbNullObject){
							bbOnDebugLeaveScope();
							continue;
						}
						struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 123, 0};
						bbOnDebugEnterStm(&__stmt_0);
						brl_max2d_DrawRect(((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->__m_game_tprojectile_x ,((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->__m_game_tprojectile_y ,1.00000000f,1.00000000f);
						struct BBDebugStm __stmt_1 = {0x2c7cc27c5469e525, 124, 0};
						bbOnDebugEnterStm(&__stmt_1);
						((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->clas->m_Move((struct _m_game_TProjectile_obj*)bbt_Projectile);
						struct BBDebugStm __stmt_2 = {0x2c7cc27c5469e525, 125, 0};
						bbOnDebugEnterStm(&__stmt_2);
						if((((((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->__m_game_tprojectile_x >800.000000f) || (((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->__m_game_tprojectile_x <0.000000000f)) || (((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->__m_game_tprojectile_y >600.000000f)) || (((struct _m_game_TProjectile_obj*)bbNullObjectTest(bbt_Projectile))->__m_game_tprojectile_y <0.000000000f)){
							struct BBDebugScope __scope = {
								BBDEBUGSCOPE_LOCALBLOCK,
								0,
								{
									BBDEBUGDECL_END 
								}
							};
							bbOnDebugEnterScope(&__scope);
							struct BBDebugStm __stmt_0 = {0x2c7cc27c5469e525, 126, 0};
							bbOnDebugEnterStm(&__stmt_0);
							brl_linkedlist_ListRemove((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList,(BBOBJECT)bbt_Projectile);
							bbOnDebugLeaveScope();
						}
						bbOnDebugLeaveScope();
					}
					bbOnDebugLeaveScope();
				}
			}
			struct BBDebugStm __stmt_3 = {0x2c7cc27c5469e525, 131, 0};
			bbOnDebugEnterStm(&__stmt_3);
			brl_graphics_Flip(-1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}