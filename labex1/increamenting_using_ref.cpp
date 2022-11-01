#include<iostream>

using namespace std;

void incr(int *a, int *b){
    *a+=1;
    *b+=1;
}

int main(){
    int x=3, y=4;
    incr(&x, &y);
    cout<<"Increased x="<<x<<" y="<<y<<endl;
    return 0;
}   