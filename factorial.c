#include <stdio.h>
#include <stdlib.h>

int main()
{
for (int number = 1; number <= 5; ++number) {
		int currentNum = number;
		long long factorial = 1;

		while (currentNum > 0) {
			factorial *= currentNum;
			--currentNum;
		}

		printf("%-7d%llux\n", number, factorial);
}

