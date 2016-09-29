//
// Created by konzy on 9/29/2016.
//

#ifndef CSC_402_ASST_2_INTCOMPARE_H
#define CSC_402_ASST_2_INTCOMPARE_H

#include <vector>
#include "IComparable.h"
using namespace std;

class IntCompare : public IComparable {
private:
    int intWrapper;

public:
    IntCompare(int intWrapper);
    virtual bool isLessThan(IComparable * compareTo) override;
    virtual string getString() override;
    virtual int getInt() override;


};



#endif //CSC_402_ASST_2_INTCOMPARE_H
