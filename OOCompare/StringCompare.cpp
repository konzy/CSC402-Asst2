//
// Created by konzy on 9/29/2016.
//

#include "StringCompare.h"

StringCompare::StringCompare(const string &stringWrapper) : stringWrapper(stringWrapper) {}

string StringCompare::getString() {
    return stringWrapper;
}

int StringCompare::getInt() {
    return 0;
}

bool StringCompare::isLessThan(IComparable * compareTo) {
    return stringWrapper < compareTo->getString();
}