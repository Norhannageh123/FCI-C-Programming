#include <stdio.h>
#include <stdlib.h>

int main()
{
int gcd(int n1, int n2)
{
	if (n1 % n2 == 0) {
		return n2;
	}
	else {
		return gcd(n2, n1 % n2);
	}
}

}


