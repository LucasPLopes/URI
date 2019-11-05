#include <iostream>
#include <cmath>

using namespace std;

int main(){

        double s = 1.0;
        double i = 3.0, j = 2.0 , p = 2.0;

        while(1){
                s += i/j;
                i += 2.0;
                j = pow(2.0, p);
                p++;

                if(i == 41.0) break;
        }
        printf("%.2lf\n", s);
        return 0;
}
