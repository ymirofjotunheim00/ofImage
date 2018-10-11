#include "ofApp.h"
#include <fstream>
using namespace std;

void ofApp::setup(){
     auto name = std::getenv("myfile");
     auto filename = name? name: "input.jpg";
	cout << "Hello from setup"<<endl;

     img.load(filename);
 
     x = abs(img.getWidth() - ofGetWidth())/2;
     y = abs(img.getHeight() - ofGetHeight())/2;

     

       n =  3 * img.getWidth() * img.getHeight();
     
}


//--------------------------------------------------------------
void ofApp::update(){

}
//--------------------------------------------------------------
void ofApp::draw(){

ofBackground(0);
img.draw(x,y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'i') 
          { 
		cout<<"i has been pressed"<<endl;
 
             

                for(int i = 0 ;i < n; i++)
                 img.setColor(i, img.getColor(i).invert());
              
           img.update();
           }//end if
	if (key == 'A')
	{
		cout<<"A key has been pressed"<<endl;
	}
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

