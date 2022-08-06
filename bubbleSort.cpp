#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};
    for(int i=0; i<6; i++){
        for(int j = 0; j<5-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int k = 0; k<6; k++){
        cout << arr[k] << " ";
    }
    return 0;

}