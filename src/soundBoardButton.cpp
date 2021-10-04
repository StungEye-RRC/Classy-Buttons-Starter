#include "soundBoardButton.h"
#include "ofMain.h" // For ofDrawRectangle, ofSetColor, ofGetMouse*, etc.

// Constructor is fully implemented. You can add to it if you need to.
SoundBoardButton::SoundBoardButton(std::string soundPath, std::string text,
                                   int x, int y, int w, int h,
                                   ofColor color, ofColor hover, ofColor active)
	: text{text}, x{x}, y{y}, w{w}, h{h}, color{color}, hover{hover}, active{active} {
	sound.load(ofToDataPath(soundPath));
	sound.setMultiPlay(true);
	buttonIsPressed = false;
}

void SoundBoardButton::draw() {
	// Draw Black Border

	// Select Default/Hover/Active Fill Colour

	// Draw Filled Rectangle

	// Draw Black Text

}

void SoundBoardButton::processMouse() {
	// Play sound if button is hovered and mouse is pressed.
	// You may also want to use the buttonIsPressed boolean
	// or the state of sound.isPlaying() to ensure that a
	// a single button press doesn't trigger multiple plays. 
}

bool SoundBoardButton::buttonIsHovered() {
	// Return true if the mouse coordinates indicate that
	// the button is currently being hovered by the user.
	return true;
}
