//
// Created by amaro on 07/06/2017.
//

#ifndef RPG_INFRAEXCEPTION_H
#define RPG_INFRAEXCEPTION_H

#include <stdexcept>

using namespace std;
class InfraException : public runtime_error {

public:

    InfraException() : runtime_error("File not found"){}

};


#endif //RPG_INFRAEXCEPTION_H
