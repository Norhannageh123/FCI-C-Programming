#include <stdio.h>
#include <stdlib.h>

int main(){
/void display(int mult[][10], int rowFirst, int columnSecond)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for (i = 0; i < rowFirst; ++i)
	{
		for (j = 0; j < columnSecond; ++j)
		{
			printf("%d  ", mult[i][j]);
			if (j == columnSecond - 1)
				printf("\n\n");

