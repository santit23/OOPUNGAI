#include<iostream>

using namespace std;

void incr(int a, int b){    
    a+=1;
    b+=1;
    cout<<"a="<<a<<" b="<<b;

}

int main(){
    int a=2, b=3;
    incr(a, b);
    return 0;
}