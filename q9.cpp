#include<iostream>
using namespace std;
int main(){
  
    for(int i=1; i<=500; i++){
          int armstrong=0;
        int temp=i;
        while(temp>0){
            int m=temp%10;
            armstrong+=(m*m*m);
            temp/=10;
        }
        if(i==armstrong){
            cout<<i<<endl;
        }
    }
}

