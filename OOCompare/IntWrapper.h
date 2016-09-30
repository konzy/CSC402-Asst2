//
// Created by konzy on 9/29/2016.
//

#ifndef CSC_402_ASST_2_INTCOMPARE_H
#define CSC_402_ASST_2_INTCOMPARE_H

#include <vector>
#include "IComparable.h"
using namespace std;

class IntWrapper : public IComparable {
private:
    int intWrapper;

public:
    IntWrapper(int intWrapper);
    virtual bool isLessThan(IComparable * compareTo);
    virtual int getInt();
};



#endif //CSC_402_ASST_2_INTCOMPARE_H
