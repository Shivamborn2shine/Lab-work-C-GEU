//program to check if string is a palindrome
#include<stdio.h>
#include<string.h>
void check_palindrome(char string[100],int length){
  if( string[0]== string[length-1]){
    printf("\nThe given string is a Palindrome");
  }
  else{
    printf("\nThe given string is not a Palindrome");
  }
}
int main(){
  char input[100];
  printf("Enter the string you wanna chech palindrome for\n----here--->");
  scanf("%s",&input);
  int length = strlen(input);
  check_palindrome(input,length);
}
