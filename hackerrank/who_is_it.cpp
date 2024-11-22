#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
          int id;
          string name;
          char section;
          int marks;

          Student(int id = 1, string name = "", char section = 'A', int marks = 0)
          {
                    this->id = id;
                    this->name = name;
                    this->section = section;
                    this->marks = marks;
          }
};

int main(void)
{
          // TODO:
          // 1. Take the test case input
          int t;
          cin >> t;

          for (int i = 0; i < t; i++)
          {         
                    Student students[3];

                    // 2. Read the student data for each test case
                    for(int x = 0; x < 3; x++)
                    {
                              int id, marks;
                              string name;
                              char section;

                              cin >> id >> name >> section >> marks;

                              students[x] = Student(id, name, section, marks);
                    }

                    // 3. Find the max mark student
                    Student maxStudent[1];

                    // 4. Find the student with the maximum mark
                    int maxMark = students[0].marks;
                    for(int x = 0; x < 3; x++)
                    {
                              if(students[x].marks > maxMark)
                              {
                                        maxMark = students[x].marks;
                                        maxStudent[0] = students[x];
                              }

                    }
                    // if the marks are similer than print the smaller id student

                    if(maxStudent[0].marks == 0)
                    {
                              maxStudent[0] = students[0];
                    }

                    // Print the student

                    cout << maxStudent->id << " " << maxStudent->name << " " << maxStudent->section << " " << maxStudent-> marks << endl; 
          }

          return 0;
}