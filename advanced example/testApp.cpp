#include "testApp.h"








ofImage * extern_img = NULL;


//--------------------------------------------------------------
void testApp::setup(){

    extern_img = new ofImage;
    extern_img->loadImage("button.png");




}

//---------------------------------------------------------------

testApp::~testApp(){

if (extern_img != NULL)delete extern_img;

}


//-------------------------------------------------------------


//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    ofDrawBitmapString("Drag a File here to copy it in the directory data/333 and click on it to open it using ofOpenFile()", 50,50);



    for (int i=0; i<dummyFiles.size(); i++) {

        dummyFiles[i].draw(100+(i*50), 100, 50, 60);


    }


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

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

    for (int i=0; i<dummyFiles.size(); i++) {

        if(dummyFiles[i].isActive_){
            cout<<"trying to open: "<<dummyFiles[i].path<<endl;
            ofOpenFile(dummyFiles[i].path);

        }


    }

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo info){
	ofDirectory direc;

    direc.createDirectory("COPIED/");


    if( info.files.size() > 0 ){
		myDraggedFiles.assign( info.files.size(), ofFile() );
		for(int k = 0; k < info.files.size(); k++){
            ofFile fi__;
            cout<<info.files[k]<<endl;
            fi__.open(info.files[k]);
			myDraggedFiles[k].copyFromTo(info.files[k], "COPIED/");
            simple_button butt_;
            butt_.path = ofToDataPath("COPIED/"+fi__.getFileName(),true);
            cout<<fi__.getFileName()<<endl;
            dummyFiles.push_back(butt_);

		}
	}

}

