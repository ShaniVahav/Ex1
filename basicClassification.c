#include <stdio.h>
int isPrime(int num)
{
	for(int i=2; i<=num/2; i++)
	{
		if(num%i!= 0)
			continue;
		else
			return 0;
	}
	return 1;
}



int factorial(int num) {
        int mul = 1;  
        for(int i=1; i<=num; i++){  
            mul *= i;  
        }
        return mul;  
    } 
	
int isStrong(int num){
    if(num == 0) return 0;
    
    int factDig = 1, sum = 0; int temp = num; int dig = 0;
        while(temp != 0) {                                                                  
            dig = temp%10;  
            factDig = factorial(dig);  
            temp = temp/10;  
            sum += factDig;  
        }

       if(sum == num) return 1;
       else return 0;
}