#include <iostream>

using namespace std;

int main()
{
    char sen[] = "How are you";
    int vovel = 0, consts = 0;
    for (int i = 0; sen[i] != '\0'; ++i)
    {
        if (sen[i] == 'A' || sen[i] == 'a' || sen[i] == 'I' || sen[i] == 'i' || sen[i] == 'O' || sen[i] == 'o' || sen[i] == 'U' || sen[i] == 'u' || sen[i] == 'E' || sen[i] == 'e')
        {
            ++vovel;
        }
        else if ((sen[i] >= 65 && sen[i] <= 90) || (sen[i] >= 97 && sen[i] <= 122))
        {
            ++consts;
        }
    }
    cout << "vcount " << vovel << endl
         << "ccount " << consts;
}