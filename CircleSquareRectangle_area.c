#include<stdio.h>

float circleArea(float rad);
float sqrArea(float side);
float rectArea(float a, float b);

int main(){
	float a = 5.0;
	float b = 9.0;
	printf("Area of rectangle is: %.2f\n", rectArea(a,b));
	printf("Area of circle is: %.2f\n", circleArea(a));
	printf("Area of square is: %.2f\n", sqrArea(a));

	return 0;
}

float circleArea(float rad){
	return 3.14*rad*rad;
}
float sqrArea(float side){
	return side*side;
}
float rectArea(float a, float b){
	return a*b;
}