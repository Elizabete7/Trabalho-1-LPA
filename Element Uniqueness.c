#include<stdio.h>
#include<stdlib.h>                    // biblioteca utilizada para a alocacao dinamica


   void insertion(int *vet,int qt)       //funcao para ordenar o vetor
   {
        int i, j, aux;
        for (i=1;i<qt;i++)
        {                   
            aux = vet[i];                                        
            j = i - 1;
        while ((j>=0) && (aux < vet[j])) 
        {                                                         
        vet[j+1] = vet[j] ;                 
               j--;
         }
         if (i != j + 1) 
         {
            vet[j+1] = aux;                                         
         }
      } 
    }
    
    void element_uniquess(int *vet,int qt)                   // funcao para encntrar o element unico 
    {
           int i,count=0;
           if(qt==1)                                        // teste para o caso em que apenas uma entrada eh requerida
           {
                    printf(" %d",vet[0]);                  //imprime o unico valor digitado
                    count++;
           {
           if(vet[0]!=vet[1] && qt>1)
           {
                       printf(" %d",vet[0]);                  //imprime o primeiro elemento , caso seja o maior
                       count++;      
           }
                    for (i = 1; i < qt-1;i++) 
                    {
			           if (vet[i] != vet [i+1]) 
                      {
                           printf(" %d eh unico ",vet[i]);
				           count++;
                      }
                   }
                   if(count==0)
                   {
                               printf("Nao ha elementos unicos!");
                   }
          }
      


     void main()                                  //funcao principal
    {
      int *vet, qt;                          // vet eh um vetor com as posicoes
      printf("Forneca o numero de entradas:  \n");
      scanf("%d",&qt);
      if(qt<1)
      {
              printf("Voce digitou um valor invalido! Degite uma quantidade maior que zero!");
              scanf("%d",&qt);
      }
      vet= malloc(qt*sizeof(int));          //aloca dinamicamente qt inteiros a vet 
      
      printf("Forneca as entradas: \n");
      for (i=0;i<qt;i++)                     //armazena as entradas no vetor vet
      {
          printf("Digite o valor do termo da posicao  %d:  ",i);
          scanf("%d",&vet[i]);
      }
      printf("Voce digitou: \n");                // mostra o que o usuario digitou
      for (i=0;i<qt;i++)
      {
          printf("vet[%d] = %d ", i, vet[i]);
          
      }
      insertion(int *vet,qt);                        // funcao para ordenar o vetor
      element_uniquess(int*vet,qt);                 // funcao para achar o elemento unico
      
     
}
