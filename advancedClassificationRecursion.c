#include <stdio.h>
#include <math.h>
int sumOfDigit(int num){
    int sum = 0;
 while(num > 0){       
        sum++;
        num = num/10; 
    }
    return sum;
}

int armstrongRecursion(int num, int sumOfDig){
int dig, sum = 0;

  if (num > 0){
     dig = num % 10;
     sum = pow(dig, sumOfDig) + armstrongRecursion (num/10, sumOfDig);
    }
    return sum;
}

int isArmstrong (int num){
    int sum;
    int sumOfDig = sumOfDigit(num);
    sum = armstrongRecursion(num, sumOfDig);
if (num == sum) printf("Yessss\n");//return 1;
else printf("Noo\n"); //return 0;
}


int isPalindrome(int num){
     if(num < 10) return 1; 
    int first = 0, numOfDigit = (int)log10(num) ;
    int last = num%10 ;
    first = (int) (num/pow(10,numOfDigit));
    if(first != last) return 0;
    else{ 
        num = num%((int)pow(10,numOfDigit)); //remove first
      num = num/10; //remove last
      return (isPalindrome(num));
    }
}
