#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=4, b=5;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    swap(&a, &b);
    cout<<"Swapped number a="<<a<<" b="<<b;
return 0;
}