#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main()
{
    Student s1;
    s1.name = "Riya";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.year = "First Year";
    s1.result = 9.0;

    Student s2;
    s2.name = "Varnika";
    s2.branch = "E&TC";
    s2.subject = "DSA";
    s2.year = "First Year";
    s2.result = 9.0;

    cout << "1st Student: " << endl;
    cout << s1.name << endl;
    cout << s1.branch << endl;
    cout << s1.subject << endl;
    cout << s1.year << endl;
    cout << s1.result << endl;

    cout << "\n2nd Student: " << endl;
    cout << s2.name << endl;
    cout << s2.branch << endl;
    cout << s2.subject << endl;
    cout << s2.year << endl;
    cout << s2.result << endl;

    return 0;
}
/*==========OUTPUTS==========
1st Student:
Riya
E&TC
C++
First Year
9

2nd Student:
Varnika
E&TC
DSA
First Year
9
*/