ofxAddon
========




Compiling
---------

For [CMake-based openFrameworks][1]:

Add this repo as a git submodule to your [ofApp][2] folder, add `add_subdirectory(ofxAddon)`, `include_directories(ofxAddon/src)` and `target_link_libraries(${APP} ofxAddon)` commands to `CMakeLists.txt` project file, replacing `ofxAddon` with the name of this addon.

For [openFrameworks][3]:

Download and extract folder to your `openFrameworks/addons` directory. Go to `openFrameworks/apps/projectGenerator/projectGeneratorSimple` folder and build it if it's not compiled already. Then go to relative `bin` folder and run [projectGeneratorSimple][4]. Select this addon in the list of non-core addons. When you finish generating project folder, you can find it in `openFrameworks/apps/myApps` directory, `mySketch` is default name for it.


Examples
--------

### 


  [1]: https://github.com/procedural/of
  [2]: https://github.com/procedural/ofApp
  [3]: https://github.com/openframeworks/openFrameworks
  [4]: https://github.com/ofZach/projectGeneratorSimple/blob/master/bin/readMe.md

