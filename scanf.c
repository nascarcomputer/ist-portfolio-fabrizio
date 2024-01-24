#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("How old are you right now?: ");
	scanf(" %i", &age);
	
	fflush(stdin);
	
	printf("Now, what is your gpa right now?:, ");
	scanf(" %f", &gpa);
	
	printf("One final thing. What is your grade right now?:");
	scanf(" %c", &grade);

	
	
	printf("Soooooo, you said you are %i, you have %f, and you have a %c. \n", age, gpa, grade);
	return 0;
}
