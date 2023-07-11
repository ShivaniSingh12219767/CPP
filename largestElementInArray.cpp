// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int largest(int arr[],int n){
    int r=0;
    for (int a=1;a<=n;a++){
        if (arr[a]>arr[r]){
            arr[r]=arr[a];
            r=a;
        }
    }
    cout<<"Index is:"<<r<<endl;
    cout<<"Lagest element is:"<<arr[r];
    return 0;
}

int main2() {
    const int n=4;
    int arr[n]={5,8,20,100};
    largest(arr,n);
    return 0;
}

// To run this code make main2 to main