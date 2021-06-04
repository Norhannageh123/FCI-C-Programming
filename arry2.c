#include <stdio.h>
#include <stdlib.h>

int main(){
nt nums[10];
	for (int x = 0; x < 10; x++) {
		int n;
		scanf("%d", &n);
		nums[x] = n;
	}

	for (int x = 0; x < 10; x++) {
		int y;
		for (y= 0; y< x; y++)
			if (nums[x] == nums[y])
				break;
		if (x == y)
			printf("%d ", nums[y]);
}
}

