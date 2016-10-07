//
// Created by konzy on 9/29/2016.
//

#include "IntWrapper.h"

IntWrapper::IntWrapper(int intWrapper) : intWrapper(intWrapper) {}

bool IntWrapper::isLessThan(IComparable * compareTo) {
    if(IntWrapper *rhs = dynamic_cast<IntWrapper *>(compareTo)) {
        return intWrapper < rhs->getInt();
    }
    return NULL;
}

int IntWrapper::getInt() {

    return intWrapper;
}
