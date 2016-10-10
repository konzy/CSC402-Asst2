//
// Created by konzy on 9/28/2016.
//

#ifndef CSC_402_ASST_2_OBJCOMPARISON_H
#define CSC_402_ASST_2_OBJCOMPARISON_H

#include <string>
#include <vector>
#include "OOCompare/StringWrapper.h"
#include "OOCompare/IntWrapper.h"
#include "TemplateCompare/TIntWrapper.h"
#include "TemplateCompare/TStringWrapper.h"

using namespace std;

const vector<string> ALPHABET = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q",
                                 "r", "s", "t", "u", "v", "w", "x", "y", "z"};

class RandomVector {
public:
    static void randomStringWrapperVector(vector<IComparable *> *sVector);
    static void randomIntWrapperVector(vector<IComparable *> *iVector);
    static void randomIntVector(vector<IntWrapper *> *iVector);
    static void randomStringVector(vector<StringWrapper *> *sVector);
};

class Sorting {
public:
    static void sort(vector<IComparable *> &list);
    static bool isSorted(vector<IComparable *> list);
};


#endif //CSC_402_ASST_2_OBJCOMPARISON_H
