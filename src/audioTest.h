#pragma once

#include "ofMain.h"

class audioTest : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();
		void exit();

		void mouseMoved(int x, int y );
		void audioOut(float* buffer, int bufferSize, int nChannels);

    float frequency;
    float phase;
		float phaseInc;
    float amplitude;
};
