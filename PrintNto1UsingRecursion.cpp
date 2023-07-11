#include <iostream>
using namespace std;

void fun(int n){
    if (n==0)
    return;
    cout<<n<<endl;
    fun(n-1);
}
int main4(){
    int n=10;
    fun(n);
    return 0;
}

// To run this code make main4 to main