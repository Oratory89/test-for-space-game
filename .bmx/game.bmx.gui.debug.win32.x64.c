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
static BBString _s14={
	&bbStringClass,
	0xad36fdc9aaf2b5ac,
	17,
	{84,101,120,116,117,114,101,115,92,68,117,100,101,46,98,109,112
}
};
static BBString _s13={
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
static BBString _s12={
	&bbStringClass,
	0xd1123a720161ad7,
	18,
	{92,84,101,120,116,117,114,101,115,92,68,117,100,101,46,98,109
	,112}
};
static BBString _s11={
	&bbStringClass,
	0x2ff5169bcee4f667,
	20,
	{92,84,101,120,116,117,114,101,115,92,71,114,111,117,110,100,46
	,98,109,112}
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
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct brl_max2d_image_TImage_obj* _m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
struct brl_max2d_image_TImage_obj* _m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
BBFLOAT _m_game_DudeX=400.000000f;
BBFLOAT _m_game_DudeY=250.000000f;
BBARRAY _m_game_Map_Array=(&bbEmptyArray);
extern const unsigned char * _ib_bb_main_1_data;
extern const unsigned int _ib_bb_main_1_size;
extern const unsigned char * _ib_bb_main_2_data;
extern const unsigned int _ib_bb_main_2_size;
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_game_GroundTImage, &_m_game_Map_Array + 1);
		bbIncbinAdd(&_s11,&_ib_bb_main_1_data,_ib_bb_main_1_size);
		bbIncbinAdd(&_s12,&_ib_bb_main_2_data,_ib_bb_main_2_size);
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
		bbRegisterSource(0x5358ddd295e5a468, "c:/--=Program=--/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0x91c71394e6b40146, "c:/--=Program=--/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		bbRegisterSource(0xd9f5b9e7823d7d8d, "d:/blitz max stuff/game.bmx");
		struct BBDebugScope_5 __scope = {
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
					"Map_Array",
					"[,]i",
					.var_address=(void*)&_m_game_Map_Array
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0xd9f5b9e7823d7d8d, 2, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(800,600,0,0,0,-1,-1);
		struct BBDebugStm __stmt_1 = {0xd9f5b9e7823d7d8d, 3, 0};
		bbOnDebugEnterStm(&__stmt_1);
		brl_random_SeedRnd(bbMilliSecs());
		struct BBDebugStm __stmt_2 = {0xd9f5b9e7823d7d8d, 7, 0};
		bbOnDebugEnterStm(&__stmt_2);
		_m_game_GroundTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s13,-1);
		struct BBDebugStm __stmt_3 = {0xd9f5b9e7823d7d8d, 8, 0};
		bbOnDebugEnterStm(&__stmt_3);
		_m_game_DudeTImage=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s14,-1);
		struct BBDebugStm __stmt_4 = {0xd9f5b9e7823d7d8d, 11, 0};
		bbOnDebugEnterStm(&__stmt_4);
		struct BBDebugStm __stmt_5 = {0xd9f5b9e7823d7d8d, 12, 0};
		bbOnDebugEnterStm(&__stmt_5);
		struct BBDebugStm __stmt_6 = {0xd9f5b9e7823d7d8d, 15, 0};
		bbOnDebugEnterStm(&__stmt_6);
		_m_game_Map_Array=bbArrayNew("i", 2, 50, 50);
		struct BBDebugStm __stmt_7 = {0xd9f5b9e7823d7d8d, 17, 0};
		bbOnDebugEnterStm(&__stmt_7);
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
				struct BBDebugStm __stmt_0 = {0xd9f5b9e7823d7d8d, 18, 0};
				bbOnDebugEnterStm(&__stmt_0);
				BBUINT* bbt_=((BBARRAY)_m_game_Map_Array)->scales + 1;
				((BBINT*)BBARRAYDATAINDEX((_m_game_Map_Array),(_m_game_Map_Array)->dims,(*(bbt_)) * ((BBUINT)bbt_X) + 37U))[(*(bbt_)) * ((BBUINT)bbt_X) + 37U]=1;
				bbOnDebugLeaveScope();
			}
		}
		struct BBDebugStm __stmt_8 = {0xd9f5b9e7823d7d8d, 23, 0};
		bbOnDebugEnterStm(&__stmt_8);
		while(!(brl_polledinput_KeyDown(27)!=0)){
			struct BBDebugScope __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0xd9f5b9e7823d7d8d, 24, 0};
			bbOnDebugEnterStm(&__stmt_0);
			brl_max2d_Cls();
			struct BBDebugStm __stmt_1 = {0xd9f5b9e7823d7d8d, 26, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)_m_game_DudeTImage,(_m_game_DudeX-8.00000000f),(_m_game_DudeY-32.0000000f),0);
			struct BBDebugStm __stmt_2 = {0xd9f5b9e7823d7d8d, 28, 0};
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
					struct BBDebugStm __stmt_0 = {0xd9f5b9e7823d7d8d, 29, 0};
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
							struct BBDebugStm __stmt_0 = {0xd9f5b9e7823d7d8d, 31, 0};
							bbOnDebugEnterStm(&__stmt_0);
							BBUINT* bbt_2=((BBARRAY)_m_game_Map_Array)->scales + 1;
							if(((BBINT*)BBARRAYDATAINDEX((_m_game_Map_Array),(_m_game_Map_Array)->dims,(*(bbt_2)) * ((BBUINT)bbt_X2) + ((BBUINT)bbt_Y)))[(*(bbt_2)) * ((BBUINT)bbt_X2) + ((BBUINT)bbt_Y)]==1){
								struct BBDebugScope __scope = {
									BBDEBUGSCOPE_LOCALBLOCK,
									0,
									{
										BBDEBUGDECL_END 
									}
								};
								bbOnDebugEnterScope(&__scope);
								struct BBDebugStm __stmt_0 = {0xd9f5b9e7823d7d8d, 32, 0};
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
			struct BBDebugStm __stmt_3 = {0xd9f5b9e7823d7d8d, 38, 0};
			bbOnDebugEnterStm(&__stmt_3);
			brl_graphics_Flip(-1);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}