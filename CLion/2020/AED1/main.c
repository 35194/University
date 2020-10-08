#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pr/pr01.h"

int main(int argc, char *argv[]) {
    srand(time(NULL)); // initialize seed for rand generator
    main_pr01(argc, argv);
    return 0;
}