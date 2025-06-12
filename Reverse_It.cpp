#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;

    void input()
    {
        cin >> name >> cls >> section >> id;
    }

    void print()
    {
        cout << name << " " << cls << " " << section << " " << id << endl;
    }
};

int main()
{
    int N;
    cin >> N;
    Student students[100];
    char sections[100];

    for (int i = 0; i < N; i++)
    {
        students[i].input();
        sections[i] = students[i].section;
    }

    for (int i = 0; i < N; i++)
    {
        students[i].section = sections[N - 1 - i];
    }

    for (int i = 0; i < N; i++)
    {
        students[i].print();
    }

    return 0;
}