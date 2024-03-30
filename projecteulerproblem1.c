#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


//https://projecteuler.net/archives   this program is written to solve the problem number 1

int main(){
    long sum=0;long equationsum=0;long n=5; 
        
     long s3=0;
     long s5=0;
     long s15=0;

     s3=(((n-1)/3)*(3+(3*((n-1)/3))))/2;
     s5=(((n-1)/5)*(5+(5*((n-1)/5))))/2;
     s15=(((n-1)/15))*(15+(15*((n-1)/15)))/2;

    //  s3=(((n-1)/3)*(3+((n-1))))/2;
    //  s5=(((n-1)/5)*(5+(5*((n-1)/5))))/2;
    //  s15=(((n-1)/15))*(15+(15*((n-1)/15)))/2;

     
     equationsum=s3+s5-s15;


        for(long i=3;i<n;i++)
        {
            if(i%3==0||i%5==0) {sum=sum+i;}
                                            
        }
        printf("%i\n",sum);
        printf("%i\n",s3);
        printf("%i\n",s5);
        printf("%i\n",s15);
        printf("%i\n",equationsum);
    return 0;
}