#ifndef __OFX_TOBII_EYEX__
#define __OFX_TOBII_EYEX__

#include "ofMain.h"
#include <assert.h>

#ifdef _WIN32
    #include "eyex\EyeX.h"
#elif __APPLE__
    #include "eyex/EyeX.h"
#endif

#define TOBII_TX_DETAIL

class ofxTobiiEyeX
{
	TX_CONTEXTHANDLE mHContext;

public:

	ofxTobiiEyeX();
	virtual ~ofxTobiiEyeX();

	bool setup();
	
	TX_REAL getGazeX();
	TX_REAL getGazeY();
	TX_REAL getEyeXTimestamp();
	bool getPresent();
};

#endif
