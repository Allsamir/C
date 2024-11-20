#include <bits/stdc++.h>
using namespace std;

class Student {
          public: 
          string name;
          unsigned int age;
          unsigned int roll;

          Student(string n, unsigned int age, unsigned int roll): name(n), age(age), roll(roll) {};

          void display() const {
                    cout << "Student: " << name << endl;
                    cout << "Age: " << age << endl;
                    cout << "Roll: " << roll << endl;
          }
};

int main(void)
{
          vector<Student> students; // creating a vector of Student and storing them in students container.

          int n;
          cin >> n;

          for(int x = 0; x < n; x++)
          {
                    string name;
                    unsigned int age, roll;
                    cin >> name >> age >> roll;
                    students.push_back(Student(name, age, roll));
          }

          for(const auto& student: students)
          {
                    student.display();                    
          }

          return 0;
}