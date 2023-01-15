#include <iostream>
using namespace std;

void findPosition(int height, int xCoordinate, int yCoordinate);
main()
{

    int height, xCoordinate, yCoordinate;
    cout << "enter height: ";
    cin >> height;

    cout << "enter x cordinate: ";
    cin >> xCoordinate;

    cout << "enter y cordinate: ";
    cin >> yCoordinate;

    findPosition(height, xCoordinate, yCoordinate);
}

void findPosition(int height, int xCoordinate, int yCoordinate)
{

    int base = height * 3;
    int roof = height * 4;

    if ((xCoordinate == 0 || xCoordinate == base) && (yCoordinate >= 0 && yCoordinate <= height))
    {
        cout << "border ";
    }
    else if ((yCoordinate == 0) && (xCoordinate >= 0 && xCoordinate <= base))
    {
        cout << "border ";
    }
    else if ((yCoordinate == height) && ((xCoordinate >= 0 && xCoordinate <= height) || (xCoordinate >= height * 2 && xCoordinate <= base)))
    {
        cout << "border ";
    }
    else if ((xCoordinate == height || xCoordinate == height * 2) && (yCoordinate >= height || yCoordinate <= height * 2))
    {
        cout << "border ";
    }
    else if ((yCoordinate == roof) && (xCoordinate >= height && xCoordinate <= height * 2))
    {
        cout << "border ";
    }

    else if ((xCoordinate > 0 && xCoordinate < base) && (yCoordinate > 0 && yCoordinate < height))
    {
        cout << "inside ";
    }
    else if ((xCoordinate > height && xCoordinate < height * 2) && (yCoordinate > 0 && yCoordinate < roof))
    {
        cout << "inside ";
    }
    else
    {
        cout << "outside";
    }
}
