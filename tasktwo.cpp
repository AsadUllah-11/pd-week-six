#include <iostream>
using namespace std;
main()
{
    string name;
    float english, math, chemistry, science, biology;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter English Marks: ";
    cin >> english;
    cout << "Enter Math Marks: ";
    cin >> math;
    cout << "Enter Chemistry Marks: ";
    cin >> chemistry;
    cout << "Enter Social Science Marks: ";
    cin >> science;
    cout << "Enter Biology Marks: ";
    cin >> biology;
    float obtainedMarks;
    obtainedMarks = english + math + chemistry + science + biology;
    float percentage = (obtainedMarks / 500) * 100;
    string grade;
    if (percentage >= 90 && percentage <= 100)
        grade = "A+";
    if (percentage >= 80 && percentage < 90)
        grade = "A";
    if (percentage >= 70 && percentage < 80)
        grade = "B+";
    if (percentage >= 60 && percentage < 70)
        grade = "B";
    if (percentage >= 50 && percentage < 60)
        grade = "C";
    if (percentage >= 40 && percentage < 50)
        grade = "D";
    if (percentage < 40)
        grade = "F";
    cout << "Name of Student is " << name << endl;
    cout << "Student Obtained Marks are " << obtainedMarks << endl;
    cout << "Percentage is " << percentage << endl;

    cout << "Grade is " << grade << endl;
}
