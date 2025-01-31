#include<bits/stdc++.h>

using namespace std;

class Student
{
          public:
            string name;
            int roll;
            int marks;

            Student(string name, int roll, int marks) : name(name), roll(roll), marks(marks) {}
};


class cmp
{
          public:
              bool operator()(Student l, Student r)
              {
                              if(l.marks == r.marks)
                              {
                                        return l.roll < r.roll;
                              }
                              return l.marks < r.marks;
              }
};

int main(void)
{
          priority_queue<Student, vector<Student>, cmp> pq;

          int n;
          cin >> n;

          for(int x = 0; x < n; x++)
          {
                    string name;
                    int roll, marks;

                    cin >> name >> roll >> marks;

                    Student obj(name, roll, marks);

                    pq.push(obj);
          }

          while(!pq.empty())
          {
              cout << pq.top().name << " " << pq.top().marks << " " << pq.top().roll << endl;
              pq.pop();
          }
}
