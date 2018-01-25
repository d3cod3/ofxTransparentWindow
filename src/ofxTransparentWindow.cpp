/*
 *  ofxTransparentWindow.cpp
 *
 *  Created by n3m3da on 25/01/18. Forked from <https://github.com/jeffcrouse/ofxTransparentWindow>
 *  Copyleft 2018 D·COD. No rights reserved.
 *
 */

#include "ofxTransparentWindow.h"
#include "ofxTransparentWindowUtil.h"

//--------------------------------------------------------------
void ofxTransparentWindow::afterMainSetup() {
	ofSetBackgroundAuto(false);	
	removeWindowBarAndTitle();

	semaphore = false;
}

//--------------------------------------------------------------
void ofxTransparentWindow::mouseDragged(int x, int y){
	currentLocation.set(ofGetWindowPositionX()+x,ofGetWindowPositionY()+y);
    newOrigin.set(currentLocation.x-initialLocation.x,currentLocation.y-initialLocation.y);
    ofSetWindowPosition(newOrigin.x,newOrigin.y);
}

//--------------------------------------------------------------
void ofxTransparentWindow::mousePressed(int x, int y){
	if(!semaphore){
        semaphore = true;
        initialLocation.set(x,y);
        currentLocation.set(ofGetWindowPositionX()+x,ofGetWindowPositionY()+y);
    }
}

//--------------------------------------------------------------
void ofxTransparentWindow::mouseReleased(int x, int y){
	semaphore = false;
}

