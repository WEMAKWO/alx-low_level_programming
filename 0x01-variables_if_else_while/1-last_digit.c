#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	std::cout << "The last digit of " << n << " is ";

    if (last_digit > 5) { std::cout << last_digit << " and is greater than 5" << std::endl;
    } else if (last_digit == 0) {
        std::cout << last_digit << " and is 0" << std::endl;
    } else {
        std::cout << last_digit << " and is less than 6 and not 0" << std::endl;
    }
	return (0);
}
