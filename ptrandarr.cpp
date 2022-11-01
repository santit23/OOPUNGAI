#include<iostream>

using namespace std;

int main(){
    int arr[3];
    int *ptr=arr;
    arr[0] = 9;
    cout<<arr[0]<<endl;
    *(ptr+1)=5;
    cout<<arr[1]<<endl;
    *(ptr+2)=6;
    cout<<arr[2]<<endl;
    return 0;
}