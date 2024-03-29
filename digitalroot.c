#include<stdio.h>

int main(void)
{

long n=195;
    // Your awesome code here!
    long digit=0;
    long sum=0;    

printf("the value of sum is:...... %ld\n",195%9);


    do
    {  
      digit=n%10;  
      n=n/10;   
    sum=sum+digit;    
      if(n<=0&&sum>9)
      {
        n=sum;
        sum=0;
      }      
    }
    while(n>0);
    //Console.WriteLine(sum);
    printf("the value of sum is: %ld\n",sum);




}