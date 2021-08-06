#pragma once
#include "ofColor.h" // ofColor Class
#include "ofSoundPlayer.h" // ofSoundPlayer Class
#include "ofUtils.h" // ofToDataPath()
#include "ofFileUtils.h" // std::filesystem::path (argument to ofToDataPath()

class SoundBoardButton {


public:
	SoundBoardButton(std::string soundPath, std::string text,
	                 int x, int y, int w, int h,
	                 ofColor color, ofColor hover, ofColor active);

	void draw();
	void processMouse();

private:
	std::string text; // The button's text label.
	int x, y, w, h; // The button's x/y position, width, and height.
	ofColor color, hover, active; // Colour's to use for button states.
	ofSoundPlayer sound; // The sound associated with this button.
	bool buttonIsPressed; // Optional boolean to track pressed state of button.

private:
	// Private helper. Is user hovering button with mouse?
	bool buttonIsHovered();
};
