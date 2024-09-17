#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of Voter = ");
    scanf("%d",&age);
    (age>=18)? printf("Voter is Eligible") : printf("Voter is Ineligible");
    return 0;
}
