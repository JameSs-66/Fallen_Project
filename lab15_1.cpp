#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int i, j;
	T k;
    for (i = 1; i < N; i++)
    {
        k = d[i];
		for(j = i - 1; j >= 0 && d[j] < k;j--) d[j + 1] = d[j];
        d[j + 1] = k;
		cout << "Pass " << i << ":";
		for(int x = 0; x < N; x++) cout << d[x] << " ";
		cout << endl;

    }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}


