//brush inspired by Wassily Kandinsky

#include "brushWK.h"


ofLight light_2;
ofEasyCam cam_2;

//--------------------------------------------------------------
void brushWK::setup(){
  ofBackground(227, 232, 235);
  //ofBackground(0, 0, 0);
  ofSetBackgroundAuto(false);
  //ofSetFrameRate(12);
  light_2.setup();
  light_2.setPosition(-100, 200,0);

  ofEnableDepthTest();
}

//--------------------------------------------------------------
void brushWK::update(){

}

//brush inspired by Wassily Kandinsky
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
void brushWK::draw(){
  cam_2.begin();
    if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){  // If the left mouse button is pressed...
        brush_wk();
    }
    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)){
      ofBackground(227, 232, 235);
    }
  cam_2.end();
}

//--------------------------------------------------------------
void brushWK::keyPressed(int key){

}

//--------------------------------------------------------------
void brushWK::keyReleased(int key){

}

//--------------------------------------------------------------
void brushWK::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void brushWK::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void brushWK::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void brushWK::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void brushWK::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void brushWK::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void brushWK::windowResized(int w, int h){

}

//--------------------------------------------------------------
void brushWK::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void brushWK::dragEvent(ofDragInfo dragInfo){

}
