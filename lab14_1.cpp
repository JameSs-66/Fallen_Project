#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double numArray[],int dataN,double results[]){
    double sumOfOneDivA = 0, multiplyA = 1, sumA = 0, sumA2 = 0, min = numArray[0],max = numArray[0];
    for(int i = 0; i < dataN; i++){
        sumA += numArray[i];
    }
   
    for(int j = 0; j < dataN; j++){
        sumA2 += pow(numArray[j], 2);
    }

    for(int k = 0; k < dataN; k++){
        multiplyA *= numArray[k];
    }

    for(int g = 0; g < dataN; g++){
        sumOfOneDivA += 1.0/numArray[g];
    }
    
    results[0] = sumA / dataN;
    results[1] = sqrt(((1.0/dataN)*sumA2) - pow((sumA/dataN),2.0));
    results[2] = pow(multiplyA, 1.0/dataN);
    results[3] = dataN/sumOfOneDivA;

    for(int f = 0; f < dataN; f++){
        if(numArray[f] > max) max = numArray[f];
        if(numArray[f] < min) min = numArray[f];
    }

    results[4] = max;
    results[5] = min;
}