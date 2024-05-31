//            SAI

// Q.1 Swap two numbers from the given variables 

#include<iostream>
using namespace std;

// SOLUTION Q.1
void swapTwoNums () {
    int a = 13, b = 56;
    cout<<"before swaping a is "<<a<<endl;
    cout<<"before swapping b is "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"after swapping a becomes "<<a<<endl;
    cout<<"after swapping b becomes "<<b<<endl;
}
int main() {
    swapTwoNums();
    return 0;
}