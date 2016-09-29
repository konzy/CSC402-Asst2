//
// Created by konzy on 9/28/2016.
//

#include <iostream>
#include "Util.h"

const int INT_RANGE_MIN = 0;
const int INT_RANGE_MAX = 1000;
const int STRING_RANGE_MIN = 1;
const int STRING_RANGE_MAX = 4;

const int TOTAL_ELEMENTS = 10000;

void RandomVector::printSVector (vector<StringCompare> sVector) {
    for (unsigned i = 0; i < sVector.size(); ++i) {
        cout << sVector.at(i).getString() << endl;
    }
}

void RandomVector::printIVector (vector<IntCompare> iVector) {
    for (unsigned i = 0; i < iVector.size(); ++i) {
        cout << to_string(iVector.at(i).getInt()) << endl;
    }
}

void RandomVector::randomStringVector(vector<StringCompare>* sVector) {
    for (int i = 0; i < TOTAL_ELEMENTS; ++i) {
        string randomString = ALPHABET[rand() % ALPHABET.size()];
        for (int j = STRING_RANGE_MIN; j <= rand() % STRING_RANGE_MAX; ++j) {
            randomString.append(ALPHABET[rand() % ALPHABET.size()]);
        }
        StringCompare sCompare(randomString);

        sVector->push_back(sCompare);
    }
}

void RandomVector::randomIntVector(vector<IntCompare>* iVector) {
    for (int i = INT_RANGE_MIN; i < TOTAL_ELEMENTS; ++i) {
        IntCompare intCompare(rand() % INT_RANGE_MAX);
        iVector->push_back(intCompare);
    }
}

void Sorting::sortString(vector<StringCompare> *sCompare) {
    if (sCompare->size() > 1) {
        bool didSwap = true;
        unsigned iterations = 0;
        while (didSwap) { //keep bubble sorting if we swapped.
            didSwap = false;
            for (unsigned i = 0; i < sCompare->size() - 1 - iterations; ++i) { //go through list
                StringCompare a = sCompare->at(i);
                StringCompare b = sCompare->at(i + 1);
                if (!a.isLessThan(&b)) { //swap
                    sCompare->at(i) = b;
                    sCompare->at(i + 1) = a;
                    didSwap = true;
                }
            }
            iterations++;
        }
    }
}

bool Sorting::isStringSorted(vector<StringCompare> sCompare) {
    for (unsigned i = 0; i < sCompare.size() - 1; ++i) {
        if (sCompare.at(i).isLessThan(&sCompare.at(i + 1))) {
            return false;
        }
    }
    return true;
}

void Sorting::sortInt(vector<IntCompare> *iCompare) {
    if (iCompare->size() > 1) {
        bool didSwap = true;
        unsigned iterations = 0;
        while (didSwap) { //keep bubble sorting if we swapped.
            didSwap = false;
            for (unsigned i = 0; i < iCompare->size() - 1 - iterations; ++i) { //go through list
                IntCompare a = iCompare->at(i);
                IntCompare b = iCompare->at(i + 1);
                if (!a.isLessThan(&b)) { //swap
                    iCompare->at(i) = b;
                    iCompare->at(i + 1) = a;
                    didSwap = true;
                }
            }
            iterations++;
        }
    }
}

bool Sorting::isIntSorted(vector<IntCompare> iCompare) {
    for (unsigned i = 0; i < iCompare.size() - 1; ++i) {
        if (iCompare.at(i).isLessThan(&iCompare.at(i + 1))) {
            return false;
        }
    }
    return true;
}


