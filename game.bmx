SuperStrict
Graphics(800, 600, 0, 0)
SeedRnd(MilliSecs())

Global GroundTImage:TImage = LoadImage ("Textures\Ground.bmp")
Global DudeTImage:TImage = LoadImage ("Textures\Dude.bmp")
Global BulletTImage:TImage = LoadImage ("Textures\Bullet.bmp")
Global pewpewTImage:TImage = LoadImage ("Textures\pewpew.bmp")

SetImageHandle( DudeTImage, 8, 0 )
SetImageHandle( pewpewTImage, 2, 0)


Global CharacterList:TList = CreateList()
Global ProjectileList:Tlist = CreateList()


Global Map_Array:Int[50, 50]

For Local X:Int = 0 To 49' Creating a "floor"
	Map_Array[X, 37] = 1
Next



Type TProjectile
	Field X:Float
	Field Y:Float
	Field Dir:Float
	Field Speed:Float = 0.2
	Field Texture:TImage = BulletTImage

	Method Move()
		X:+Speed*Cos( Dir ); Y:+Speed*Sin( Dir )		
	EndMethod

	Method New(X:Float,Y:Float,Dir:Float,Speed:Float)
		Self.X = X
		Self.Y = Y
		Self.Dir = Dir
		Self.Speed = Speed
	EndMethod

	Method Draw()
		'setrotation(Dir)
		DrawImage( Texture, X, Y)
		'Setrotation(0)
	End Method

EndType



Type TCharacter 
	Field X:Float = 400
	Field Y:Float = 300
	Field Dir:float
	Field Speed:float = 0.02 
	Field W1Texture:TImage = pewpewTImage
	Field W1X:Float
	Field W1Y:Float
	Field W1S:Float = 2
	Field W1A:Float
	Field W1D:Float = 20
	Field Texture:TImage = DudeTImage
	Field Weapon:string = "Default_Weapon"


	Method Draw()

		W1A = dir mod 360
		W1X = cos(W1A) * W1D
		W1Y = Sin(W1A) * W1D
		'Local Lx:Float = ((X-W1X)*cos(Dir) - (Y-W1Y)*sin(Dir)+W1X)
		'Local Ly:Float = ((X-W1X)*sin(Dir) + (Y-W1Y)*cos(Dir)+W1Y)
		'W1X = Lx
		'W1Y = Ly
		setrotation(Dir+90)
		DrawImage(Texture,X,Y)


		DrawImage(W1Texture,X+W1X,Y+W1Y)

		setrotation(0)
	End Method
		
		

	Method Shoot()
		Local NewProjectile:TProjectile
		ProjectileList.addlast(New TProjectile(X,Y,Dir,0.2))
	End Method


	Method Move() 'Movement for TCharacter
		If Speed < 0 then Speed = 0
		If speed > 0.1 Then speed = 0.1
		if keydown(Key_D)
			Dir=(Dir+0.1)
		end if
		if keydown(Key_A)
			Dir=(Dir-0.1)
		end if
		if keydown(Key_W)
			Speed = (Speed +0.0001)
		end if
		if keydown(Key_S)
			Speed = (Speed -0.0001)
		end if
		if keydown(key_Space)
				Shoot()
		Endif
		X:+Speed*Cos( Dir ); Y:+Speed*Sin( Dir )
	End Method	

End Type

For Local N:int = 1 To 1
	Local NewCharacter:TCharacter
	NewCharacter   = New TCharacter
	NewCharacter.X = 400
	NewCharacter.Y = 300
	NewCharacter.W1Y = NewCharacter.X + 8
	NewCharacter.W1Y = NewCharacter.Y + 8
	NewCharacter.Dir  = Rand( 0, 360 )
	CharacterList.AddLast( NewCharacter )
Next



While Not KeyDown(KEY_ESCAPE)
Cls()

	For local Character:TCharacter = EachIn CharacterList
		Character.Draw()
		Character.Move()	
		'Print Character.Dir
		Drawtext("Ship.X: "+Character.X,10,20)
		Drawtext("Ship.Y: "+Character.Y,10,30)
		Drawtext("W.X: "+Character.W1X,10,40)
		Drawtext("W.Y: "+Character.W1Y,10,50)
		Drawtext("Ship.Dir: " +character.Dir,10,60)
	next


	For Local X:Int = 0 To 50 - 1 ' DrawTerrain
		For Local Y:Int = 0 To 50 - 1
		
			If Map_Array[X, Y] = 1
				DrawImage(GroundTImage, X * 16, Y * 16)
			End If		
		
		Next 

	Next ' DrawTerrain

	For Local Projectile:TProjectile = Eachin ProjectileList ' DrawBullets
		Projectile.Draw()
		Projectile.Move()
		If Projectile.X > 800 or Projectile.X < 0 or Projectile.Y > 600 or Projectile.Y < 0
			listremove(projectileList,Projectile)
		endif
	Next

	DrawText( "Bullets: "+ProjectileList.Count(), 10, 10 )

Flip()
Wend