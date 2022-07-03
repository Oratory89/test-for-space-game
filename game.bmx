SuperStrict
Graphics(800, 600, 0, 0)
SeedRnd(MilliSecs())

Global GroundTImage:TImage = LoadImage ("Textures\Ground.bmp")
Global DudeTImage:TImage = LoadImage ("Textures\Dude.bmp")


Global DudeX:Float = 400
Global DudeY:Float = 250


Global Map_Array:Int[50, 50]

For Local X:Int = 0 To 49
	Map_Array[X, 37] = 1
Next



While Not KeyDown(KEY_ESCAPE)
Cls()

	DrawImage(DudeTImage, DudeX - 8, DudeY - 32)

	For Local X:Int = 0 To 50 - 1 ' DrawTerrain
		For Local Y:Int = 0 To 50 - 1
		
			If Map_Array[X, Y] = 1
				DrawImage(GroundTImage, X * 16, Y * 16)
			End If		
		
		Next 
	Next ' DrawTerrain

Flip()
Wend