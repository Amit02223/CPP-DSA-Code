#include<iostream>
using namespace std;

class Student{
    public:
    string name ;
    int age ;
    string grade;
    int roll_no;
};

int main()
{
    Student s1;
    s1.name = "Amit";
    s1.age = 22;
    s1.grade = "A+";
    s1.roll_no = 3;
    cout<<s1.name;

    return 0;
}