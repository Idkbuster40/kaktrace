#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Code modified from ~/XWindow.c

typedef struct x_window_info {
	int scr;
	int XDefaultScreen; 
		
}x_win;


void c_window() {
	//Warning message if opencl is not installed correctly. 
	char *w_msg = "If you are seeing this, then it means you don't have OpenCL installed or something isn't working right. :/\nIf you are seeing this, then it means you don't have OpenCL installed or something isn't working right. :/\nIf you are seeing this, then it means you don't have OpenCL installed or something isn't working right. :/\n";
	printf("%s", w_msg); //Don't forget to comment out later. This is only there to stop micro & the compiler to stop complaining.
	//int scr = XDefaultScreen(Display.screen);
	
}	




