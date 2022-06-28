#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("MyWindow");
    // ofBackground(255, 255, 255);
    ofSetBackgroundColor(0);
//    ofSetCircleResolution(100);
    font.load("terminal-grotesque_open.otf", 60);
//    ofSetDepthTest(true);
    ofSetFrameRate(10);
}

//--------------------------------------------------------------
void ofApp::update(){
    int x, y = mModel.run();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor myDrawColor;
    ofSetLineWidth(5);
    ofSetColor(255, 10, 10);
    ofPushMatrix();
    long time = ofGetSystemTimeMillis() / 200;
    for (int x=0; x<10; ++x)
    {
        for (int y=0; y<900; ++y)
        {
            ofRotateDeg(time % 360);
            myDrawColor.setHsb(127 + ofGetMouseY() * sin(y * 0.01 + time), 127 + ofGetMouseX() * sin(y * 0.011 + time), 200 + 55 * sin(y * 0.012 + time));
            ofSetColor(myDrawColor);
            ofDrawCircle(ofGetWidth() / 10 * x + 100 * sin(y * 0.01 + time + x), ofGetHeight() / 10 + y,  50 + 40 * sin(x * 0.005 + time + x));
        }
    }
    ofPopMatrix();
    
//    for (int i=0; i<360; i+=25)
//    {
//        ofPushMatrix();
//        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//        ofRotateDeg((ofGetSystemTimeMillis() / 100 * 6) - 90);
//        ofRotateDeg(i);
//        font.drawString("Khu", 50, 0);
//        ofSetColor(255, 255, 255, i-50);
//        ofPopMatrix();
//    }
//
//    ofSetColor(0, 255, 0);
//    for (int i=0; i<360; i+=10)
//    {
//        ofPushMatrix();
//        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//        ofRotateDeg((ofGetSystemTimeMillis() / 150 * 6) - 80);
//        ofRotateDeg(i);
//        font.drawString("na", 200, 0);
//        ofSetColor(255, 255, 255, i-50);
//        ofPopMatrix();
//    }
//
//    ofSetColor(0, 0, 255);
//    for (int i=0; i<360; i+=10)
//    {
//        ofPushMatrix();
//        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//        ofRotateDeg((ofGetSystemTimeMillis() / 200 * 6) - 70);
//        ofRotateDeg(i);
//        font.drawString("thi", 340, 0);
//        ofSetColor(255, 255, 255, i-50);
//        ofPopMatrix();
//    }
//
//    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
//    ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'f':
            ofToggleFullscreen();
            break;
        case 'd':
            break;
        case 's':
            filename = ofToString(ofGetSystemTimeMillis()) + "_Drawing.jpg";
            ofSaveScreen(filename);
            break;
        case 'c':
            break;
        default:
            break;
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
