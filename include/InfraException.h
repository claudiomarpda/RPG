//
// Created by mz on 07/06/17.
//

#ifndef RPG_INFRAEXCEPTION_H
#define RPG_INFRAEXCEPTION_H

#include <iostream>

using namespace std;

class InfraException : public runtime_error {
public:
    InfraException(const string &__arg) : runtime_error(__arg) {}

};
#endif //RPG_INFRAEXCEPTION_H
