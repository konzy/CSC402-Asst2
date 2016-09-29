//
// Created by konzy on 9/28/2016.
//

#ifndef CSC_402_ASST_2_OBJCOMPARISON_H
#define CSC_402_ASST_2_OBJCOMPARISON_H

#include <string>
#include <vector>
#include "OOCompare/StringCompare.h"
#include "OOCompare/IntCompare.h"

using namespace std;

const vector<string> ALPHABET = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q",
                                 "r", "s", "t", "u", "v", "w", "x", "y", "z"};

class RandomVector {
public:
    static void randomStringVector(vector<StringCompare>* sVector);
    static void randomIntVector(vector<IntCompare>* iVector);
    static void printSVector(vector<StringCompare> sVector);
    static void printIVector(vector<IntCompare> iVector);
};

class Sorting {
public:
    static void sortString(vector<StringCompare>* sCompare);
    static bool isStringSorted(vector<StringCompare> sCompare);
    static void sortInt(vector<IntCompare>* iCompare);
    static bool isIntSorted(vector<IntCompare> iCompare);
};


#endif //CSC_402_ASST_2_OBJCOMPARISON_H
