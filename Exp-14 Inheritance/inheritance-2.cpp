#include <iostream>
using namespace std;

class Student
{
public:
    int prn;
    string name;
};

class Subject
{
public:
    string sub;
    int marks;
};

class Profile : public Student, public Subject
{
public:
    char div;
};

int main()
{

    Profile p1;
    p1.name = "Nishka";
    p1.prn = 82;
    p1.div = 'A';
    p1.sub = "CDS";
    p1.marks = 90;

    cout << "Name: " << p1.name << endl;
    cout << "PRN: " << p1.prn << endl;
    cout << "Division: " << p1.div << endl;
    cout << "Subject: " << p1.sub << endl;
    cout << "Marks: " << p1.marks << endl;

    return 0;
}

/*==========OUTPUTS==========
Name: Nishka
PRN: 82
Division: A
Subject: CDS
Marks: 90
*/