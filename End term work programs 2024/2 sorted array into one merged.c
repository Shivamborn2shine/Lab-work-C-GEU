//Write a C Program to merge two sorted arrays into one sorted array.
#include<stdio.h>

void print_array(int size, int array[size]){
  for(int i = 0; i<size; i++){
    printf("%d ",array[i]);
  }
  printf("\n");
}  


void get_list(int N,int array[N]){
  printf("Enter the elements here\n");
  for(int i = 0; i<N; i++){  
    scanf("%d",&array[i]);
  }
  }

void sort_list(int N, int array[N]){
  //we will use bubble sort
  for(int i = 0; i<N-1; i++){
    for(int j = 0; j< N-i-1; j++){
      if (array[j]>array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  print_array(N,array);
}  

void merge_list(int size,int array1[size],int array2[size]){
  int merged[2*size];
  for (int i = 0; i< size; i++){
    merged[(2*size)-i-1] = array2[i];
    merged[i] = array1[i];
    
  }
  print_array(size*2,merged);
  sort_list(size*2,merged);
}


int main(){
  int N;
  printf("Enter the no. of elements in array\n");
  scanf("%d",&N);
  int a[N],b[N];
  
  printf("1st list--->");
  get_list(N,a);
  
  printf("Sorted list 1\n");
  sort_list(N,a);
  
  
  printf("2nd list--->");
  get_list(N,b);
  printf("Sorted list 2\n");
  sort_list(N,b);
  printf("Merged and sorted list\n");
  merge_list(N,a,b);
  
return 0;
  
}
