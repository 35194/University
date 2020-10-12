#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pr/pr02.h"

int main(int argc, char *argv[]) {
    srand(time(NULL)); // initialize seed for rand generator
    main_pr02(argc, argv);
    return 0;
}