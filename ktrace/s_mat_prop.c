//Copied over from the main.c file
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* Strlen and stuff */
#include <math.h>
#include <time.h> /* srandom(time(null)) */


typedef struct mat_properties_struct { //Create struct which has the current properties of object color and roughness. 

	char o_color[128];	
	double o_roughness; 

}s_mat_properties; 

 
