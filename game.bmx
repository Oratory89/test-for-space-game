SuperStrict
Graphics(800, 600, 0, 0)
SeedRnd(MilliSecs())

Global GroundTImage:TImage = LoadImage ("Textures\Ground.bmp")
Global DudeTImage:TImage = LoadImage ("Textures\Dude.bmp")


Global DudeX:Float = 400
Global DudeY:Float = 250

Global CharacterList:TList = CreateList()
Global ProjectileList:Tlist = CreateList()


Global Map_Array:Int[50, 50]

For Local X:Int = 0 To 49' Creating a "floor"
	Map_Array[X, 37] = 1
Next


Type ProjectileType
	Field ID:Int
	Field X:Float
	Field Y:Float
	Field Dir:Float
	Field Speed:Float = 0.2
	'Field Texture:TImage = ProjectileTImage

	Method Move()
		X:+Speed*Cos( Dir ); Y:+Speed*Sin( Dir )		
	EndMethod
EndType

Type CharacterType 
    Field X:Float
	Field Y:Float
    Field Dir:float
    Field Speed:float = 0.02 
	Field Texture:TImage = DudeTImage
	Field Weapon:string = "Default_Weapon"

    Method Draw()
        DrawImage( Texture, X, Y)
		'DrawImage( DudeTImage, X, Y)
    End Method

	Method Shoot()
		Local NewProjectile:ProjectileType
		NewProjectile = New ProjectileType
		NewProjectile.X = X
		NewProjectile.Y = Y
		NewProjectile.Dir = Dir
		NewProjectile.Speed = 0.02
		ProjectileList.AddLast(NewProjectile)
	End Method

    Method Move() 'Movement for CharacterType
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
    Local NewCharacter:CharacterType
    NewCharacter   = New CharacterType
    NewCharacter.X  = Rand( 5, 800 )
	NewCharacter.Y = Rand( 5, 600 )
    NewCharacter.Dir  = Rand( 0, 360 )
    CharacterList.AddLast( NewCharacter )
Next



While Not KeyDown(KEY_ESCAPE)
Cls()

	For local Character:CharacterType = EachIn CharacterList
		Character.Draw()
		Character.Move()	
		Print Character.Dir
		Print Character.Speed
	next


	For Local X:Int = 0 To 50 - 1 ' DrawTerrain and bullets
		For Local Y:Int = 0 To 50 - 1
		
			If Map_Array[X, Y] = 1
				DrawImage(GroundTImage, X * 16, Y * 16)
			End If		
		
		Next 

		For Local Projectile:Projectiletype = Eachin ProjectileList
			Drawrect(Projectile.X, Projectile.Y,1,1)
			Projectile.Move()
			If Projectile.X > 800 or Projectile.X < 0
				listremove(projectileList,Projectile)
			endif
		Next
	Next ' DrawTerrain

Flip()
Wend