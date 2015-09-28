#include<stdio.h>
#include<stdlib.h>                    // biblioteca utilizada para a alocacao dinamica

 void insertion(int*vet,int qt)          //funcao para ordenar o vetor 
 {
       int i, j, temp;
        for (i = 1; i < qt;i++)
        {                   
            temp = vet[i];                                        
            j = i - 1;
        while ((j>=0) && (temp < vet[j])) 
        {                                                          
        vet[j+1] = vet[j]          ;                 
               j--;
         }
         if (i != j + 1) 
         {
         vet[j+1] = temp;                                         
         }
      } 
 }
 void frequency (int*vet,int qt)            //comparar os elementos do vetor
 {
      int count=0,i;
      int max_frequency=0;
      int j=i;
         for (i=0;i<qt;i++) 
           {
                   for(j=i;j<qt;j++)
                   {
                        if (vet[i]== vet[i+1]) 
                          {
                                     count++;
                          }
                          if(count>max_frequency)
                            {
                                 max_frequency=count;
                            }
                   }
           i=j-1;
         }
            if(max_frequency==1)                   
                 {
                     printf(" Todos os elementos sao unicos");
                     
                 }
            for(i=0;i<qt-1;i++)
             {
                   if(vet[i]!=vet[i+1])
                    {
                      count=1;
                    }
                     if(vet[i]==vet[i+1])
                     {
                      count++;
                     }
                     if(count==max_frequency)
                      {
                         printf("%d eh unico ",vet[i]);
                      }
              }
         }
                     

int main()                                 //funcao principal       
 {
      int *vet, qt,i;                          // vet eh um vetor com as posicoes
      printf("Bem vindo a Frequency distribution! \nAqui voce fornece valores e identificamos qual tem a maior frequencia!\n\n");
      printf("Forneca a quantidade de entradas que voce vai fazer:  \n");
      scanf("%d",&qt);
      if(qt<1)                               //verifica se a quantida de entradas eh um numero valido
          {
              printf("O numero de entradas deve ser maior que zero! Digite uma quantidade valida!");
              scanf("%d",&qt);
          }
             
      vet= malloc(qt*sizeof(int));           //aloca dinamicamente qt inteiros, vet 
      
      printf("Forneca as entradas: \n");
      for (i=0;i<qt;i++)                     //armazena as entradas fornecidas pelo usuario no vetor vet
      {
          printf("Digite o valor do termo da posicao  %d:  ",i);
          scanf("%d",&vet[i]);
      }
      printf("Voce digitou: \n");            //mostra o que o usuario digitou
      for (i=0;i<qt;i++)
      {
          printf("vet[%d] = %d ", i, vet[i]);
          
      }
      insertion(vet,qt);          //chama a funcao para ordenar o vetor
      frequency(vet,qt);            //chama a funcao que encontra a maior frequencia
      free(vet);                           //desaloca a memoria utilizada
      system("pause");
      return 0;
}
