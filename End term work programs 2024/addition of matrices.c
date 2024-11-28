//Write a C Program to addition of matrices in an array.

void input_matrix(int x, int y, int matrix[x][y]) {
  for (int i = 0; i < x * y; i++) {
    scanf("%d", &matrix[i / y][i % y]);
  }
}

void print_matrix(int x, int y, int matrix[x][y]){
  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
}
void matrix_addition(int rows,int cols,int mat1[rows][cols],int mat2[rows][cols], int result[rows][cols]){
  for(int i = 0; i < rows*cols; i++){
    result[i/rows][i%cols] = mat1[i/rows][i%cols] + mat2[i/rows][i%cols];
  }
}

#include<stdio.h>
int main(){
  
  int rows,cols;
  printf("Enter the no. of rows and columns of the matrix \n");
  scanf("%d%d",&rows,&cols);
  
  int mat1[rows][cols], mat2[rows][cols],result[rows][cols];
  
  //input matrix 1 
  input_matrix(rows,cols,mat1);
  
  //print matrix 1 
  printf("Here is the matrix 1\n");
  print_matrix(rows,cols,mat1);
  
  //input matrix 2 
  input_matrix(rows,cols,mat2);
  
  //print matrix 2
  printf("Here is the matrix 2\n");
  print_matrix(rows,cols,mat2);
  
  // addition of matrices
  printf("Here's the addition of matrices \n");
  matrix_addition(rows,cols,mat1,mat2,result);
  print_matrix(rows,cols,result);
  return 0;
}
