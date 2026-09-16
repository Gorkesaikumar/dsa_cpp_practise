#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0; i<n; i++){
       //spaces
       for(int j=0; j<n-i-1; j++){
        cout<<" ";
       }
       cout<<"* ";
       //nums-1
       if (i!=0){
        for(int j=0; j<2*i-1; j++){
            cout<<" ";
        }
        cout<<"* ";
       }
       cout<<endl;

    }
    
    return 0;
}