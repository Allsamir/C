#include <bits/stdc++.h>
using namespace std;

class Student 
{
          public: 
          unsigned int age;
          unsigned int year;

          Student(unsigned int age, unsigned int year)
          {
                    this->age = age;
                    this->year = year;
          }
};

int main(void)
{
          Student allsamir(20, 2024);
          cout << "Age: " << allsamir.age << endl;
          cout << "Year: " << allsamir.year << endl;

          return 0;
}