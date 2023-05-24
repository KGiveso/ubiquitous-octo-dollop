#include "main.h"

/**
 * win_millions - Overwrites the srand function in the libc shared object
 * @runs:  to use for the random number generator. [Will be Ignored]
 */
void win_millions(unsigned int runs)
{
        const char *no_txt = "9 8 10 24 75 - 9\n";
        const char *txt = "Congratulations, you win the Jackpot!\n";

        (void)runs;
        write(STDOUT_FILENO, (void *)no_txt, 19);
        write(STDOUT_FILENO, (void *)txt, 36);
        exit(EXIT_SUCCESS);
}
