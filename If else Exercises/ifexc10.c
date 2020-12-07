#include <stdio.h>
int main() {
	float cp,sp,profit;
	printf("Enter cost price: ");
	scanf("%f",&cp);
	printf("Enter selling price: ");
	scanf("%f",&sp);
	profit=sp-cp;
	if (profit>=0)
		printf("There was a profit of %0.2f",profit);
	else
		printf("There was a loss of %0.2f",-profit);
}