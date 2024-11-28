//Write a C Program to find the second largest element in an array
#include<stdio.h>
int main(){
  int n;
  printf("Enter the no. of elements you wanna add\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements\n");
  for(int i = 0; i<n; i++){
    scanf("%d",&a[i]);
    printf("%d ",a[i]);
  }
  printf("\n");
  //second largest element of the array is
  int largest = a[0];
  for(int i = 0; i<n; i++){
    if (a[i] > largest){
      largest = a[i];
    }
  }
  int second_largest = 0;
  for(int i = 0; i<n; i++){
    if (a[i]>second_largest && a[i]<largest){
      second_largest = a[i];
    }
  }
  printf("The second largest element of the array is %d",second_largest);
  return 0;
}
