#pragma once
#include "../ofxBaseMidi.h"


//*** NOTE*** this is a stub for now; the MIDI port management is handled on the android side
//  and all the data gets passed through ofxAndroidMidiBridge!!

class ofxAndroidMidiIn : public ofxBaseMidiIn {
    
public:
    ofxAndroidMidiIn() {}; //set callback somewhere...
    
    //we're not doing the port handling here, at least for now...
    bool openPort(unsigned int portNumber) {};
    bool openPort(string deviceName) {};
    bool openVirtualPort(string portname) {};
    void closePort() {};
    
    //don't ignore anything for now...
    void ignoreTypes(bool midiSysex=true, bool midiTiming=true,
                     bool midiSense=true) {};
    
private:
    
    //this is where the JNI calls back and tells us we have a new message!
    static void _midiMessageCallback();
};
