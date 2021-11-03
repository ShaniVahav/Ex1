#include <stdio.h>
#include "NumClass.h"
#include <string.h>

void main(){
    int num1, num2;
    printf("insert 2 numbers \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
char str[10];
char strArm[] = "The Armstrong numbers are:";
char strPal[] = "The Palindromes are:";
char strPrime[] = "The Prime numbers are:";
char strStrong[] = "The Strong numbers are:";

if (num2<num1)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

for (int i = num1; i <= num2; i++)
{
    sprintf(str, "%d", i);
    if (isArmstrong(i) == 1) strcat(strArm, str);
    if (isPalindrome(i) == 1)  strcat(strPal, str);;
    if (isPrime(i) == 1)  strcat(strPrime, str);;
    if (isStrong(i) == 1)  strcat(strStrong, str);;
}

printf("%s\n%s\n%s\n%s\n", strArm, strPal, strPrime, strStrong);
}