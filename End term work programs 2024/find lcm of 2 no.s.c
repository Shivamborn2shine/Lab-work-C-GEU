//Write a C Program to write a function to find the LCM of two numbers
#include<stdio.h>
int GCD_of(int x, int y){
  if(x>y){
    while(y != 0){
    int temp = y;
    y = x%y;
    x = temp;
    }
    return x;
  }
  else{
    while(x != 0){
    int temp = x;
    x = y%x;
    y = temp;
    }
  
    return y;
  }
}
void LCM_of(int x, int y){
  int gcd = GCD_of(x,y);
  int lcm;
  lcm = (x*y)/gcd;
  
  printf("LCM of the given no.s %d and %d is %d.\n",x,y,lcm);
}
int main(){
  int a, b;
  printf("Enter the numbers to find the lcm of them\n");
  scanf("%d %d",&a, &b );
  LCM_of(a,b);
}
