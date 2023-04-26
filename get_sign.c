#include "main.h"

/**
 * get_sigint - Handles the crtl + c call in prompts
 * @sig: Signal handlers
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
