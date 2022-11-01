#include<iostream>

using namespace std;

int add_num(int a,int b);

int main(){
    int x, y, sum;
    cout<<"Enter number 1: ";
    cin>>x;
    cout<<"Enter number 2: ";
    cin>>y;
    sum = add_num(x, y);
    cout<<sum;
return 0;
}

int add_num(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}