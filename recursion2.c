#include <stdio.h>
#include <stdlib.h>

int main()
{
void isPalindrom(char txt[], int start, int end)
{
	char c1 = txt[start];
	char c2 = txt[end];
	if (start <= end) {
		printf("The word is palindrom\n");
		return;
	}
	else if (c1 != c2) {
		printf("The word is not palindrom\n");
		return;
	}
	else {
		isPalindrom(txt, start + 1, end - 1);
	}
}

}


