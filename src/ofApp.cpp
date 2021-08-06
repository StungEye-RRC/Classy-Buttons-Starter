#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	// Add two buttons to the buttons vector.

	buttons.emplace_back(
		"ka-ching.mp3", "KAACHING!!!",
		20, 40, 150, 30,
		ofColor(255, 182, 193), ofColor(255, 140, 105), ofColor(144, 238, 144)
	);

	buttons.emplace_back(
		"airhorn.mp3", "Air Horn",
		200, 80, 100, 50,
		ofColor(255, 228, 196), ofColor(255, 127, 80), ofColor(143, 0, 255)
	);
}

//--------------------------------------------------------------
void ofApp::update() {
	// button is a reference to avoid only interacting with a copy of the button.
	// Without the reference the internal state of button's cannot be changed.
	for (auto& button : buttons) {
		button.processMouse();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(220);
	for (auto& button : buttons) {
		button.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	// Left this method is place because it can be used for debugging.
}
