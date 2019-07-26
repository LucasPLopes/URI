#include<iostream>
using namespace std;

int main(){
    int q1,q2;

     while (true)
    {
        cin>>q1>>q2;

        if(q1 == 0 || q2 == 0)
            break;
        if(q1>0 && q2 >0 )
            cout<<"primeiro\n";
        if(q1<0 && q2 >0 )
            cout<<"segundo\n";
        if(q1>0 && q2 <0 )
            cout<<"quarto\n";
        if(q1<0 && q2 <0 )
            cout<<"terceiro\n";

    }
    

    return 0;
}