#include<iostream>

using namespace std;

void add_num(int &a, int &b);

int main(){
    int *a=3, *b=4, sum;
    add_num(*a, *b);
    cout<<sum;
    
return 0;
}

void add_num(int &a, int &b){
    int sum;
    sum = a+b;
}