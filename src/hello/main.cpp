/**
 * @file main.cpp
 * Implements the main() function.
 *
 * @author Arcadio A. Sincero Jr., <arcadio.sincero@rockwellcollins.com>
 * @date 8/4/2019
 *
 * Copyright (c) 2019 Collins Aerospace
 */

#include "utils/person.h"

int
main(int argc, char *argv[])
{
    utils::person::Person p("Arcadio Sincero");
    p.say_hello();
    return 0;
}
