#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetVerticalSync(true);

    transparent.afterMainSetup();

    fingerMovie.load("movies/fingers.mov");
    fingerMovie.setLoopState(OF_LOOP_NORMAL);
    fingerMovie.play();

    ofSetWindowShape(fingerMovie.getWidth(),fingerMovie.getHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    fingerMovie.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,200);
    fingerMovie.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    transparent.mouseDragged(x,y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    transparent.mousePressed(x,y);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    transparent.mouseReleased(x,y);
}
