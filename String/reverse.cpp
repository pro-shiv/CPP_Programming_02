#include <iostream>

using namespace std;

int main()
{
    char word[] = "Shivam";

    int i, j;
    char temp;

    for (i = 0; word[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (int j = 0; j < i; i--, j++)
    {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    }
    cout << word;
}