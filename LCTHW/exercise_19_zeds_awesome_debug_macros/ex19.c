#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

void test_debug()
{
    // notice you don't need the \n
    debug("I have brown hair.");

    // passing in arguments like printf
    debug("I am %d years old.", 37);
}
