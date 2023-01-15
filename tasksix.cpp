#include <iostream>
using namespace std;
main()
{
    string month;
    float days;

    cout << "Enter Month (May, June, July, August, September or October): ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> days;
    if (month == "May" || month == "October")
    {
        float studio = 50.00;
        float apartment = 65.00;
        if (days > 14)
        {
            float discount = 0.1 * apartment;
            float apartment2 = apartment - discount;
            apartment2 = apartment2 * days;
            cout << "Apartment: " << apartment2 << endl;
        }

        else
        {
            cout << "Apartment: " << apartment << endl;
        }

        if (days > 14)
        {
            float discount;
            discount = 0.3 * studio;
            float studio2 = studio - discount;
            studio2 = days * studio2;
            cout << "Studio: " << studio2 << endl;
        }

        else
        {
            cout << "Studio: " << studio << endl;
        }
    }
    if (month == "June" || month == "September")
    {
        float studio = 75.20;
        float apartment = 68.70;
        if (days > 14)
        {
            float discount = 0.1 * apartment;
            float apartment2 = apartment - discount;
            apartment2 = days * apartment2;
            cout << "Apartment: " << apartment2 << endl;
        }

        else
        {
            cout << "Apartment: " << apartment << endl;
        }
        if (days > 14)
        {
            float discount;
            discount = 0.2 * studio;
            float studio2 = studio - discount;
            studio2 = days * studio2;
            cout << "Studio: " << studio2 << endl;
        }
        else
        {
            cout << "Studio: " << studio << endl;
        }
    }
    if (month == "July" || month == "August")
    {
        float studio = 76.00;
        float studio2 = days * studio;
        float apartment = 77.00;
        if (days > 14)
        {
            float discount = 0.1 * apartment;
            float apartment2 = apartment - discount;
            apartment2 = days * apartment2;
            cout << "Apartment: " << apartment2 << endl;
        }

        else
        {
            cout << "Apartment: " << apartment << endl;
        }

        cout << "Studio: " << studio2 << endl;
    }
}