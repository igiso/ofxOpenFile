#include "testApp.h"











//--------------------------------------------------------------
void testApp::setup(){

    

}

//---------------------------------------------------------------

testApp::~testApp(){


    
}


//-------------------------------------------------------------


//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    ofDrawBitmapString("press key to select file to open", 50,50);



    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    ofFileDialogResult path = ofSystemLoadDialog("open File");
    
    if(path.bSuccess){
        string openthis = ofToDataPath(path.getPath());
        ofOpenFile(openthis);
    }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

    
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo info){
	
    

}

