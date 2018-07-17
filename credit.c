#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str;
    char c = ' ';
    int num = 0;
    int evensum = 0;
    int bigsum = 0;
    int oddsum = 0;
    int ans = 0;
    string cardtype = "";
    string original = "";

    do{
        original = get_string("Enter card number: ");
    } while(strlen(str) <= 0);

    str = original;


    for(int i = 0; i < strlen(str); i++)
    {

        c = str[i];
        num = c - '0';

        if(i%2==0)
        {
            oddsum = oddsum + num;
        }
        else
        {
            //split num into two numbers if double digits

            //take num*2 and seperate the 10 from the one then add to evensum
            ans = num * 2;
            if(ans >= 10)
                evensum = evensum + (ans%10) + 1;
            else
                evensum = evensum + ans;
        }
    }


    // Add the digits in big sum (even digits * 2) together
    sprintf(str, "%d", evensum);
    string mystring = str;

    for(int i = 0; i < strlen(mystring); i++)
    {
            c = mystring[i];
            num = c - '0';

            bigsum = oddsum + evensum;
    }

    //378282246310005

    //ans = bigsum + oddsum;

    // printf("The answer:");
    // printf("%i", ans);

    // Add to the sum of the odd numbers

    if(bigsum%10 == 0)
    {
        //American Express uses 15-digit numbers
        //MasterCard uses 16-digit numbers
        //Visa uses 13- and 16-digit numbers
        printf("great\n");
    }
    else
        cardtype = "INVALID\n";

    printf("%s", cardtype);


    return 0;

}