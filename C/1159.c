
/// Com erro
#include <stdio.h>

int somatorio(int N)
{
    int somatorio = 0,i =0 ;
    if(N % 2 == 0)
        for(i =N; i<= N +8;i+=2) somatorio +=i;
    else
        for(i =N +1 ; i<=N +9;i+=2) somatorio +=i;
    
    return somatorio;
}
int main()
{
    int entrada = -1;
    while (1)
    {
        scanf("%d", &entrada);
        if (entrada == 0)
            break;
        else
            printf("%d\n", somatorio(entrada));
    }

    return 0;
}