#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char randchar() {
    
    char randomletter = 'A' + (rand() % 26);
    return randomletter;
}