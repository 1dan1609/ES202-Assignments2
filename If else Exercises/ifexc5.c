#include <stdio.h>
int main() {
	int amount,count=0,notes[9]={0};
	printf("Enter amount: ");
	scanf("%d",&amount);
	while (amount>0) {
		if (amount>=2000) {
			notes[0]++;
			amount-=2000;
			continue;
		}
		else if (amount>=500) {
			notes[1]++;
			amount-=500;
		}
		else if (amount>=200) {
			notes[2]++;
			amount-=200;
		}
		else if (amount>=100) {
			notes[3]++;
			amount-=100;
		}
		else if (amount>=50) {
			notes[4]++;
			amount-=50;
		}
		else if (amount>=20) {
			notes[5]++;
			amount-=20;
			continue;
		}
		else if (amount>=10) {
			notes[6]++;
			amount-=10;
		}
		else if (amount>=5) {
			notes[7]++;
			amount-=5;
		}
		else if (amount>=1) {
			notes[8]++;
			amount-=1;
		}
	}
	printf("2000: %d\n",notes[0]);
	printf("500: %d\n",notes[1]);
	printf("200: %d\n",notes[2]);
	printf("100: %d\n",notes[3]);
	printf("50: %d\n",notes[4]);
	printf("20: %d\n",notes[5]);
	printf("10: %d\n",notes[6]);
	printf("5: %d\n",notes[7]);
	printf("1: %d\n",notes[8]);
	return 0;
}