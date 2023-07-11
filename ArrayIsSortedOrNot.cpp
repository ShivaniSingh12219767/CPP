// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sorted(const int arr[],int n){
    int c=0;
    for (int a=1;a<n;a++){
        if (arr[a-1]>arr[a]){
            c+=1;
            break;
        }
    }
    
    if (c==0){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}

int main1() {
    const int n=4;
    int arr[n]={7,8,20,100};
    sorted(arr,n);
    return 0;
}

// To run this code make main1 to main