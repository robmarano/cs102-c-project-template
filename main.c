/*
 * main.c
 *
 * Authors: Prof Rob Marano <rob@cooper.edu>
 * 
 */

#include "main.h"

/* mainline of program which accepts command-line arguments */
int main(int argc, char *argv[]) {

    /* echo the programs command-line arguments using array indexing */
    int next; // index to next argument to process/access
    
    for (next = 1; next < argc; next++) {
        printf("%s%c", argv[next], (next < argc - 1) ? ' ': '\n');
    }

    /* exit from program to shell with integer code EXIT_SUCCESS = 0 */
    return(EXIT_SUCCESS);
}