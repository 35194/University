#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pr/pr07.h"

int main(int argc, char *argv[]) {
    srand(time(NULL)); // initialize seed for rand generator
    main_pr07(argc, argv);
    return 0;
}