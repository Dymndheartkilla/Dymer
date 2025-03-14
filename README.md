# DYMER TIMER
A simple millis()-based timer.
Made with help from old man in Anacortes. 
If you use it, think of him.

## It:
- Helps track time without using delays.
- Is good for blinking LEDs, timing events, etc.

## You:
- Create a Dymer object with a wait time (milliseconds).
- Start the timer using start().
    - You can RE-start the timer at any time using start()
- Check if the time has passed using beepBoop(). Returns true/false.

## EXAMPLE:
#include <Dymer.h>

Dymer myTimer(2000); // creating 2 second timer

void setup() {
    Serial.begin(115200);
    myTimer.start(); // Start the timer
}

void loop() {
    if (myTimer.beepBoop()) {        	//if 'beepBoop' is true aka time is up, then do whats in the curly brackets
        Serial.println("Time is up!");
        myTimer.start(); 		// Start timer *again*
    }
}

## FUNCTIONS:
Dymer (ms) - Create a timer with ms wait time.\
setTime(ms) - Change the wait time.\
start() - Start or restart the timer.\
currentMs() - Get current time (millis()).\
beepBoop() - Returns true if the time is up.
