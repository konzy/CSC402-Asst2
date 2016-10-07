//
// Created by konzy on 10/3/2016.
//

#include "TIntWrapper.h"


TIntWrapper::TIntWrapper(int intWrapper) : intWrapper(intWrapper) {}

int TIntWrapper::getInt() {
    return intWrapper;
}

bool TIntWrapper::operator<(const TIntWrapper &rhs) const {
    return intWrapper < rhs.intWrapper;
}

bool TIntWrapper::operator>(const TIntWrapper &rhs) const {
    return intWrapper > rhs.intWrapper;
}