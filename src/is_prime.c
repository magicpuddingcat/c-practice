#include <stdio.h>

void is_prime();

int main( int argc, const char* argv[] )
{
	is_prime();
}

void is_prime()
{
	int num;

	printf("\nEnter a number: ");
	scanf("%d", &num);

	for (int x=2; x*x <= num; x++) {
		if (num % x == 0) {
			printf("%d is not a prime.\n", num);
			exit(0);
		}
	}

	printf("%d is a prime.\n", num);
}
