#include<iostream>
// #define pi 3.14
using namespace std;
int main(){
    int a = 10000;
    float b = 10.54;
    a++;
    b += a;
    b++;
    cout<<float(a)<<endl;
    cout<<float(b)<<endl;
    return 0;
}