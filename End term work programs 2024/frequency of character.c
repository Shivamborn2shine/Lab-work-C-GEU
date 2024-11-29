//. Write a C Program to Count the frequency of each character in a string.
#include<stdio.h>
#include<string.h>

int frequency_check(char material[],char checkthis,int length){
  int count = 0;
  for( int i = 0; i < length ; i++){
    if(material[i] == checkthis){
      count++;
    }
  }
  return count;
}
int main(){
  char input[100];
  printf("Enter the string to check frequency of each character\n");
  scanf("%[^\n]s",input);
  int length = strlen(input);
  int already_counted [256]= {0};
  for(int i = 0; i<length; i++){
    if(!already_counted [(int)input[i]]){
    int freq = frequency_check(input,input[i],length);
    printf("The frequency of character '%c' is --> %d \n",input[i],freq);
    already_counted[(int)input[i]] = 1;
  }
  }
  return 0;
}
