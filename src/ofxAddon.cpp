#include "ofxAddon.h"

ofxAddon::ofxAddon()
{
  if(!isRegistered) {
    isRegistered = true;
    ofAddListener(ofEvents().update, this, &ofxAddon::update);
  }
}

ofxAddon::~ofxAddon()
{
  if(isRegistered) {
    isRegistered = false;
    ofRemoveListener(ofEvents().update, this, &ofxAddon::update);
  }
}

void ofxAddon::update(ofEventArgs& args)
{
}
