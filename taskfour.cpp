#include <iostream>
using namespace std;
main()
{
    char customer;
    cout << "Enter which type of consumer you (Regular of Premium) select(r/p): ";
    cin >> customer;
    char time;
    float minutes;
    if (customer == 'p')
    {
        cout << "(Press 'D' for day time or Prss 'N' for night time) call: ";
        cin >> time;
    }
    cout << "Enter Number of mins you used the service: ";
    cin >> minutes;
    if (customer == 'r')
    {
        float totalCharges;
        if (minutes <= 50)
        {
            totalCharges = 10.00;
        }
        if (minutes > 50)
        {
            float minutes2 = minutes - 50;
            float overCharge;
            overCharge = 0.20 * minutes2;
            totalCharges = 10.00 + overCharge;
        }
        cout << "The Charges are: " << totalCharges << "$";
    }
    if (customer = 'p')
    {
        float totalCharges;
        if (time == 'D')
        {
            if (minutes <= 75)
            {
                totalCharges = 25;
            }
            if (minutes > 75)
            {
                float minutes2 = minutes - 75;
                float overCharge = 0.10 * minutes2;
                totalCharges = 25 + overCharge;
            }
            cout << "The charges are : " << totalCharges << "$";
        }
        if (time == 'N')
        {
            if (minutes <= 100)
            {
                totalCharges = 25;
            }
            if (minutes > 100)
            {
                float minutes2 = minutes - 100;
                float overCharge = 0.05 * minutes2;
                totalCharges = 25 + overCharge;
            }
            cout << "The charges are : " << totalCharges << "$";
        }
    }
}