#include<iostream>

using namespace std;

int main(){
    string str("Hello oop");
    cout<<str;
    {
        string str("Hello oop");
        cout<<str;
    }    
    return 0;
}