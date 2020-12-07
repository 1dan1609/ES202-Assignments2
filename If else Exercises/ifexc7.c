#include <stdio.h>
int main() {
	float a1,a2,a3;
	printf("Enter angle1: ");
	scanf("%f",&a1);
	printf("Enter angle2: ");
	scanf("%f",&a2);
	printf("Enter angle3: ");
	scanf("%f",&a3);
	if (((int)(a1+a2+a3))==180 && a1>0 && a2>0 && a3>0)
		printf("This is a valid traiangle.");
	else
		printf("This is not a valid triangle");
	return 0;
}