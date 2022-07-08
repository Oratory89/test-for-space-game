superstrict
import brl.blitz
import brl.appstub
import brl.audio
import brl.bank
import brl.bankstream
import brl.base64
import brl.basic
import brl.bmploader
import brl.bytebuffer
import brl.clipboard
import brl.collections
import brl.d3d7max2d
import brl.d3d9max2d
import brl.directsoundaudio
import brl.eventqueue
import brl.freeaudioaudio
import brl.freetypefont
import brl.glgraphics
import brl.glmax2d
import brl.gnet
import brl.jpgloader
import brl.map
import brl.matrix
import brl.maxlua
import brl.maxunit
import brl.maxutil
import brl.objectlist
import brl.oggloader
import brl.openalaudio
import brl.platform
import brl.pngloader
import brl.quaternion
import brl.randomdefault
import brl.retro
import brl.tgaloader
import brl.threadpool
import brl.timer
import brl.timerdefault
import brl.uuid
import brl.volumes
import brl.wavloader
import pub.freejoy
import pub.freeprocess
import pub.glad
import pub.nfd
import pub.nx
import pub.opengles
import pub.opengles3
import pub.vulkan
import pub.xmmintrin
TCharacter^Object{
.X#&
.Y#&
.Dir#&
.Speed#&
.Texture:TImage&
.Weapon$&
-New()="__m_game_TCharacter_New"
-Draw()="_m_game_TCharacter_Draw"
-Shoot()="_m_game_TCharacter_Shoot"
-Move()="_m_game_TCharacter_Move"
}="_m_game_TCharacter"
TProjectile^Object{
.ID%&
.X#&
.Y#&
.Dir#&
.Speed#&
-New()="__m_game_TProjectile_New"
-Move()="_m_game_TProjectile_Move"
}="_m_game_TProjectile"
GroundTImage:TImage&=mem:p("_m_game_GroundTImage")
DudeTImage:TImage&=mem:p("_m_game_DudeTImage")
DudeX#&=mem:p("_m_game_DudeX")
DudeY#&=mem:p("_m_game_DudeY")
CharacterList:TList&=mem:p("_m_game_CharacterList")
ProjectileList:TList&=mem:p("_m_game_ProjectileList")
Map_Array%&[,]&=mem:p("_m_game_Map_Array")