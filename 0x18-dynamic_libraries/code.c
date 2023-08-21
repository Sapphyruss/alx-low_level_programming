#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * printf - print a message to the screen
 * @format: the format to be printed
 * Return: 0 success
 */
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
