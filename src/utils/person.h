#ifndef PERSON_H
#define PERSON_H

/**
 * @file person.h
 * Declares the person namespace.
 *
 * @author Arcadio A. Sincero Jr., <arcadio.sincero@rockwellcollins.com>
 * @date 8/4/2019
 *
 * Copyright (c) 2019 Collins Aerospace
 */

#include <QString>

/** Provides the Person class and related types. */
namespace utils::person {
    /** An abstraction of a person. */
    class Person {
    public:
        /**
         * Constructor.
         *
         * @param name the name of the Person
         */
        Person(const QString& name);

        //@{
        /** Deleted; copying prohibited. */
        Person(const Person&) = delete;
        Person& operator=(const Person&) = delete;
        //@}

        /** Says hello. */
        void say_hello() const;

    private:
        /** The name of this Person. */
        QString _name;
    };
}

#endif // PERSON_H
