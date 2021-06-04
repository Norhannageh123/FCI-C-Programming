#include <stdio.h>
#include <stdlib.h>

int main()
{
long get_seconds(int h, int m, int s) {
	long seconds = 3600 * h + 60 * m + s;
	return seconds;
}


