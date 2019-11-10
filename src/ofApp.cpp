#include "ofApp.h"


ofLight light;
ofEasyCam cam;

ofNode baseNode;
ofNode childNode;
ofNode grandChildNode;
ofPolyline line;

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  //ofBackground(0, 0, 0);
  ofSetBackgroundAuto(false);
  //ofSetFrameRate(12);
  light.setup();
  light.setPosition(-100, 200,0);

  ofEnableDepthTest();
  baseNode.setPosition(0, 0, 0);
  childNode.setParent(baseNode);
  childNode.setPosition(0, 0, 200);
  grandChildNode.setParent(childNode);
  grandChildNode.setPosition(0, 50, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
  baseNode.pan(1);
  childNode.tilt(3);

  line.addVertex(grandChildNode.getGlobalPosition());
  if(line.size() > 200){
    line.getVertices().erase(line.getVertices().begin());
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  cam.begin();
    // baseNode.draw();
    // childNode.draw();
    // grandChildNode.draw();
    ofSetColor(255, ofRandom(150, 220), ofRandom(150, 230));
    line.draw();
    if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)){
      ofBackground(0);
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
  ofPoint pt;
  pt.set(x, y);
  line.addVertex(pt);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  line.clear();
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
