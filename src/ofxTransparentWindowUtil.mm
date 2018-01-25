/*
 *  ofxTransparentWindowUtil.mm
 *
 *  Created by n3m3da on 25/01/18. Original fork from <https://github.com/jeffcrouse/ofxTransparentWindow>
 *  Copyleft 2018 D·COD. No rights reserved.
 *
 */

#include "ofMain.h"

#ifdef TARGET_OSX
    #include <Cocoa/Cocoa.h>
    #include <AppKit/NSOpenGL.h>
    #include <OpenGL/OpenGL.h>
#endif

#include "ofxTransparentWindowUtil.h"

 void removeWindowBarAndTitle() {

    #ifdef TARGET_OSX
        NSOpenGLContext * myContext = nil;

        NSWindow * window = (NSWindow *)ofGetCocoaWindow();

        myContext = [ NSOpenGLContext currentContext ];

        GLint opacity = 0;
        [myContext setValues:&opacity forParameter:NSOpenGLCPSurfaceOpacity];

        [window setOpaque:NO];
        [window setBackgroundColor: [NSColor clearColor]];
        [window setHasShadow:YES];
        [window setIgnoresMouseEvents:NO];
        [window setMovableByWindowBackground:YES];
        [window setAcceptsMouseMovedEvents:YES];
        [window setMovable:YES];
        [window setLevel: kCGNormalWindowLevel];
        [window setStyleMask:NSBorderlessWindowMask];

        NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

        [pool release];
    #endif

}
