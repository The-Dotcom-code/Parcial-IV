#include <stdio.h>
#include <time.h>

void print_matrix(int arr[5][7]){
  int i,j,p=0;
  for(i=0; i<5;i++){
    for(j=0; j<7; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

void diagonal(int arr[5][7]){
  int i,j,k,p=0;
  for(i=0; i<5;i++){
    for(j=0; j<7; j++){
      if(i==j){
        p+=arr[i][j];
      }
    }
  }
  printf("Suma de la diagonal: %d\n", p);
}

void prf(int arr[5][7]){
  int i,j,k,p=0;
  for(i=0; i<5;i++){
    for(j=0; j<7; j++){
      if(i==0){
        p+=arr[i][j];
      }
    }
  }
  printf("Suma de la primera fila: %d\n", p);
}

void ucol(int arr[5][7]){
  int i,j,k,p=0;
  for(i=0; i<5;i++){
    for(j=0; j<7; j++){
      if(j==6){
        p+=arr[i][j];
      }
    }
  }
  printf("Suma de la ultima columna: %d\n", p);
}

void filaspar(int arr[5][7]){
  int i,j,k,p=0,sum=0;
  for(i=0; i<5;i++){
    for(j=0; j<7; j++){
      if(i%2==0){
        p+=arr[i][j];
      }
    }
    if(i%2==0){
      sum+=p;
      printf("Suma de la fila %d: %d\n", i+1, p);
      p=0;
    }
  }
  printf("Suma de las filas: %d\n", sum);
}

void colimpar(int arr[5][7]){
  int i,j,k,p=0,sum=0;
  for(i=0; i<7;i++){
    for(j=0; j<5; j++){
      if(i%2!=0){
        p+=arr[j][i];
      }
    }
    if(i%2 != 0){
      sum+=p;
      printf("Suma de la columna %d: %d\n", i+1, p);
      p=0;
    }
  }
  printf("Suma de las columnas: %d\n", sum);
}
void tsup(int arr[5][7]){
  int i,j,p=0;
  for(i=0; i<5;i++){
    for(j=i+1; j<7; j++){
      p += arr[i][j];
    }
  }
  printf("Suma triangular superior: %d\n", p);
}

void tinf(int arr[5][7]){
  int i,j,k,p=0;
  for(i=0; i<5; i++){
    for(j=0; j!=i ; j++){
      p+= arr[i][j];
    }
  }
  printf( "Suma triangular inferior: %d\n", p);
}

int main() {
  int i,j,n,m,k,p=0;
  srand(time(NULL));
  int arr[5][7];

  for(i=0; i<5; i++){
    for(j=0; j<7; j++){
      arr[i][j] = rand()%9 +1;
    }
  }

  print_matrix(arr);
  printf("\n");
  
  diagonal(arr);
  prf(arr);
  ucol(arr);
  printf("_____________\n\n");

  filaspar(arr);
  printf("_____________\n\n");

  colimpar(arr);
  printf("_____________\n\n");

  diagonal(arr);
  tsup(arr);
  printf("_____________\n\n");

  diagonal(arr);
  tinf(arr);
  printf("_____________\n\n");
  
  return 0;
}