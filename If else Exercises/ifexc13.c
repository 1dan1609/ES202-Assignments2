#include <stdio.h>
int main() {
	float units,amount=0;
	printf("Enter number of units: ");
	scanf("%f",&units);
	if (units<=50)
		amount+=units*0.5;
	else {
		amount+=50*0.5;
		units-=50;
		if (units<=100)
			amount+=units*0.75;
		else {
			amount+=100*0.75;
			units-=100;
			if (units<=100)
				amount+=units*1.2;
			else {
				amount+=100*1.2;
				units-=100;
				amount+=(units>0)*units*1.5;
			}
		}
	}
	amount+=(amount*0.2);
	printf("The amount is: %.2f",amount);
	return 0;
}