#pragma once

#include "ofMain.h"
#include "ofxCvBlobTracker.h"
#include "ofxCvTrackedBlob.h"
#include "ofxCvConstants_Track.h"
#include "ofxSimpleGuiToo.h"
#include "ofxFBOTexture.h"
#include "Constants.h"

class sensing  
{
	
public:
	
	sensing(ofxCvBlobListener * listener);
	
	void update();
	void draw();
	
	int cwidth;
    int cheight;
	int threshold;
	bool bLearnBakground;
	bool show;
	int area;
    ofVideoGrabber  vidGrabber;
    ofxCvColorImage  colorImg;
    ofxCvGrayscaleImage  grayImg;
    ofxCvGrayscaleImage  bgImg;
    ofxCvContourFinder  contourFinder;
    ofxCvBlobTracker  blobTracker;	
	vector <ofxCvTrackedBlob> getBlobs();
	bool disabled;
	
private:
	
	ofxFBOTexture outputTexture;
	int blurAmount;
	bool myButton;
	ofImage mask;
	unsigned char * maskPixels;
	unsigned char * grayPixels;
	
};