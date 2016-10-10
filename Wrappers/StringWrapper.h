//
// Created by konzy on 9/29/2016.
//

#ifndef CSC_402_ASST_2_STRINGCOMPARE_H
#define CSC_402_ASST_2_STRINGCOMPARE_H

#include <string>
#include <vector>
#include "IComparable.h"

using namespace std;

class StringWrapper: public IComparable {
    string stringWrapper;
public:
    StringWrapper(const string &stringWrapper);
    bool operator<(const StringWrapper &rhs) const;
    bool operator>(const StringWrapper &rhs) const;
    virtual bool isLessThan(IComparable * compareTo);
    virtual string getString();
};


#endif //CSC_402_ASST_2_STRINGCOMPARE_H
