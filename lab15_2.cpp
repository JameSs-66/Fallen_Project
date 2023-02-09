#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void findLocalMax(const double inputA[][N], bool outputB[][N]){
		
	for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) outputB[x][y] = 0;
	}
	for (int i = 1; i < N-1; i++) {
        for (int j = 1; j < N-1; j++) {
                if(inputA[i][j] >= inputA[i-1][j] && inputA[i][j] >= inputA[i+1][j] && inputA[i][j] >= inputA[i][j-1] && inputA[i][j] >= inputA[i][j+1]) outputB[i][j] = 1;
        }
    }
}

void inputMatrix(double doubleA[][N]){
	int i, j;
	double inputA[N];
	for (i = 0; i < N; i++){
		cout << "Row " << i+1 << ": ";
		for(int k = 0; k < N; k++) cin >> inputA[k];
		for(j = 0; j < N; j++) doubleA[i][j] = inputA[j];
	}
}

void showMatrix(const bool array[][N]){
	int i,j;
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}
