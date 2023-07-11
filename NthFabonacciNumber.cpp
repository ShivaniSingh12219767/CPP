#include<iostream>
using namespace std;
int fabonacci(int n){
    if (n==0 || n==1)
    return n;
    return fabonacci(n - 1) + fabonacci(n - 2);
}
int main3(){
    int n=6;
    cout<<fabonacci(n);
}

// To run this code make main3 to main
//Nth Fabonacci term