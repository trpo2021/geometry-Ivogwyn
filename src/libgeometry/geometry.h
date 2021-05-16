#pragma once 

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct circle{
	float x;
	float y;
	float r;
};

float Squarecir (struct circle *c);
float Perimcir (struct circle *c);

void parcer(char* str, struct circle *c);