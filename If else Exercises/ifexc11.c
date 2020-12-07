#include <stdio.h>
int main() {
	float p,c,m,b,cs,avg;
	char grade;
	printf("Enter marks in physics: ");
	scanf("%f",&p);
	printf("Enter marks in chemistry: ");
	scanf("%f",&c);
	printf("Enter marks in biology: ");
	scanf("%f",&b);
	printf("Enter marks in mathematics: ");
	scanf("%f",&m);
	printf("Enter marks in computer: ");
	scanf("%f",&cs);
	avg=(p+c+m+b+cs)/5;
	if (avg>=90)
		grade = 'A';
	else if (avg>=80)
		grade = 'B';
	else if (avg>=70)
		grade = 'C';
	else if (avg>=60)
		grade = 'D';
	else if (avg>=40)
		grade = 'E';
	else
		grade = 'F';
	printf("percentage: %.2f\ngrade: %c",avg,grade);
	return 0;
}