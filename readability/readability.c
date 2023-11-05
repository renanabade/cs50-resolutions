#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);


int main(void)
{

    string text = get_string("Text: ");

    int letters = count_letters(text);
    //printf("%d ", letters);
    int words = count_words(text);
    //printf("%d ", words);
    int sentences = count_sentences(text);
    //printf("%d ", sentences);

    //formula to get the level
    float index = 0.0588 * ((float) letters / words * 100) - 0.296 * ((float) sentences / words * 100) - 15.8;
    index = round(index);

    if (index < 1)
    {
        printf("Before Grade 1\n");

    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }

}

int count_letters(string text)
{
    //function to count letters
    int length = strlen(text);
    int letters = 0;

    //loop to read the string
    for (int i = 0; i != length; i++)
    {
        //transform uppercase to lowercase
        char c = tolower(text[i]);
        //conditionals for char to be a letter
        if (c >= 'a' && c <= 'z')
        {
            letters++;
        }

    }
    return letters;
}

int count_words(string text)
{
    //function to count average of words
    int length = strlen(text);
    int words = 0;

    for (int i = 0; i != length; i++)
    {
        char c = tolower(text[i]);

        if (c == ' ')
        {
            words++;


        }
    }
    return words + 1;
}

int count_sentences(string text)
{
    //function to count average of sentences
    int length = strlen(text);
    int sentences = 0;

    for (int i = 0; i != length; i++)
    {
        char c = tolower(text[i]);

        if (c == '!' || c == '.' || c == '?')
        {
            sentences++;
        }
    }

    return sentences;
}