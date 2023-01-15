#include <iostream>
using namespace std;
main()
{
    string temperature, humidity;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter Humidity: ";
    cin >> humidity;
    if (temperature == "warm" && humidity == "dry")
    {
        cout << "Play tennis";
    }
    if (temperature == "warm" && humidity == "humid")
    {
        cout << "swim";
    }
    if (temperature == "cold" && humidity == "dry")

    {
        cout << "Play basketball";
    }
    if (temperature == "cold" && humidity == "humid")
    {
        cout << "Watch tv";
    }
}
