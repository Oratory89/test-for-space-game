#include "game.bmx.gui.release.win32.x64.h"
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
static BBString _s15={
	&bbStringClass,
	0x13689deafd100bd1,
	9,
	{66,117,108,108,101,116,115,58,32}
};
static BBString _s14={
	&bbStringClass,
	0x74ea3849079de930,
	14,
	{68,101,102,97,117,108,116,95,87,101,97,112,111,110}
};
static BBString _s13={
	&bbStringClass,
	0x43da9d7b5708b52e,
	19,
	{84,101,120,116,117,114,101,115,92,66,117,108,108,101,116,46,98
	,109,112}
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
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_7{int kind; const char *name; BBDebugDecl decls[8]; };
struct brl_max2d_image_TImage_obj* _m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
struct brl_max2d_image_TImage_obj* _m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
struct brl_max2d_image_TImage_obj* _m_game_BulletTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
BBFLOAT _m_game_DudeX=400.000000f;
BBFLOAT _m_game_DudeY=250.000000f;
struct brl_linkedlist_TList_obj* _m_game_CharacterList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
struct brl_linkedlist_TList_obj* _m_game_ProjectileList=(struct brl_linkedlist_TList_obj*)(&bbNullObject);
BBARRAY _m_game_Map_Array=(&bbEmptyArray);
void __m_game_TCharacter_New(struct _m_game_TCharacter_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_game_TCharacter;
	o->__m_game_tcharacter_x = .00000000f;
	o->__m_game_tcharacter_y = .00000000f;
	o->__m_game_tcharacter_dir = .00000000f;
	o->__m_game_tcharacter_speed = 0.02f;
	o->__m_game_tcharacter_texture = (struct brl_max2d_image_TImage_obj*)_m_game_DudeTImage;
	o->__m_game_tcharacter_weapon = &_s14;
}
void __m_game_TCharacter_Draw(struct _m_game_TCharacter_obj* o){
	brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)o->__m_game_tcharacter_texture ,o->__m_game_tcharacter_x ,o->__m_game_tcharacter_y ,0);
}
void __m_game_TCharacter_Shoot(struct _m_game_TCharacter_obj* o){
	struct _m_game_TProjectile_obj* bbt_NewProjectile=(struct _m_game_TProjectile_obj*)(&bbNullObject);
	(_m_game_ProjectileList)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList,(BBOBJECT)__m_game_TProjectile_New_ffff_ObjectNew((struct _m_game_TProjectile_obj*)&_m_game_TProjectile,o->__m_game_tcharacter_x ,o->__m_game_tcharacter_y ,o->__m_game_tcharacter_dir ,0.2f));
}
void __m_game_TCharacter_Move(struct _m_game_TCharacter_obj* o){
	if(o->__m_game_tcharacter_speed <0.000000000f){
		o->__m_game_tcharacter_speed =0.000000000f;
	}
	if(o->__m_game_tcharacter_speed >0.1f){
		o->__m_game_tcharacter_speed =0.1f;
	}
	if(brl_polledinput_KeyDown(68)!=0){
		o->__m_game_tcharacter_dir =(o->__m_game_tcharacter_dir +0.1f);
	}
	if(brl_polledinput_KeyDown(65)!=0){
		o->__m_game_tcharacter_dir =(o->__m_game_tcharacter_dir -0.1f);
	}
	if(brl_polledinput_KeyDown(87)!=0){
		o->__m_game_tcharacter_speed =(o->__m_game_tcharacter_speed +0.0001f);
	}
	if(brl_polledinput_KeyDown(83)!=0){
		o->__m_game_tcharacter_speed =(o->__m_game_tcharacter_speed -0.0001f);
	}
	if(brl_polledinput_KeyDown(32)!=0){
		((struct _m_game_TCharacter_obj*)o)->clas->m_Shoot((struct _m_game_TCharacter_obj*)o);
	}
	o->__m_game_tcharacter_x =((BBFLOAT)(((BBDOUBLE)o->__m_game_tcharacter_x )+(((BBDOUBLE)o->__m_game_tcharacter_speed )*bbCos((double)((BBDOUBLE)o->__m_game_tcharacter_dir )))));
	o->__m_game_tcharacter_y =((BBFLOAT)(((BBDOUBLE)o->__m_game_tcharacter_y )+(((BBDOUBLE)o->__m_game_tcharacter_speed )*bbSin((double)((BBDOUBLE)o->__m_game_tcharacter_dir )))));
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
	o->__m_game_tprojectile_x = .00000000f;
	o->__m_game_tprojectile_y = .00000000f;
	o->__m_game_tprojectile_dir = .00000000f;
	o->__m_game_tprojectile_speed = 0.2f;
	o->__m_game_tprojectile_x =bbt_X;
	o->__m_game_tprojectile_y =bbt_Y;
	o->__m_game_tprojectile_dir =bbt_Dir;
	o->__m_game_tprojectile_speed =bbt_Speed;
}
struct _m_game_TProjectile_obj* __m_game_TProjectile_New_ffff_ObjectNew(BBClass * clas,BBFLOAT bbt_X,BBFLOAT bbt_Y,BBFLOAT bbt_Dir,BBFLOAT bbt_Speed) {
	struct _m_game_TProjectile_obj* o = bbObjectAtomicNewNC(clas);
	__m_game_TProjectile_New_ffff(o, bbt_X, bbt_Y, bbt_Dir, bbt_Speed);
	return o;
}
void __m_game_TProjectile_New(struct _m_game_TProjectile_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_game_TProjectile;
	o->__m_game_tprojectile_x = .00000000f;
	o->__m_game_tprojectile_y = .00000000f;
	o->__m_game_tprojectile_dir = .00000000f;
	o->__m_game_tprojectile_speed = 0.2f;
}
void __m_game_TProjectile_Move(struct _m_game_TProjectile_obj* o){
	o->__m_game_tprojectile_x =((BBFLOAT)(((BBDOUBLE)o->__m_game_tprojectile_x )+(((BBDOUBLE)o->__m_game_tprojectile_speed )*bbCos((double)((BBDOUBLE)o->__m_game_tprojectile_dir )))));
	o->__m_game_tprojectile_y =((BBFLOAT)(((BBDOUBLE)o->__m_game_tprojectile_y )+(((BBDOUBLE)o->__m_game_tprojectile_speed )*bbSin((double)((BBDOUBLE)o->__m_game_tprojectile_dir )))));
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
		brl_graphics_Graphics(800,600,0,0,0,-1,-1);
		brl_random_SeedRnd(bbMilliSecs());
		_m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s11,-1);
		_m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s12,-1);
		_m_game_BulletTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s13,-1);
		_m_game_CharacterList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		_m_game_ProjectileList=(struct brl_linkedlist_TList_obj*)brl_linkedlist_CreateList();
		_m_game_Map_Array=bbArrayNew("i", 2, 50, 50);
		{
			BBINT bbt_X2=0;
			for(;(bbt_X2<=49);bbt_X2=(bbt_X2+1)){
				BBUINT* bbt_=((BBARRAY)_m_game_Map_Array)->scales + 1;
				((BBINT*)BBARRAYDATA(_m_game_Map_Array,1))[(*(bbt_)) * ((BBUINT)bbt_X2) + 37U]=1;
			}
		}
		{
			BBINT bbt_N=1;
			for(;(bbt_N<=1);bbt_N=(bbt_N+1)){
				struct _m_game_TCharacter_obj* bbt_NewCharacter=(struct _m_game_TCharacter_obj*)(&bbNullObject);
				bbt_NewCharacter=(struct _m_game_TCharacter_obj*)(struct _m_game_TCharacter_obj*)bbObjectNew((BBClass *)&_m_game_TCharacter);
				bbt_NewCharacter->__m_game_tcharacter_x =400.000000f;
				bbt_NewCharacter->__m_game_tcharacter_y =300.000000f;
				bbt_NewCharacter->__m_game_tcharacter_dir =((BBFLOAT)brl_random_Rand(0,360));
				(_m_game_CharacterList)->clas->m_AddLast_TObject((struct brl_linkedlist_TList_obj*)_m_game_CharacterList,(BBOBJECT)bbt_NewCharacter);
			}
		}
		while(!(brl_polledinput_KeyDown(27)!=0)){
			brl_max2d_Cls();
			struct brl_linkedlist_TListEnum_obj* bbt_2=(struct brl_linkedlist_TListEnum_obj*)(_m_game_CharacterList)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_game_CharacterList);
			while((bbt_2)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_2)!=0){
				struct _m_game_TCharacter_obj* bbt_Character=(struct _m_game_TCharacter_obj*)((struct _m_game_TCharacter_obj*)bbObjectDowncast((BBOBJECT)(bbt_2)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_2),(BBClass*)&_m_game_TCharacter));
				if(bbt_Character==&bbNullObject){
					continue;
				}
				(bbt_Character)->clas->m_Draw((struct _m_game_TCharacter_obj*)bbt_Character);
				(bbt_Character)->clas->m_Move((struct _m_game_TCharacter_obj*)bbt_Character);
				brl_standardio_Print(bbStringFromFloat(bbt_Character->__m_game_tcharacter_dir ));
				brl_standardio_Print(bbStringFromFloat(bbt_Character->__m_game_tcharacter_speed ));
			}
			{
				BBINT bbt_X3=0;
				for(;(bbt_X3<=49);bbt_X3=(bbt_X3+1)){
					{
						BBINT bbt_Y2=0;
						for(;(bbt_Y2<=49);bbt_Y2=(bbt_Y2+1)){
							BBUINT* bbt_3=((BBARRAY)_m_game_Map_Array)->scales + 1;
							if(((BBINT*)BBARRAYDATA(_m_game_Map_Array,1))[(*(bbt_3)) * ((BBUINT)bbt_X3) + ((BBUINT)bbt_Y2)]==1){
								brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_game_GroundTImage,((BBFLOAT)(bbt_X3*16)),((BBFLOAT)(bbt_Y2*16)),0);
							}
						}
					}
				}
			}
			struct brl_linkedlist_TListEnum_obj* bbt_4=(struct brl_linkedlist_TListEnum_obj*)(_m_game_ProjectileList)->clas->m_ObjectEnumerator((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList);
			while((bbt_4)->clas->m_HasNext((struct brl_linkedlist_TListEnum_obj*)bbt_4)!=0){
				struct _m_game_TProjectile_obj* bbt_Projectile=(struct _m_game_TProjectile_obj*)((struct _m_game_TProjectile_obj*)bbObjectDowncast((BBOBJECT)(bbt_4)->clas->m_NextObject((struct brl_linkedlist_TListEnum_obj*)bbt_4),(BBClass*)&_m_game_TProjectile));
				if(bbt_Projectile==&bbNullObject){
					continue;
				}
				brl_max2d_DrawText(bbStringConcat(&_s15,bbStringFromInt((_m_game_ProjectileList)->clas->m_Count((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList))),10.0000000f,10.0000000f);
				brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_game_BulletTImage,bbt_Projectile->__m_game_tprojectile_x ,bbt_Projectile->__m_game_tprojectile_y ,0);
				(bbt_Projectile)->clas->m_Move((struct _m_game_TProjectile_obj*)bbt_Projectile);
				if((((bbt_Projectile->__m_game_tprojectile_x >800.000000f) || (bbt_Projectile->__m_game_tprojectile_x <0.000000000f)) || (bbt_Projectile->__m_game_tprojectile_y >600.000000f)) || (bbt_Projectile->__m_game_tprojectile_y <0.000000000f)){
					brl_linkedlist_ListRemove((struct brl_linkedlist_TList_obj*)_m_game_ProjectileList,(BBOBJECT)bbt_Projectile);
				}
			}
			brl_graphics_Flip(-1);
		}
		return 0;
	}
	return 0;
}