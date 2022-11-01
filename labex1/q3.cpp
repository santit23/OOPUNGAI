#include<iostream>

using namespace std;

int main(){
    int a=10;
    int *ptr= &a;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"&a= "<<&a<<endl;
    cout<<"ptr= "<<*ptr<<endl;
    *ptr=20;
    cout<<"a="<<a<<endl;   
    return 0;
}