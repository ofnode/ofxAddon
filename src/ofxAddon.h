#pragma once

#include <ofMain.h>

class ofxAddon : public ofNode
{
  public:
     ofxAddon ();
    ~ofxAddon ();

  private:
    void update (ofEventArgs&);

    bool isRegistered;
};
