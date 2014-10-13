#include "ofxAddon.h"

ofxAddon::ofxAddon()
{
  ofAddListener(ofEvents().update, this, &ofxAddon::update);
}

ofxAddon::~ofxAddon()
{
  ofRemoveListener(ofEvents().update, this, &ofxAddon::update);
}

void ofxAddon::update(ofEventArgs& args)
{
}
