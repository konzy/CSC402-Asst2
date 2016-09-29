
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
#include "Util.h"

using namespace std;

int main ()
{
    vector<IntCompare> iVector = vector<IntCompare>();
    vector<StringCompare> sVector = vector<StringCompare>();

    srand((unsigned)time(NULL));
    RandomVector::randomStringVector(&sVector);
    RandomVector::randomIntVector(&iVector);

    //RandomVector::printSVector(sVector);
    //RandomVector::printIVector(iVector);

    cout << "end of initial random vectors" << endl;

    clock_t stringSortClockTicks;
    stringSortClockTicks = clock();
    Sorting::sortString(&sVector);
    stringSortClockTicks = clock() - stringSortClockTicks;
    printf ("It took me %d clicks (%f seconds) to sort the OO int vector..\n",stringSortClockTicks,((float)stringSortClockTicks)/CLOCKS_PER_SEC);

    clock_t intSortClockTicks;
    intSortClockTicks = clock();
    Sorting::sortInt(&iVector);
    intSortClockTicks = clock() - intSortClockTicks;
    printf ("It took me %d clicks (%f seconds) to sort the OO int vector.\n",intSortClockTicks,((float)intSortClockTicks)/CLOCKS_PER_SEC);

    //RandomVector::printSVector(sVector);
    //RandomVector::printIVector(iVector);

    cout << "end of sorting vectors" << endl;

    Sorting::isIntSorted(iVector);
    Sorting::isStringSorted(sVector);

    return 0;
}