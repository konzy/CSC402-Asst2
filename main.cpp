
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

    cout << "integer OO sorting... ";
    Sorting::sort(iVector);
    cout << "string OO sorting... ";
    Sorting::sort(sVector);

    cout << to_string(Sorting::isSorted(iVector)) << endl;
    cout << to_string(Sorting::isSorted(sVector)) << endl;

    return 0;
}