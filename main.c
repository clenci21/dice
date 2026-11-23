#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int roll_1 = rand() % 6+ 1;
	int roll_2 = rand() % 6 + 1;
	
	printf("Dau cu zaru %d %d", roll_1, roll_2);

	if (roll_1 == 6) {
		if (roll_2 == 5)
			printf(" n-am nevoie de servici");
		else if (roll_2 == 6)
			printf(" ca mine nu se mai naste");
		printf("\n");
	}
	else printf("\n");

	return 0;
}
