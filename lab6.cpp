#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5; // the size of array is 5

void enterArrayData(double* arr, int n);
void outputArrayData(double* arr, int n);
double sumArray(double* arr, int n);

int main() {
    
    //
    
    return 0;
}

void enterArrayData(double* arr, int n){
    cout << "Data entry for the array: "<<endl;

    for (int i = 0; i < SIZE; i++){
        cout << "  > Element #" << i << ": "; 
        cin >> *(arr+i);
    }
    cout << "Data entry complete." << endl;

}

void outputArrayData(double* arr, int n){
    //
}

double sumArray(double* arr, int n){
    //
}