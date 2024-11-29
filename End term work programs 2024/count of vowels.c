//Write a C Program to Count Vowels in a String using Function.
#include<stdio.h>
#include<string.h>
int count_vowels(char string[]){
  int len = strlen(string);
  int count = 0;
  for( int i = 0; i<len; i++){
    char ch = tolower(string[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
      count++;
    }
  }
  return count;
}

int main(){
  char input [100];
  int count;
  printf("enter the string to count vowels\n");
  scanf("%[^\n]s",&input);
  count = count_vowels(input);
  printf("The no. of vowels in string is -----> %d",count);
}
