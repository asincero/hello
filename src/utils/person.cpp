/**
 * @file person.cpp
 * Defines the person namespace.
 *
 * @author Arcadio A. Sincero Jr., <arcadio.sincero@rockwellcollins.com>
 * @date 8/4/2019
 *
 * Copyright (c) 2019 Collins Aerospace
 */

#include "person.h"

#include <iostream>

utils::person::
Person::Person(const QString& name) :
    _name{name}
{
}

void
utils::person::
Person::say_hello() const
{
    std::cout << _name.toStdString() << std::endl;
}
