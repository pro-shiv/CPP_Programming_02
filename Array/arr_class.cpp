#include <iostream>
using namespace std;

class shop
{
    int itemId[100];

    int itemPrice[100];

    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void DisplayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;

    cin >> itemId[counter];
    cout << "Enter Price of your item " << endl;

    cin >> itemPrice[counter];

    counter++;
}

void shop::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item is :" << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.DisplayPrice();
}
