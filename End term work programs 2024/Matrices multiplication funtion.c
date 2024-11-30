//Write a C Program to implement a function to perform multiplication of matrix.

#include<stdio.h>
void print_matrix(int rows, int cols,int matrix[rows][cols]){
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
}
void input_matrix(int rows, int columns, int matrix[rows][columns]){
  for(int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      scanf("%d",&matrix[i][j]);
    }
  }
}

void multipy_matrix(int rows_1,int cols_1,int rows_2, int cols_2,int matrix_1[rows_1][cols_1],int matrix_2[rows_1][cols_2]){
  int product_mat [rows_1][cols_2];
  for(int i = 0; i < rows_1; i++){
    for(int j = 0; j < cols_2; j++){
      int Sum = 0;
      for(int times = 0; times < rows_2; times++){
        Sum += (matrix_1[i][times] * matrix_2[times][j]);
      }
      product_mat[i][j] = Sum;
    }
  }
  print_matrix(rows_1,cols_2,product_mat);
}

int main(){
  int rows_1,columns_1;
  int rows_2,columns_2;
  printf("Enter rows and columns for 1st matrix--here--> \n");
  scanf("%d%d",&rows_1,&columns_1);
  printf("Enter rows and columns for 2nd matrix--here--> \n");
  scanf("%d%d",&rows_2,&columns_2);
  if(columns_1 == rows_2){
    int matrix_1[rows_1][columns_1],matrix_2[rows_2][columns_2];
    
    printf("\nYour Matrix 1 is -\n");
    input_matrix(rows_1,columns_1,matrix_1);
    print_matrix(rows_1,columns_1,matrix_1);
    //second matrix input and printing
    printf("\nYour Matrix 2 is -\n");
    input_matrix(rows_2,columns_2,matrix_2);
    print_matrix(rows_2,columns_2,matrix_2);
    //multiplying of matrix
    printf("\nAfter Multiplying them -\n");
    multipy_matrix(rows_1,columns_1,rows_2,columns_2,matrix_1,matrix_2);  
  }
  else{
    printf("\n    Dimenstion Error");
  }
}



