#include <stdio.h>
#include <math.h>
int isArmstrong(int num){
    int digitnum = 0; int x = num ; int value = 0 ; int copy = num; int k = -1 ;
    while(x > 0){       
        digitnum++;
         x = x/10; 
    } 
    while(k <= num ){
        value = 0 ;  copy = num; k++;
          for (int i = 0 ; i <= digitnum; i ++){
          int y = copy%10;
          copy = copy/10;
          value = value + pow(y,k);
          }
          if(value == num){
              return 1  ;
          }  
    } 
        return -1 ;
}



int isPalindrome(int num){
  int dig, copy = num, numReverse = 0;

    while (copy != 0) {
        dig = copy % 10;
        numReverse = numReverse*10 + dig;
        copy /= 10;
    }

    if (num == numReverse) return 1;
    else return 0;
}