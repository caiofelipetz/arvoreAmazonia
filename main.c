#include <stdio.h>
#include <time.h>
#include <stdlib.h>





int main(){
  
  int vertices;
  int i;
  int random_number,random_number2;
  int temp = 0;
  
  srand(time(NULL));
  random_number = rand()%17+10;
  vertices = random_number;
  srand(time(NULL));
  printf("Vertices: %d ", vertices);
  printf("\n");
  int arr[random_number];
  int arr2[random_number];
  for (int i = 0; i < vertices; i++) {
    arr2[i] = 0;
    
  }

  printf("Array Gerado: [");
  for (i = 0; i < vertices; i++ ) {
    random_number2 = rand() %1000+1;
    arr[ i ] = random_number2;
    printf(" %d ", arr[i]);
  }
  printf("]\n");
  int camada = 0;
  int teste = 0;
  printf("%d\n",arr[0]);
  for (int i = 1; i < vertices; i++) {   
      if (arr[i] < arr[i-1]){
        if (arr[i]<arr[i-2]& camada != 0){
            //camada=camada-1;
            printf("\t\t%d\n",arr[i]);
            teste = 1;
          
        }
        else{
        NULL;
        }
        if(teste==0){
          camada=camada+1;
          printf("\t%d\n",arr[i]);
          }
      }
      teste = 0;
      if (arr[i] > arr[i-1]){
        if (arr[i]>arr[i-2]& camada != 0){
            //camada=camada-1;
            printf("\t\t%d\n",arr[i]);
            teste = 1;
          
        }
        else{
        NULL;
        }
        
        if(teste==0){
        camada=camada+1;
        printf("\t%d\n",arr[i]);
        }
        
      }
    
      teste = 0;  
      
    }  
  

  for (int i = 0; i < vertices; i++) {
    
  } 

  
}