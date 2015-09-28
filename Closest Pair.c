#include<stdio.h>
#include<stdlib.h>  //biblioteca utilizada para a alocacao dinamica

    void insertion(int *vet,int qt)        // funcao utilizada para ordenar o vetor
    {
        
        int i, j, temp;
        for (i=1;i<qt;i++)
        {                   
            temp = vet[i];                                        
            j = i - 1;
          while ((j>=0) && (temp < vet[j])) 
          {                                                         
               vet[j+1] = vet[j]; 
               j--;
          }
         if (i != j + 1) 
          {
               vet[j+1] = temp;                                         
          }
       } 
    }

   int dif (int *vet, int qt)                     // funcao utilizada para fazer as diferencas entre elementos do vetor 
   {
        int dif,i;
        dif= vet[1]-vet[0];
        for (i=0;i<qt-1; i++)
        {
            
            if(vet[i+1]-vet[i]<dif)
            {
                dif=vet[i+1]-vet[i];
            }
            return dif,vet[i+1],vet[i];
        }
        printf(" A menor diferenca eh %d, entre %d e %d.", dif,vet[i+1],vet[i]);
   }
         
   
   void main()                                           //funcao principal
   {
      int *vet, qt,i;                                   // vet eh o vetor onde serao armazenadas as entradas
      printf("Bem vindo a a Closest Pair! Aqui encontraremos o par com a menor diferença entre seus elementos."); 
      printf("Forneca quantidade de entradas a serem feitas:  \n");
      scanf("%d",&qt);
      if(qt<2)                                                 // verifica se o usuario escolheu uma quantidade-qt- valida de entradas
            {
             printf("Estamos procurando um par! Digite um numeros maior ou igual a 2 de entradas!");
             scanf("%d",&qt);
             }
      vet= malloc(qt*sizeof(int));                     //aloca dinamicamente qt inteiros, vet 
      
      printf("Forneca as entradas: \n");
      for (i=0;i<qt;i++)                              //armazena as entradas fornecidas pelo usuario no vetor vet
      {
          printf("Digite o valor do termo da posicao  %d:  ",i);
          scanf("%d",&vet[i]);
      }
      printf("Voce digitou: \n");                     // mostra os valores digitados pelo usuario
      for (i=0;i<qt;i++)
      {
          printf("vet[%d] = %d ", i, vet[i]);
         
      }
    
    insertion(*vet,qt);                    // ordena o vetor fornecido pelo usuario
    dif(*vet, qt);                          // funcao que compara a diferenca entre elementos do vetor
    free(vet);                                    // libera a memoria alocada por malloc
    
}



     
     
