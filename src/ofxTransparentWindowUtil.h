/*
 *  ofxTransparentWindowUtil.h
 *
 *  Created by n3m3da on 25/01/18. Original fork from <https://github.com/jeffcrouse/ofxTransparentWindow>
 *  Copyleft 2018 D·COD. No rights reserved.
 *
 */

#pragma once

extern void removeWindowBarAndTitle();

#ifdef TARGET_LINUX
typedef struct{
	unsigned long   flags;
	unsigned long   functions;
	unsigned long   decorations;
	long            inputMode;
	unsigned long   status;
} Hints;
#endif
