#include <iostream>
using namespace std;
main()
{
    string fruit, day;
    float quantity;
    cout << "Enter Fruit: ";
    cin >> fruit;

    cout << "Enter Day: ";
    cin >> day;

    cout << "Enter Quantity: ";
    cin >> quantity;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        float total1;
        float banana = 2.50, apple = 1.20, orange = 0.85, grapefruit = 1.45, kiwi = 2.70, pineapple = 5.50, grapes = 3.85;
        if (fruit == "banana")
        {
            total1 = banana * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "apple")
        {
            total1 = apple * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "orange")
        {
            total1 = orange * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "grapefruit")
        {
            total1 = grapefruit * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "kiwi")
        {
            total1 = kiwi * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "pineapple")
        {
            total1 = pineapple * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "grapes")
        {
            total1 = grapes * quantity;
            cout << "The total price is: " << total1;
        }
        else
        {
            cout << "Error";
        }
    }
    if (day == "Saturday" || day == "Sunday")
    {
        float total1;

        float banana = 2.70, apple = 1.25, orange = 0.90, grapefruit = 0.60, kiwi = 3.00, pineapple = 5.60, grapes = 4.20;
        if (fruit == "banana")
        {
            total1 = banana * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "apple")
        {
            total1 = apple * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "orange")
        {
            total1 = orange * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "grapefruit")
        {
            total1 = grapefruit * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "kiwi")
        {
            total1 = kiwi * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "pineapple")
        {
            total1 = pineapple * quantity;
            cout << "The total price is: " << total1;
        }
        else if (fruit == "grapes")
        {
            total1 = grapes * quantity;
            cout << "The total price is: " << total1;
        }
        else
        {
            cout << "Error";
        }
    }
}