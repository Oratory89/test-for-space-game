#ifndef TEST_FOR_SPACE_GAME_GAME_BMX_GUI_DEBUG_WIN32_X64_H
#define TEST_FOR_SPACE_GAME_GAME_BMX_GUI_DEBUG_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x64.h>
#include <brl.mod/appstub.mod/.bmx/appstub.bmx.debug.win32.x64.h>
#include <brl.mod/audio.mod/.bmx/audio.bmx.debug.win32.x64.h>
#include <brl.mod/bank.mod/.bmx/bank.bmx.debug.win32.x64.h>
#include <brl.mod/bankstream.mod/.bmx/bankstream.bmx.debug.win32.x64.h>
#include <brl.mod/base64.mod/.bmx/base64.bmx.debug.win32.x64.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x64.h>
#include <brl.mod/bmploader.mod/.bmx/bmploader.bmx.debug.win32.x64.h>
#include <brl.mod/bytebuffer.mod/.bmx/bytebuffer.bmx.debug.win32.x64.h>
#include <brl.mod/clipboard.mod/.bmx/clipboard.bmx.debug.win32.x64.h>
#include <brl.mod/collections.mod/.bmx/collections.bmx.debug.win32.x64.h>
#include <brl.mod/d3d7max2d.mod/.bmx/d3d7max2d.bmx.debug.win32.x64.h>
#include <brl.mod/d3d9max2d.mod/.bmx/d3d9max2d.bmx.debug.win32.x64.h>
#include <brl.mod/directsoundaudio.mod/.bmx/directsoundaudio.bmx.debug.win32.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.win32.x64.h>
#include <brl.mod/freeaudioaudio.mod/.bmx/freeaudioaudio.bmx.debug.win32.x64.h>
#include <brl.mod/freetypefont.mod/.bmx/freetypefont.bmx.debug.win32.x64.h>
#include <brl.mod/glgraphics.mod/.bmx/glgraphics.bmx.debug.win32.x64.h>
#include <brl.mod/glmax2d.mod/.bmx/glmax2d.bmx.debug.win32.x64.h>
#include <brl.mod/gnet.mod/.bmx/gnet.bmx.debug.win32.x64.h>
#include <brl.mod/jpgloader.mod/.bmx/jpgloader.bmx.debug.win32.x64.h>
#include <brl.mod/map.mod/.bmx/map.bmx.debug.win32.x64.h>
#include <brl.mod/matrix.mod/.bmx/matrix.bmx.debug.win32.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.win32.x64.h>
#include <brl.mod/maxunit.mod/.bmx/maxunit.bmx.debug.win32.x64.h>
#include <brl.mod/maxutil.mod/.bmx/maxutil.bmx.debug.win32.x64.h>
#include <brl.mod/objectlist.mod/.bmx/objectlist.bmx.debug.win32.x64.h>
#include <brl.mod/oggloader.mod/.bmx/oggloader.bmx.debug.win32.x64.h>
#include <brl.mod/openalaudio.mod/.bmx/openalaudio.bmx.debug.win32.x64.h>
#include <brl.mod/platform.mod/.bmx/platform.bmx.debug.win32.x64.h>
#include <brl.mod/pngloader.mod/.bmx/pngloader.bmx.debug.win32.x64.h>
#include <brl.mod/quaternion.mod/.bmx/quaternion.bmx.debug.win32.x64.h>
#include <brl.mod/randomdefault.mod/.bmx/randomdefault.bmx.debug.win32.x64.h>
#include <brl.mod/retro.mod/.bmx/retro.bmx.debug.win32.x64.h>
#include <brl.mod/tgaloader.mod/.bmx/tgaloader.bmx.debug.win32.x64.h>
#include <brl.mod/threadpool.mod/.bmx/threadpool.bmx.debug.win32.x64.h>
#include <brl.mod/timer.mod/.bmx/timer.bmx.debug.win32.x64.h>
#include <brl.mod/timerdefault.mod/.bmx/timerdefault.bmx.debug.win32.x64.h>
#include <brl.mod/uuid.mod/.bmx/uuid.bmx.debug.win32.x64.h>
#include <brl.mod/volumes.mod/.bmx/volumes.bmx.debug.win32.x64.h>
#include <brl.mod/wavloader.mod/.bmx/wavloader.bmx.debug.win32.x64.h>
#include <pub.mod/freejoy.mod/.bmx/freejoy.bmx.debug.win32.x64.h>
#include <pub.mod/freeprocess.mod/.bmx/freeprocess.bmx.debug.win32.x64.h>
#include <pub.mod/glad.mod/.bmx/glad.bmx.debug.win32.x64.h>
#include <pub.mod/nfd.mod/.bmx/nfd.bmx.debug.win32.x64.h>
#include <pub.mod/nx.mod/.bmx/nx.bmx.debug.win32.x64.h>
#include <pub.mod/opengles.mod/.bmx/opengles.bmx.debug.win32.x64.h>
#include <pub.mod/opengles3.mod/.bmx/opengles3.bmx.debug.win32.x64.h>
#include <pub.mod/vulkan.mod/.bmx/vulkan.bmx.debug.win32.x64.h>
#include <pub.mod/xmmintrin.mod/.bmx/xmmintrin.bmx.debug.win32.x64.h>
int _bb_main();
struct _m_game_TCharacter_obj;
struct _m_game_TProjectile_obj;
extern struct brl_max2d_image_TImage_obj* _m_game_GroundTImage;
extern struct brl_max2d_image_TImage_obj* _m_game_DudeTImage;
extern struct brl_max2d_image_TImage_obj* _m_game_BulletTImage;
extern BBFLOAT _m_game_DudeX;
extern BBFLOAT _m_game_DudeY;
extern struct brl_linkedlist_TList_obj* _m_game_CharacterList;
extern struct brl_linkedlist_TList_obj* _m_game_ProjectileList;
extern BBARRAY _m_game_Map_Array;
void __m_game_TCharacter_New(struct _m_game_TCharacter_obj* o);
typedef void (*_m_game_TCharacter_Draw_m)(struct _m_game_TCharacter_obj*);
void __m_game_TCharacter_Draw(struct _m_game_TCharacter_obj*);
typedef void (*_m_game_TCharacter_Shoot_m)(struct _m_game_TCharacter_obj*);
void __m_game_TCharacter_Shoot(struct _m_game_TCharacter_obj*);
typedef void (*_m_game_TCharacter_Move_m)(struct _m_game_TCharacter_obj*);
void __m_game_TCharacter_Move(struct _m_game_TCharacter_obj*);
struct BBClass__m_game_TCharacter {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_game_TCharacter_Draw_m m_Draw;
	_m_game_TCharacter_Shoot_m m_Shoot;
	_m_game_TCharacter_Move_m m_Move;
};

struct _m_game_TCharacter_obj {
	struct BBClass__m_game_TCharacter* clas;
	BBFLOAT __m_game_tcharacter_x;
	BBFLOAT __m_game_tcharacter_y;
	BBFLOAT __m_game_tcharacter_dir;
	BBFLOAT __m_game_tcharacter_speed;
	struct brl_max2d_image_TImage_obj* __m_game_tcharacter_texture;
	BBSTRING __m_game_tcharacter_weapon;
};
extern struct BBClass__m_game_TCharacter _m_game_TCharacter;
void __m_game_TProjectile_New_ffff(struct _m_game_TProjectile_obj* o,BBFLOAT bbt_X,BBFLOAT bbt_Y,BBFLOAT bbt_Dir,BBFLOAT bbt_Speed);
struct _m_game_TProjectile_obj* __m_game_TProjectile_New_ffff_ObjectNew(BBClass * clas,BBFLOAT bbt_X,BBFLOAT bbt_Y,BBFLOAT bbt_Dir,BBFLOAT bbt_Speed);
void __m_game_TProjectile_New(struct _m_game_TProjectile_obj* o);
typedef void (*_m_game_TProjectile_Move_m)(struct _m_game_TProjectile_obj*);
void __m_game_TProjectile_Move(struct _m_game_TProjectile_obj*);
struct BBClass__m_game_TProjectile {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_game_TProjectile_Move_m m_Move;
};

struct _m_game_TProjectile_obj {
	struct BBClass__m_game_TProjectile* clas;
	BBFLOAT __m_game_tprojectile_x;
	BBFLOAT __m_game_tprojectile_y;
	BBFLOAT __m_game_tprojectile_dir;
	BBFLOAT __m_game_tprojectile_speed;
};
extern struct BBClass__m_game_TProjectile _m_game_TProjectile;

#endif
