#include<iostream>
using namespace std;

//For Numbers In Decreasing And Inverted Right Angle Format
void invertedNums(){
    int n=6;
    for(int i = 1; i<n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

//For Right Angled Format Of 0s and 1s
void zerosones(){
    int n=6;
    int previnput = 0;
    for(int i = 1; i<n; i++){
        for(int j = 1; j <= i; j++){
            if(previnput == 0){
                cout << 1;
                previnput =1;
            }
            else{
                cout << 0;
                previnput = 0;
            }
        }
        cout << endl;
    }
    cout << endl;
}

//For Making Rhombus Of *
void rhombus(){
    int n = 5;
    for(int i=0; i<n; i++){
        for(int j = 0; j<n-i-1; j++ ){
            cout << " ";
        }
        for(int k = 0; k<n; k++){
            cout << "*";
        }
    
    cout << endl;
    }
    cout << endl;
}

//For Making Equilateral triangle of numbers in increasing order
void equiTriangle(){
    int n = 6;
    for(int i=1; i<n; i++){
        for(int j = 1; j<n-i; j++ ){
            cout << " ";
        }
        for(int k = i; k>=1; k--){
            cout << k;
        }
        for(int l = 2; l<i+1; l++){
            cout << l;
        }
    cout << endl;
    }
    cout << endl;
}

/*For Printing equilateral triangle of "*"s 
in increasing and decreasing order together*/ 
void invertedSquare(){
    int n = 6;
    for(int i=1; i<n; i++){
        for(int j = 1; j<n-i; j++ ){
            cout << " ";
        }
        for(int k = i; k>=1; k--){
            cout << "*";
        }
        for(int l = 2; l<i+1; l++){
            cout << "*";
        }
    cout << endl;
    }
    for(int i=n-1; i>=1; i--){
        for(int j = 1; j<n-i; j++ ){
            cout << " ";
        }
        for(int k = i; k>=1; k--){
            cout << "*";
        }
        for(int l = 2; l<i+1; l++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;   
}

int main(){
    cout << endl;
    invertedNums();
    zerosones();
    rhombus();
    equiTriangle();
    invertedSquare();
    return 0;
}

