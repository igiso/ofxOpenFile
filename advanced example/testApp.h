#pragma once

#include "ofMain.h"







template <class T>
void ofOpenFile(T path){
    
#ifdef TARGET_WIN32
    string t___ =  string(path);
    const char * path__ = t___.c_str();
    ShellExecute(NULL, _T("open"), _T(path__), NULL, NULL, SW_SHOW);
    
#else
    std::ostringstream oss;
    
    oss <<"open "<< '\"' << path << '\"';
    system(oss.str().c_str());
    
#endif
    
    
}







extern ofImage * extern_img;

class simple_button{
public:
    bool isActive_;
    ofImage * image_;
    string path;
    simple_button(){
        image_ = extern_img;
    }
    
    void draw(int x, int y, int w, int h){
        //----get is button pressed--
        float dist = ofDist(0,y,0,ofGetMouseY());
        float dist2 = ofDist(x+(w/2), 0, ofGetMouseX(), 0);
        if(dist<h+10&&dist2<w/2)isActive_=true;else isActive_ =false;
        
        if(isActive_)ofSetColor(200); else ofSetColor(255);
        ofEnableAlphaBlending();
        image_->draw(x,y, w, h);
        ofDisableAlphaBlending();
        
        
        
    }
    
};


class testApp : public ofBaseApp{

	public:
    
    ~testApp();
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void gotMessage(ofMessage msg);
		void dragEvent(ofDragInfo dragInfo);
			
		    
    
    vector <ofFile> myDraggedFiles;
    vector <simple_button> dummyFiles;

};
