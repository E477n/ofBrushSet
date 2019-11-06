#include "ofApp.h"


ofLight light;
ofEasyCam cam;
//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(227, 232, 235);
  ofSetBackgroundAuto(false);
  ofSetFrameRate(12);
  light.setup();
  light.setPosition(-100, 200,0);
  ofEnableDepthTest();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void brush_test(){
  ofSetRectMode(OF_RECTMODE_CENTER);
  int numRects = 10;
  for (int r=0; r<numRects; r++) {
      ofSetColor(ofRandom(50, 255), ofRandom(200, 255), ofRandom(200, 255));
      float width = ofRandom(.5, 3);
      float height = ofRandom(.5, 3);
      float distance = ofRandom(15);

      float angle = ofRandom(ofDegToRad(360.0));

      float xOffset = cos(angle)*distance;
      float yOffset = sin(angle)*distance;
      ofDrawRectangle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, width, height);
    }
}

//bursh inspired by Wassily Kandinsky
void brush_wk(){
  //define colorset, later could be replaced by automated canvas color slurping
  // int colorNum = 3;
  // int** wk_colors = new int*[colorNum];
  // for(int i = 0; i < colorNum; ++i)
  //   //rgb
  //   a[i] = new int[2];
  int wk_colors[2][3] = {
    {179, 27, 23},
    {122, 172, 183}
  };
  //object number
  int numEllis = ofRandom(0, 2);
  for (int i=0; i<numEllis; i++){
    int r = ofRandom(0, 2);

    float raduis = ofRandom(25, 75);
    float distance = ofRandom(150);
    float angle = ofRandom(ofDegToRad(360.0));

    float xOffset = cos(angle)*distance;
    float yOffset = sin(angle)*distance;
    ofFill();
    ofSetColor(wk_colors[r][0], wk_colors[r][1], wk_colors[r][2]);
    ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, raduis);
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofDrawCircle(ofGetMouseX()+xOffset, ofGetMouseY()+yOffset, raduis);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  cam.begin();
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){  // If the left mouse button is pressed...
        brush_wk();
    }
    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)){
      ofBackground(255);
    }
  cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
