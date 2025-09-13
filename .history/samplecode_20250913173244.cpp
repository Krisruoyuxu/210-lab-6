#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 5, MIN = 1, MAX = 10;

int* getRandomArray();

int main() {
    srand(time(0));

    cout << "DYNAMICALLY ALLOCATED MEMORY\n\n";
    double *dptr = nullptr;
    dptr = new double; // "new" returns the address of the newly-created double
    *dptr = 55.5;
    cout << "*dptr is " << *dptr << endl;
    cout << "dptr is " << dptr << endl;
    delete dptr;

    cout << "\nDYNAMIC ARRAY\n\n";
    int *iptr = nullptr;
    iptr = new int[SIZE];
    
    for (int i = 0; i < SIZE; i++) // populate array using array subscript
        iptr[i] = i * i + i + 4;
    cout << "Outputting dynamic array: ";
    for (int i = 0; i < SIZE; i++) // output array using pointers
        cout << *(iptr + i) << " ";
    cout << endl;
    delete [] iptr;

    cout << "\nRETURNING POINTERS FROM FUNCTIONS\n\n";
    int *myRands = nullptr;
    myRands = getRandomArray();     // function returns a pointer to an array of randoms
    for (int i = 0; i < SIZE; i++)  // output using array nomenclature
        cout << myRands[i] << " ";
    delete [] myRands;

    return 0;
}

int* getRandomArray() {
    int *arr = nullptr;
    arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % (MAX-MIN+1) + MIN;
    return arr;
}