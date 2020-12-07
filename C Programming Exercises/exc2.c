#include <stdio.h>
int main() {
	int temp,num,fu,lu,mul=10;
	printf("Enter number: ");
	scanf("%d",&num);
	fu=num%10;
	num/=10;
	temp=num;
	while (temp>0) {
		lu=temp%10;
		temp/=10;
	}
	temp=lu; //temp is now used to store the new number
	while (num/10>0) {
		temp+=(num%10)*mul;
		num/=10;
		mul*=10;
	}
	temp+=fu*mul;
	printf("The new number is %d",temp);
	return 0;
}