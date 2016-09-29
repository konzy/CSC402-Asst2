//
// Created by konzy on 9/29/2016.
//

#include "IntCompare.h"


IntCompare::IntCompare(int intWrapper) : intWrapper(intWrapper) {}

bool IntCompare::isLessThan(IComparable * compareTo) {
    return intWrapper < compareTo->getInt();
}

string IntCompare::getString() {
    return nullptr;
}

int IntCompare::getInt() {
    return intWrapper;
}
