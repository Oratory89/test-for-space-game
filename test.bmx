SuperStrict
Framework Brl.StandardIO
Import Brl.GLMax2D

Graphics 800, 600

Local satelliteX:Float
Local satelliteY:Float
Local satelliteAngle:Float = 0
Local satelliteSpeed:Float = 2.0
Local satelliteDistance:Float = 75.0

Local shipX:Float
Local shipY:Float

Repeat
    
    Cls


    shipX = MouseX()
    shipY = MouseY()

    'assume it moves per "frame" (normally you split "logic" and "render")
    satelliteAngle = (satelliteAngle + satelliteSpeed) mod 360
    Local sineDistance:Float = 10 + (0.6 + 0.4 * sin(Millisecs()/2.5)) * satelliteDistance
    satelliteX = Cos(satelliteAngle) * sineDistance
    satelliteY = Sin(satelliteAngle) * sineDistance
    
    DrawOval(shipX + satelliteX - 5, shipy + satelliteY - 5, 10, 10)    
    DrawOval(shipX - 15, shipY - 15, 30, 30)   
	
	
	Drawtext("Ship.X: "+ShipX,10,20)
	Drawtext("Ship.Y: "+ShipY,10,30)
	Drawtext("W.X: "+(shipX + satelliteX - 5),10,40)
	Drawtext("W.Y: "+(shipy + satelliteY - 5),10,50)
    
    Flip 1
Until KeyHit(KEY_ESCAPE) or AppTerminate()