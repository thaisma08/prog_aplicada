#include <stdio.h>

int main ()
{
    int i;
    float vetor[10], x;
       for (i=0; i<=9; i++)
           {
                 printf("\n INSIRA UM VALOR:  \n");
                 scanf("%f", & vetor[i]);
           }
    
                 printf(" \n Insira o valor a ser procurado:  \n");
                 scanf("%f", &x);
    
       for (i=0; i<=9; i++)
           {
              if(i<10)
                { 
                      if(vetor[i] == x)
                         printf("\n A pocicao eh : %d" ,i );
                      else 
                      i++;
                }
                 printf("\n Fim. \n A busca falhou");
           }
       return 0;
}
