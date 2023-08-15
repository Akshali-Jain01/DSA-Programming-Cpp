#include<iostream>
using namespace std;
int main(){
    int a = 11;
    int *num1 = &a;
    int *num2= num1;
    cout<<"NUM1 "<<*num1<<endl;
    cout<<"NUM2 "<<*num2<<endl;
    return 0;
}