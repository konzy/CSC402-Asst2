//
// Created by konzy on 10/3/2016.
//

#include "TStringWrapper.h"

TStringWrapper::TStringWrapper(string strWrapper) : strWrapper(strWrapper) {}

string TStringWrapper::getString() {

    return strWrapper;
}

bool TStringWrapper::operator<(const TStringWrapper &rhs) const {
    return strWrapper < rhs.strWrapper;
}

bool TStringWrapper::operator>(const TStringWrapper &rhs) const {
    return strWrapper > rhs.strWrapper;
}
