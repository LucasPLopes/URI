#include <stdio.h>
#define KM_PERCORRIDO(X, Y) (X * Y)

int main()
{

    int  N,T,V,SOMA =0 ;
    scanf("%d",&N);
    for (size_t i = 0; i < N; i++)
    {
        scanf("%d %d",&T,&V);
        SOMA += KM_PERCORRIDO(T,V);

    }
    printf("%d\n",SOMA);
    return 0;
}