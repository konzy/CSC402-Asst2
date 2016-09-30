//
// Created by konzy on 9/29/2016.
//

#include "StringWrapper.h"

StringWrapper::StringWrapper(const string &stringWrapper) : stringWrapper(stringWrapper) {}

bool StringWrapper::isLessThan(IComparable * compareTo) {
    StringWrapper *rhs = dynamic_cast<StringWrapper *>(compareTo);
    return stringWrapper < rhs->getString();
}

string StringWrapper::getString() {
    return stringWrapper;
}
