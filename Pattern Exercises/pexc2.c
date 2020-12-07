#include <stdio.h>
int main() {
	int len=5,j;
	for(int i=0;i<len;i++) {
		for(j=0;j<len;j++)
			printf("1");
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<len;j++) {
			if (i%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<len;j++) {
			if (j%2==0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		printf("1");
		for(j=1;j<len-1;j++) {
			if (i==0 || i==len-1)
				printf("1");
			else
				printf("0");
		}
		printf("1\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<len;j++) {
			if (j==i && i==len/2) 
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<len;i++) {
		for(j=0;j<len;j++) {
			if ((i%2==0)==(j%2==0))
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	return 0;
}