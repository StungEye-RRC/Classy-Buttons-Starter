#pragma once

#include <vector>
#include "ofMain.h"
#include "soundBoardButton.h"

class ofApp : public ofBaseApp {

public:
	void setup() override;
	void update() override;
	void draw() override;
	void keyPressed(int key) override;

private:
	// Collection of SoundBoardButtons.
	std::vector<SoundBoardButton> buttons;
};
