#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;

    cout<<"Enter a number: " <<endl;
    cin >>n;

    for(int i=2; i<=n-1; i++){
        if(n%2 == 0){
            isPrime = false;
            break;
        }
    }

if(isPrime == true){
    cout << "Prime number\n";
}else{
    cout <<"non prime\n";
}
    return 0;
}