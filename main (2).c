#include <stdio.h>

void print_matrix(int arr[3][3]){
  int i,j,p=0;
  for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

void sumafilas(int arr[3][3]){
  int r1[3]={0,0,0};
  int i,j,k,p=0;
  for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      r1[i]+= arr[i][j];
    }
    printf("Suma fila %d: %d\n", i+1, r1[i]);
  }
  if(r1[0]==r1[1] && r1[0]==r1[2]){
    printf("Es magico en filas\n");
  }
  else{
    printf("No es magico en filas\n");
  }
}

void sumacol(int arr[3][3]){
  int r1[3]={0,0,0};
  int i,j,k,p=0;
  for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      r1[i]+= arr[j][i];
    }
    printf("Suma fila %d: %d\n", i+1, r1[i]);
  }
  if(r1[0]==r1[1] && r1[0]==r1[2]){
    printf("Es magico en columnas\n");
  }
  else{
    printf("No es magico en columnas\n");
  }
}

void diagonal(int arr[3][3]){
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

void diagonalinv(int arr[3][3]){
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

int main(void) {
  int i,j,k,m,n;
  int arr[3][3];
  printf(".\n");
  
  for(i=0; i<3;i++){
    for(j=0; j<3; j++){
      printf("Posicion (%d,%d): ", i,j);
      scanf("%d ", &arr[i][j]);
      printf("\n");
    }  
  }

  print_matrix(arr);
  sumacol(arr);
  sumafilas(arr);
  
  return 0;
}