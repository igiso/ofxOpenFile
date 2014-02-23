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
			
		    
    
    

};
