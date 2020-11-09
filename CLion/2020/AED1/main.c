#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pr/pr06.h"

int main(int argc, char *argv[]) {
    srand(time(NULL)); // initialize seed for rand generator
    main_pr06(argc, argv);
    return 0;
}