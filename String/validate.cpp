#include <iostream>

using namespace std;

int validate(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) || !(name[i] >= 97 && name[i] <= 122) || !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    char name[] = "Shiv?am";

    if (validate(name))
    {
        cout << "valid string";
    }
    else
    {
        cout << "not valid";
    }
}