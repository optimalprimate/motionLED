# motionLED
Motion activated LEDs (or anything) via PIR
Uses a PIR sensor with a relay to switch on the LED strip when a user enters the room

Uses a FOR loop with a delay as a 30s delay that contuously polls the sensor for movement. If detected, it resets the loop, therefore the light stays on while the user is active within 30s.
Also has a manual conductivity swtich for turning the light on with a metallic object if hands are compromised
Also has a flick switch for permanently on.
