#include <stdio.h>
#include <stdlib.h>

int main()
{
void upper_string(char s[]) {
	int c = 0;

	while (s[c] != '\0') {
		if (s[c] >= 'a' && s[c] <= 'z') {
			s[c] = s[c] - 32;
		}
		c++;	}
}

}


