#include "brushParticle.h"

//--------------------------------------------------------------
void brushParticle::setup(){
  ofBackground(227, 232, 235);
  //ofBackground(0, 0, 0);
  ofSetBackgroundAuto(false);
  //ofSetFrameRate(12);
}

//--------------------------------------------------------------
void brushParticle::update(){

}

//--------------------------------------------------------------
void brushParticle::brushTest(){
  ofSetRectMode(OF_RECTMODE_CENTER);
  int numRects = 30;
  for (int r=0; r<numRects; r++) {
      ofSetColor(ofRandom(50, 255), ofRandom(50, 255), ofRandom(200, 255));
      float width = ofRandom(.5, 4);
      float height = ofRandom(.5, 4);
      float distance = ofRandom(30);

      float angle = ofRandom(ofDegToRad(360.0));

      float xOffset = cos(angle)*distance;
      float yOffset = sin(angle)*distance;
      ofDrawRectangle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, width, height);
    }
}

//--------------------------------------------------------------
void brushParticle::draw(){
  if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){  // If the left mouse button is pressed...
      brushTest();
  }
  if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)){
    ofBackground(227, 232, 235);
  }
}

//--------------------------------------------------------------
void brushParticle::keyPressed(int key){

}

//--------------------------------------------------------------
void brushParticle::keyReleased(int key){

}

//--------------------------------------------------------------
void brushParticle::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void brushParticle::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void brushParticle::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void brushParticle::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void brushParticle::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void brushParticle::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void brushParticle::windowResized(int w, int h){

}

//--------------------------------------------------------------
void brushParticle::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void brushParticle::dragEvent(ofDragInfo dragInfo){

}
