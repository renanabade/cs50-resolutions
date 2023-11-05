#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("error");
        return 1;
    }

    string key = argv[1];
    int length = strlen(key);

    for (int i = 0; i < length; i++)
    {
        char c = tolower(key[i]);

        if (length != 26 || c < 'a' || c > 'z')
        {
            printf("wrong\n");
            return 1;
            break;
        }

        for (int j = length; j > i; j--)
        {
            char b = tolower(key[j]);

            if (c == b)
            {
                printf(" error ");
                return 1;
                break;
            }
        }
    }

    string text = get_string("plaintext: ");
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int length_text = strlen(text);

    for (int i = 0; i < length_text; i++)
    {
        char c = text[i];
        int upper = isupper(text[i]);

        for (int j = 0; j <= length; j++){

            char b = tolower(key[j]);
            char a = alphabet[j];

            if (upper > 0 && tolower(c) == a)
            {
                text[i] = toupper(key[j]);


            }

            else if (tolower(c) == a)
            {
                text[i] = tolower(key[j]);
            }
        }
    }

    printf("ciphertext: %s\n", text);

    return 0;
}

