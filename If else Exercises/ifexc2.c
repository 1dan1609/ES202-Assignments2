#include <stdio.h>
int main() {
	char c;
	printf("Enter character: ");
	scanf("%c",&c);
	if (c>='A' && c<='Z')
		printf("This is an uppercase character.");
	else if (c>='a' && c<='z')
		printf("This is a lowercase character.");
	else 
		printf("This character is not a letter.");
	return 0;
}