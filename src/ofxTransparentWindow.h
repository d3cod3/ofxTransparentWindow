/*
 *  ofxTransparentWindow.h
 *
 *  Created by n3m3da on 25/01/18. Original fork from <https://github.com/jeffcrouse/ofxTransparentWindow>
 *  Copyleft 2018 D·COD. No rights reserved.
 *
 */

#pragma once

#include "ofMain.h"

class ofxTransparentWindow {

public:

		void afterMainSetup();

		void mouseDragged(int x, int y);
    void mousePressed(int x, int y);
    void mouseReleased(int x, int y);

		bool            semaphore;
    ofPoint         initialLocation;
    ofPoint         currentLocation;
    ofPoint         newOrigin;

};
