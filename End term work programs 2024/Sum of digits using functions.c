//Write a C Program to Sum of Digits Using Function
#include<stdio.h>
int Sum(int digits){
  int Num,sum;
  for(int i = 0; i < digits; i++){
    printf("Enter digit %d --- here ----> ",i);
    scanf("%d",&Num);
    printf("\n");
    sum += Num;
  }
  return sum;
}


int main(){
  int input,digit,sum;
  printf("Enter the no. of digits you wanna add");
  scanf("%d",&input);
  sum = Sum(input);
  
  printf("The Sum of %d digits is ----> %d ",input,sum);
}
