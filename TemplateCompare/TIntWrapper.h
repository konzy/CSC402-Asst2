//
// Created by konzy on 10/3/2016.
//

#ifndef CSC_402_ASST_2_TINTWRAPPER_H
#define CSC_402_ASST_2_TINTWRAPPER_H

class TIntWrapper {
public:
    bool operator<(const TIntWrapper &rhs) const;
    bool operator>(const TIntWrapper &rhs) const;

    virtual int getInt();
    TIntWrapper(int intWrapper);

private:
    int intWrapper;
};


#endif //CSC_402_ASST_2_TINTWRAPPER_H
