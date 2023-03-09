#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipherFunction(int length, char userText[]);
int only_digits(string checkDigits);

int main(int argc, char *argv[])
{
    char * convertKey = argv[1];
    int num = atoi(convertKey);

    if(argc != 2)
    {
        printf("Missing CLA \n");
        return 1;
    }

    only_digits(convertKey);
    string userInput = get_string("plaintext:  ");
    printf("Ciphertext:");
    cipherFunction(num, userInput);

}

int only_digits(string checkDigits){

     for (int i = 0; i < strlen(checkDigits); i++)
    {
        if (checkDigits[i] <= '0' || checkDigits[i] >= '9')
        {
            printf("USAGE: ./caesar key \n");
            break;
        }
    }
    return 1;
}

void cipherFunction(int length, char userText[])
{
    char ciphertext;
    char hello;
    for (int j = 0; j < strlen(userText); j++)
    {
        if ((userText[j] >= 'a' && userText[j] <= 'z') || (userText[j] >= 'A' && userText[j] <= 'Z'))
        {
            ciphertext = userText[j] + length;
            printf("%c", ciphertext);
       }
    }
}