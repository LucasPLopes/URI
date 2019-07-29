#include<iostream>
using namespace std;

int main(){
    long long int a,b, sum = 0;

    cin >> a >> b;
    // é uma solução mas é lenta
    // for (size_t i = a; i <= b; i++)
    // {
    //     sum += i;
        
    // }

    //por que não usar um formula 
    sum = (a+b)*(b-a+1)/2;
    
    cout<<sum<<"\n";

    return 0;
}