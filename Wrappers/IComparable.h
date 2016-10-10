//
// Created by konzy on 9/29/2016.
//

#ifndef CSC_402_ASST_2_ICOMPARABLE_H
#define CSC_402_ASST_2_ICOMPARABLE_H

#include <vector>
#include <string>

using namespace std;

class IComparable {
public:
    virtual bool isLessThan(IComparable *compareTo) = 0;
};


#endif //CSC_402_ASST_2_ICOMPARABLE_H
