#include <stdio.h>
int main() {
	float s1,s2,s3;
	printf("Enter side1: ");
	scanf("%f",&s1);
	printf("Enter side2: ");
	scanf("%f",&s2);
	printf("Enter side3: ");
	scanf("%f",&s3);
	if (s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
		printf("This is a valid traiangle.");
	else
		printf("This is not a valid triangle");
	return 0;
}