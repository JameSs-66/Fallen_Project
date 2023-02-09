#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool image[][M],int size,int posX,int posY){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
             if(sqrt(pow(i-posX,2)+pow(j-posY,2)) <= size-1){
                image[i][j] = 1;
             }
        }
    }
 }

 void showImage(const bool imageValue[][M]){
    for(int a = 0; a < M+2; a++){
        cout << "-";
    }
        cout << endl;
    int f, g;
    for (g = 0; g < N; g++){
        cout << "|";
        for (f = 0; f < M; f++){
            if (imageValue[g][f] == 1){
                cout << "*";
            }else{cout << " ";}
        }
        cout << "|" << endl;
    }
    for(int b = 0; b < M+2; b++){
        cout << "-" ; 
    }
    cout << endl;
 }




 