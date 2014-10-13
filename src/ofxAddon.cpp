#include "ofxAddon.h"

ofxAddon::ofxAddon()
{
  if(!IsRegistered) {
    IsRegistered = true;
    ofAddListener(ofEvents().update, this, &ofxAddon::update);
  }
}

ofxAddon::~ofxAddon()
{
  if(IsRegistered) {
    IsRegistered = false;
    ofRemoveListener(ofEvents().update, this, &ofxAddon::update);
  }
}

void ofxAddon::update(ofEventArgs& args)
{
}
