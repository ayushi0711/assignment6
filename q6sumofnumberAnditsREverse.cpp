#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    int temp=n;

    for(int i=0; i<=temp; i++){
       reverse*=10;
   
       reverse+=temp%10;
       temp/=10;
    }
    cout<<reverse+n;
}

