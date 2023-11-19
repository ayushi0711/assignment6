#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";

    cin>>n;
    int fo=1,f1=1;
    int fibonacii=0;
    for(int i=1; i<n-2; i++){
        fibonacii=fo+f1;
        fo=f1;
        f1=fibonacii;
    }
    cout<<f1;
    

}