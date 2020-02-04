#include "audioTest.h"

//--------------------------------------------------------------
void audioTest::setup(){

  frequency = 440;
  amplitude = 0.1;
  phase = 0;
  phaseInc = (TWO_PI *frequency) / (float)48000;

  ofSoundStreamSetup(2, 0, 48000, 512, 4);
  // ofSoundStreamSetup(int nOutputs, int nInputs, int sampleRate, int bufferSize, int nBuffers)
}

//--------------------------------------------------------------
void audioTest::update(){

}

//--------------------------------------------------------------
void audioTest::draw(){

}

//--------------------------------------------------------------
void audioTest::mouseMoved(int x, int y ){
  frequency = ofMap(x, 0, ofGetWidth(), 40, 2000);
  phaseInc = TWO_PI*frequency / (float)48000;
  amplitude = ofMap(y, 0, ofGetHeight(), 1.0, 0);
}

//--------------------------------------------------------------
void audioTest::audioOut(float* buffer, int bufferSize, int nChannels){
  for(int i=0; i<bufferSize; i++){
    float currentSample = 0;

    phase += phaseInc;
    currentSample = sin(phase) * amplitude;

    buffer[i*nChannels + 0] = currentSample; //left nChannels
    buffer[i*nChannels + 1] = currentSample; //right nChannels

  }
}

void audioTest::exit() {
  ofSoundStreamClose();
}
