#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
	printf("Enter the number of student: ");
	scanf("%d", &num);
	int *students = malloc(num * sizeof(*students));
	printf("Enter %d scores: ", num);
	for (int i = 0; i < num; i++) {
	scanf("%d", &students[i]);
	}
	int best = students[0];
	for (int i = 1; i < num; i++) {
		if (best < students[i])
			best = students[i];
	}
	for (int i = 0; i < num; i++) {
		int score = students[i];
		if (score >= best - 10)
			printf("Student %d score is and grade is A\n", i);
		else if (score >= best - 20)
			printf("Student %d score is and grade is B\n", i);
		else if (score >= best - 30)
			printf("Student %d score is and grade is C\n", i);
		else if (score >= best - 40)
          printf("Student %d score is and grade is D\n", i);
		else
			printf("Student %d score is and grade is f\n", i);
	}
}

