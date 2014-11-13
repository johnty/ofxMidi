Android MIDI interface for ofxMidi, using the Android MIDI library
(https://github.com/nettoyeurny/btmidi)

Currently, the Android Midi in/outs are simply empty stubs, as the port management and data passing is handled completely on the Android (JAVA) side. The data is passed via JNI through ofxAndroidMidiBridge (implemented in our modified version of ofxAndroid) which gets the data to/from the C++ oFApp.

Dependencies:
- openFrameworks Android environment
- ofxAndroid (our ICubeX version with ofxAndroidMidiBridge)
- exampleICubeXAndroid app (to show how it works)
- AndroidMidi project (as library)

Usage Instructions
- Place this version of ofxMidi in the addons folder
- Place ofxAndroid into addons folder
- Import AndroidMidi into workspace
- import the example app into workspace
-- for the addons.make file in the project root, make sure ofxMidi, ofxAndroid are present
