#include <stdio.h>
int main() {
	float sal,da,hra;
	printf("Enter salary: ");
	scanf("%f",&sal);
	if (sal<=10000) {
		da=0.8;
		hra=0.2;
	}
	else if (sal<=20000) {
		da=0.9;
		hra=0.25;
	}
	else {
		da=0.9;
		hra=0.25;
	}
	printf("The gross salary is: %.2f",sal+(da+hra)*sal);
	return 0;
}