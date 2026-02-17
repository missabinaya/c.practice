#include <stdio.h>
#define PI 3.14
int main(){
	float r,area;
	printf("Enter the radius value : ");
	scanf("%f",&r);
	area=PI*r*r;
	printf("The area is %f",area);
	return 0;
}