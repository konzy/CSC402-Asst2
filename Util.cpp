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

void RandomVector::randomStringVector(vector<IComparable *>* sVector) {
    for (int i = 0; i < TOTAL_ELEMENTS; ++i) {
        string randomString = ALPHABET[rand() % ALPHABET.size()];
        for (int j = STRING_RANGE_MIN; j <= rand() % STRING_RANGE_MAX; ++j) {
            randomString.append(ALPHABET[rand() % ALPHABET.size()]);
        }
        StringWrapper sCompare(randomString);

        sVector->push_back(&sCompare);
    }
}

void RandomVector::randomIntVector(vector<IComparable *> * iVector) {
    for (int i = INT_RANGE_MIN; i < TOTAL_ELEMENTS; ++i) {
        IntWrapper * intCompare = new IntWrapper(rand() % INT_RANGE_MAX);
        iVector->push_back(intCompare);
    }
}

bool Sorting::isSorted(vector<IComparable *> sCompare) {
    for (unsigned i = 0; i < sCompare.size() - 1; ++i) {
        if (sCompare.at(i)->isLessThan(sCompare.at(i + 1))) {
            return false;
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
                IntWrapper* a = dynamic_cast<IntWrapper*>(list[i]);
                IntWrapper* b = dynamic_cast<IntWrapper*>(list[i + 1]);
                if (!a->isLessThan(b)) { //swap
                    list[i] = b;
                    list[i + 1] = a;
                    didSwap = true;
                }
            }
            iterations++;
        }
    }
    clockTicks = clock() - clockTicks;
    printf ("It took me %d clicks (%f seconds) to sort\n",clockTicks,((float)clockTicks)/CLOCKS_PER_SEC);
}

