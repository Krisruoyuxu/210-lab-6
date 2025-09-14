#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5; // the size of array is 5

void enterArrayData(double* arr);
void outputArrayData(double* arr);
double sumArray(double* arr);

int main() {
    
    double* array = new double[SIZE];
    // populate the array
    enterArrayData(array);
    // Output the array
    outputArrayData(array);
    // Calculate it's sum and then output it
    double thesum = sumArray(array);
    cout << "Sum of values: " << thesum <<endl;

    delete[] array;

    return 0;
}

void enterArrayData(double* arr){
    cout << "Data entry for the array: "<<endl;

    for (int i = 0; i < SIZE; i++){
        cout << "  > Element #" << i << ": "; 
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;

}

void outputArrayData(double* arr){
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++){
        cout << *(arr + i) <<" ";
    }
    cout << endl;
}

double sumArray(double* arr){
    double sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += *(arr + i);
    }

    return sum;
}