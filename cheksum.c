#include <stdio.h>



// Function to calculate checksum using Luhn's Algorithm without converting the long into char array
int calculateChecksum(long long cardNumber);

int main() {
    long long cardNumber = 4003600000000014LL;
   
    int checksum = calculateChecksum(cardNumber);

    if (checksum == 4) {
        printf("VISA\n");
    } else if(checksum==3) {
        printf("AMEX\n");
    }
    else if(checksum==5) {
        printf("MASTERCARD\n");
    }else if (checksum==0)
    {
        printf("INVALID\n");
    }

   return 0;
}
int calculateChecksum(long long cardNumber) {
    int sum = 0;
    int doubleDigit = 0;
    int position = 1; // position of the current digit from right to left
    int digit =0;
    int secondlastdigit=500;
    int cardidentifier=0;
    int go=0;
    while (cardNumber > 0) {
        if (position!=1){secondlastdigit=digit;}
         digit = cardNumber % 10; // extract the last digit
        cardNumber /= 10; // remove the last digit
        //printf("my.. cardnumber is: %lld\n",cardNumber);
        if (position % 2 == 0) {
            doubleDigit = digit * 2;
            if (doubleDigit > 9) 
            {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += digit;
        }

        position++;
    }
    if(sum % 10 == 0){go=1;}
    printf("last digit is: %i\n",digit);
    printf("length of cardnumber is: %i\n",position);
    printf("Second Last Digit is: %i\n",secondlastdigit);
    if (go == 1 && digit==4 && (position==14 || position==17 ) ) {
        cardidentifier=4;      
        printf("Checksum is valid.\n");
    }  else if(go == 1 && digit==5 && (secondlastdigit > 0 && secondlastdigit <= 5)  && position==17 )  {
        cardidentifier=5;
        printf("Checksum is invalid.\n");}
         else if(go == 1 && digit==3 &&  (secondlastdigit==4 && secondlastdigit==7 )   && position==16 )  {
        cardidentifier=3;
        printf("Checksum is invalid.\n");
    }
    return cardidentifier;
}