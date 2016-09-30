
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
#include "Util.h"

using namespace std;

int main ()
{
    vector<IComparable *> iVector = vector<IComparable *>();
    vector<IComparable *> sVector = vector<IComparable *>();

    srand((unsigned)time(NULL));
    RandomVector::randomStringVector(&sVector);
    RandomVector::randomIntVector(&iVector);

    Sorting::sort(iVector);
    Sorting::sort(sVector);

    Sorting::isSorted(iVector);
    Sorting::isSorted(sVector);

    return 0;
}