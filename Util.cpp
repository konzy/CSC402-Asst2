//
// Created by konzy on 9/28/2016.
//


#include <iostream>
#include "Util.h"
#include "TemplateCompare/TIntWrapper.h"
#include "TemplateCompare/TStringWrapper.h"

const int INT_RANGE_MIN = 0;
const int INT_RANGE_MAX = 1000;
const int STRING_RANGE_MIN = 1;
const int STRING_RANGE_MAX = 4;

const int TOTAL_ELEMENTS = 1000;

//void RandomVector::printSVector (vector<IComparable *> sVector) {
//    for (unsigned i = 0; i < sVector.size(); ++i) {
//        cout << sVector.at(i).getString() << endl;
//    }
//}

//void RandomVector::printIVector (vector<IComparable *> iVector) {
//    for (unsigned i = 0; i < iVector.size(); ++i) {
//        IntWrapper * iWrapper = dynamic_cast<IComparable *>(iVector[i]);
//
//        cout << to_string(iVector.at(i)->getInt()) << endl;
//    }
//}

void RandomVector::randomStringWrapperVector(vector<IComparable *> *sVector) {
    for (int i = 0; i < TOTAL_ELEMENTS; ++i) {
        string randomString = ALPHABET[rand() % ALPHABET.size()];
        for (int j = STRING_RANGE_MIN; j <= rand() % STRING_RANGE_MAX; ++j) {
            randomString.append(ALPHABET[rand() % ALPHABET.size()]);
        }
        StringWrapper * strCompare = new StringWrapper(randomString);
        sVector->push_back(strCompare);
    }
}

void RandomVector::randomIntWrapperVector(vector<IComparable *> *iVector) {
    for (int i = INT_RANGE_MIN; i < TOTAL_ELEMENTS; ++i) {
        IntWrapper * intCompare = new IntWrapper(rand() % INT_RANGE_MAX);
        iVector->push_back(intCompare);
    }
}

void RandomVector::randomIntVector(vector<IntWrapper *> *iVector) {
    for (int i = INT_RANGE_MIN; i < TOTAL_ELEMENTS; ++i) {
        IntWrapper *wrappedInt = new IntWrapper(rand() % INT_RANGE_MAX);
        iVector->push_back(wrappedInt);
    }
}

void RandomVector::randomStringVector(vector<StringWrapper *> *sVector) {
    for (int i = 0; i < TOTAL_ELEMENTS; ++i) {
        string randomString = ALPHABET[rand() % ALPHABET.size()];
        for (int j = STRING_RANGE_MIN; j <= rand() % STRING_RANGE_MAX; ++j) {
            randomString.append(ALPHABET[rand() % ALPHABET.size()]);
        }
        StringWrapper *str = new StringWrapper(randomString);
        sVector->push_back(str);
    }
}

bool Sorting::isSorted(vector<IComparable *> list) {
    if (list.size() > 1) {
        for (unsigned i = 0; i < list.size() - 1; ++i) {
            if (dynamic_cast<IntWrapper *>(list[i])) {
                IntWrapper *a = dynamic_cast<IntWrapper *>(list[i]);
                IntWrapper *b = dynamic_cast<IntWrapper *>(list[i + 1]);
                if (!a->isLessThan(b) && (a->getInt() != b->getInt())) { //swap
                    return false;
                }
            } else if (dynamic_cast<StringWrapper *>(list[i])) {
                StringWrapper *a = dynamic_cast<StringWrapper *>(list[i]);
                StringWrapper *b = dynamic_cast<StringWrapper *>(list[i + 1]);
                if (!a->isLessThan(b) && (a->getString() != b->getString())) { //swap
                    return false;
                }
            }
        }
    }
    return true;
}

void Sorting::sort(vector<IComparable *> &list) {
    clock_t clockTicks;
    clockTicks = clock();
    if (list.size() > 1) {
        bool didSwap = true;
        unsigned iterations = 0;
        while (didSwap) { //keep bubble sorting if we swapped.
            didSwap = false;
            for (unsigned i = 0; i < list.size() - 1 - iterations; ++i) { //go through list
                if (dynamic_cast<IntWrapper*>(list[i])) {
                    IntWrapper *a = dynamic_cast<IntWrapper *>(list[i]);
                    IntWrapper *b = dynamic_cast<IntWrapper *>(list[i + 1]);
                    if (!a->isLessThan(b)) { //swap
                        list[i] = b;
                        list[i + 1] = a;
                        didSwap = true;
                    }
                } else if (dynamic_cast<StringWrapper*>(list[i])) {
                    StringWrapper *a = dynamic_cast<StringWrapper *>(list[i]);
                    StringWrapper *b = dynamic_cast<StringWrapper *>(list[i + 1]);
                    if (!a->isLessThan(b)) { //swap
                        list[i] = b;
                        list[i + 1] = a;
                        didSwap = true;
                    }
                }
            }
            iterations++;
        }
    }
    clockTicks = clock() - clockTicks;
    printf ("It took me %d clicks (%f seconds) to sort\n",clockTicks,((float)clockTicks)/CLOCKS_PER_SEC);
}

