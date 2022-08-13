#include<iostream>
#include<cmath>
using namespace std;

int prime(int a){
    for(int i = 2; i < sqrt(a); i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int x=5;
    int y=15;
    for(int i = x; i <= y; i++){
        cout << i << " is a prime number :- " << prime(i) << endl;
    }
    return 0;
}