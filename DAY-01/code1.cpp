#include<iostream>
using namespace std;
int main(){
    
    int i, n, sum=0;
    cout<< "Enter a number: "<<endl;
    cin>> n;
    for(i=1; i<=n; i++){
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}

// Boiler plate code 