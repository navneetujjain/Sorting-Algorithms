#include<iostream>
using namespace std;

int fibo(int n){
    if(n < 2) return n;
    else return(fibo(n-1) + fibo(n-2));
}

int facto(int n){
    if(n == 0) return 1;
    else return n * facto(n - 1);
}

void consecutive(int n){
    if(n == 0){
        cout << n << "\n";
    }
    else{
        consecutive(n - 1);
        cout << n << "\n";
    }
}

int bin(int arr[], int target, int start, int end){
    int middle = start + (end - start) / 2;
    if(arr[middle] == target) return middle;
    else if(arr[middle] > target) return bin(arr, target, start, middle - 1);
    else if(start > end) return -1;
    else return bin(arr, target, middle + 1, end);
}

int sumdig(int n){
    if(n == 0) return n%10;
    else{
        return n%10 + sumdig(n/10);
    }
}

int proddig(int n){
    if(n/10 == 0) return n%10;
    else{
        return n%10 * proddig(n/10);
    }
}








int main(){
    int n = 5;
    int arr[] = {1,2,5,9,10,17,19,34,44,56,64,68,70,75,77,79,84,87,89,90,93,95,98,100};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    int target = 19;
    cout << "Fibbonacci Result is " << fibo(n) <<"\n";
    cout << "Factorial Result is " << facto(n) << "\n";
    consecutive(n);
    cout << "Binary Search Result is " << bin(arr,target,start,end) << "\n";
    int digit = 598651;
    cout << "Sum of Digits is " << sumdig(digit) << "\n";
    cout << "Product of Digits is " << proddig(digit) << "\n";
    return 0;
}