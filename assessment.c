#include <stdio.h>

/**
 * main - A program to assess the eligibility of an ALX student
 *
 * Return: 0 (success)
 */
int main(void)
{
	int myScore;

	/*Ask the student to input score*/
	printf("Type in your score please: \n");
	/*Get and save the number the student types*/
	scanf("%d", &myScore);
	/*Output the number the user typed*/
	printf("Your score is : %d\n", myScore);

	if (myScore >= 80)
	{
		printf("Congratulations you have met the cut off\n");
	}
		else if (myScore < 80)
		{
			printf("You are not eligible to continue with the program\n");
		}
		return (0);
}


