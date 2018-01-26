/*
 *  ofxTransparentWindowUtil.cpp
 *
 *  Created by n3m3da on 25/01/18. Original fork from <https://github.com/jeffcrouse/ofxTransparentWindow>
 *  Copyleft 2018 D·COD. No rights reserved.
 *
 */

#include "ofMain.h"

#ifdef TARGET_LINUX
  #include <X11/Xatom.h>
  #include <X11/Xutil.h>
#endif

#include "ofxTransparentWindowUtil.h"

#ifdef TARGET_LINUX
 void removeWindowBarAndTitle() {

    Hints   hints;
    Atom    windowBorders;

    hints.flags = 2;
    hints.decorations = 0;

    // remove window borders
    windowBorders = XInternAtom(ofGetX11Display(),"_MOTIF_WM_HINTS",True);
    XChangeProperty(ofGetX11Display(),ofGetX11Window(),windowBorders,windowBorders,32,PropModeReplace,(unsigned char *)&hints,5);

    // make window Transparent
    double window_alpha = 0.8;
    unsigned long window_opacity = (unsigned long)(0xFFFFFFFFul * window_alpha);

    XChangeProperty(ofGetX11Display(), ofGetX11Window(), XInternAtom(ofGetX11Display(), "_NET_WM_WINDOW_OPACITY", False), XA_CARDINAL, 32,PropModeReplace,  (unsigned char*)&window_opacity,  1L);
    XFlush(ofGetX11Display());

}
#endif
