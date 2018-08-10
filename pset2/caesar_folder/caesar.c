#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if(argc!=2)
    return 1;

    string str = "";
    int key = atoi(argv[1]);
    // string c_string = "";
    int str_len = 0;

    do{
        str = get_string("Enter a string: ");

    } while(strlen(str) <= 0);

    str_len = strlen(str);

    for(int i = 0; i < str_len; i++)
    {
        if(islower(str[i]))
        {
            str[i] = (str[i] - 97) + key;
            str[i] = (str[i]%26) + 'a';
        }
        if(isupper(str[i]))
        {
            str[i] = (str[i] - 65) + key;
            str[i] = (str[i]%26) + 'A';
        }
    }

printf ("ciphertext: %s\n" ,str);

return 0;
}