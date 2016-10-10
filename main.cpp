
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
#include "Util.h"

using namespace std;

template <class T>
void sort(vector<T *> *list) {
    clock_t clockTicks;
    clockTicks = clock();
    if (list->size() > 1) {
        bool didSwap = true;
        unsigned iterations = 0;
        while (didSwap) { //keep bubble sorting if we swapped.
            didSwap = false;
            for (unsigned i = 0; i < list->size() - 1 - iterations; ++i) { //go through list
                T *a = list->at(i); //->at() solved an error I was getting
                T *b = list->at(i + 1);
                if (*b < *a) { //swap
                    list->at(i) = b;
                    list->at(i + 1) = a;
                    didSwap = true;
                }
            }
            iterations++;
        }
    }
    clockTicks = clock() - clockTicks;
    printf ("It took me %d clicks (%f seconds) to sort\n",clockTicks,((float)clockTicks)/CLOCKS_PER_SEC);
}

template <class T>
bool isSorted(vector<T *> list) {
    if (list.size() > 1) {
        for (unsigned i = 0; i < list.size() - 1; ++i) {
            T *a = list.at(i);
            T *b = list.at(i + 1);
            if (*b < *a) {
                return false;
            }
        }
    }
    return true;
}

int main () {
    vector<IComparable *> iVector = vector<IComparable *>();
    vector<IComparable *> sVector = vector<IComparable *>();

    srand((unsigned)time(NULL));
    RandomVector::randomStringWrapperVector(&sVector);
    RandomVector::randomIntWrapperVector(&iVector);

    cout << "integer OO sorting... ";
    Sorting::sort(iVector);
    cout << "string OO sorting... ";
    Sorting::sort(sVector);

    cout << to_string(Sorting::isSorted(iVector)) << endl;
    cout << to_string(Sorting::isSorted(sVector)) << endl;

    RandomVector::randomStringWrapperVector(&sVector);
    RandomVector::randomIntWrapperVector(&iVector);

    vector<StringWrapper *> stringGenericVector;
    vector<IntWrapper *> intGenericVector;

    RandomVector::randomIntVector(&intGenericVector);
    RandomVector::randomStringVector(&stringGenericVector);

    sort(&intGenericVector);
    bool isIntVectorSorted = isSorted(intGenericVector);
    cout << to_string(isIntVectorSorted) << endl;

    sort(&stringGenericVector);
    bool isStringVectorSorted = isSorted(stringGenericVector);
    cout << to_string(isStringVectorSorted) << endl;

    return 0;
}