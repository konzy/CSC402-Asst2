//
// Created by konzy on 9/29/2016.
//

#ifndef CSC_402_ASST_2_STRINGCOMPARE_H
#define CSC_402_ASST_2_STRINGCOMPARE_H

#include <string>
#include <vector>
#include "IComparable.h"

using namespace std;

class StringCompare: public IComparable {
    string stringWrapper;
public:
    StringCompare(const string &stringWrapper);

    virtual bool isLessThan(IComparable * compareTo) override;

    virtual string getString() override;

    virtual int getInt() override;
};


#endif //CSC_402_ASST_2_STRINGCOMPARE_H
