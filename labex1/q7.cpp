#include<iostream>
#include<cmath>
using namespace std;
#define MAX 10
int main(){
    double a[10], b[10], mean, sd, sums=0;
    double summ=0;
    cout<<"Enter 10 numbers: ";
    for (int i = 0; i <= 10; i++)
    {
        cin>>a[i];
        summ += a[i];
    }
    mean = summ/10;
    cout<<"Mean is "<<mean;
    for (int i = 0; i <= 10; i++)
    {
        b[i] = a[i] - mean;
    }
    for (int i = 0; i <= 10; i++)
    {
        sums += b[i];
    }
    sd = sqrt((pow(sums, 2))/10-1);
    cout<<"Standard deviation is: "<<sd;
    
    
    
    return 0;
}