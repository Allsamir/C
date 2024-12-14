#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
          string name;
          unsigned int classs;
          char section;
          unsigned int ID;
          unsigned int math_marks;
          unsigned int english_marks;

          Student(string n = "", unsigned int c = 0, char s = 'A', unsigned int id = 0, unsigned int m_marks = 0, unsigned int e_marks = 0)
              : name(n), classs(c), section(s), ID(id), math_marks(m_marks), english_marks(e_marks)
          {
          }
};

bool Compare(Student l, Student r)
{
          if(l.english_marks == r.english_marks)
          {
                    if(l.math_marks == r.math_marks)
                    {
                              return l.ID < r.ID;
                    }
                    else
                    {
                              return l.math_marks > r.math_marks;
                    }
          }
          else
          {
                    return l.english_marks > r.english_marks;
          }
}

int main()
{

          int n;
          cin >> n;

          Student arr[n];

          for (int x = 0; x < n; x++)
          {
                    string name;
                    unsigned int classs, id, math_m, english_m;
                    char section;

                    cin >> name >> classs >> section >> id >> math_m >> english_m;

                    arr[x] = Student(name, classs, section, id, math_m, english_m);
          }

          sort(arr, arr + n, Compare);

          // for printing
          for (int x = 0; x < n; x++)
          {
                    cout << arr[x].name << " " << arr[x].classs << " " << arr[x].section << " " << arr[x].ID << " " << arr[x].math_marks << " " << arr[x].english_marks
                         << endl;
          }

          return 0;
}
