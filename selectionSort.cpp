#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,45,23,51,19,8};
    for(int i=0; i<5; i++){
        for(int j = i; j<6; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int k = 0; k<6; k++){
        cout << arr[k] << " ";
    }
    return 0;

}