#include <stdio.h>
int main() {
	int len=5,j;
	for(int i=0;i<len;i++) {
		for(j=0;j<(len*2-1)/2-i;j++)
			printf(" ");
		for(j=0;j<i*2+1;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<(len*2-1)/2-i;j++)
			printf(" ");
		printf("*");
		for(j=0;j<(i-1)*2+1;j++){
			if (i==len-1)
				printf("*");
			else
				printf(" ");
		}
		if (i!=0)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for(int i=len-1;i>=0;i--) {
		for(j=0;j<(len*2-1)/2-i;j++)
			printf(" ");
		for(j=0;j<i*2+1;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for(int i=len-1;i>=0;i--) {
		for(j=0;j<(len*2-1)/2-i;j++)
			printf(" ");
		printf("*");
		for(j=0;j<(i-1)*2+1;j++){
			if (i==len-1)
				printf("*");
			else
				printf(" ");
		}
		if (i!=0)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<(len*2-1)/2-i;j++)
			printf(" ");
		for(j=0;j<i*2+1;j++){
			if (j%2==0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for(int i=len-2;i>=0;i--) {
		for(j=0;j<(len*2-1)/2-i;j++)
			printf(" ");
		for(j=0;j<i*2+1;j++){
			if (j%2==0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for(int i=len-2;i>=0;i--) {
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<len-i-1;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for(int i=len-2;i>=0;i--) {
		for(j=0;j<len-i-1;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}