// Example 2 - External archive polygons.c

#include "9.2-polygons.h"

float calcTrianglePerimeter(float a, float b, float c){
	return a + b + c;
}

float calcRectanglePerimeter(float a, float b){
	return 2 * b + 2 * a;
}

float calcCirclePerimeter(float r){
	return 2 * PI * r;
}

float calcTriangleArea(float a, float b){
	return (b * a) / 2;
}

float calcRectangleArea(float a, float b){
	return b * a;
}

float calcCircleArea(float r){
	return PI * (r * r);
}
