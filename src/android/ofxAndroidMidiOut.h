#pragma once
#include "../ofxBaseMidi.h"

//*** NOTE*** this is a stub for now; the MIDI port management is handled on the android side
//  and all the data gets passed through ofxAndroidMidiBridge!!


class ofxAndroidMidiOut : public ofxBaseMidiIn {
    
public:
    ofxAndroidMidiOut() {}; //set callback somewhere...
    
    //we're not doing the port handling here, at least for now...
    bool openPort(unsigned int portNumber) {};
    bool openPort(string deviceName) {};
    bool openVirtualPort(string portname) {};
    void closePort() {};
    
    //don't ignore anything for now...
    void ignoreTypes(bool midiSysex=true, bool midiTiming=true,
                     bool midiSense=true) {};
    
private:
    void sendMessage();
};
