//
// Created by konzy on 10/3/2016.
//

#ifndef CSC_402_ASST_2_TSTRINGWRAPPER_H
#define CSC_402_ASST_2_TSTRINGWRAPPER_H

#include <string>

using namespace std;

class TStringWrapper {
public:
    virtual string getString();
    TStringWrapper(string strWrapper);

    bool operator<(const TStringWrapper &rhs) const;
    bool operator>(const TStringWrapper &rhs) const;
private:
    string strWrapper;
};


#endif //CSC_402_ASST_2_TSTRINGWRAPPER_H
