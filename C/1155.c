#include<stdio.h>

double seq(){
    double s = 1;
    for (size_t i = 2; i <=100; i++)
    {
        s += 1.0/i;
    }
    return s;
}

int main(){

    printf("%.2lf\n",seq());
    return 0;
}