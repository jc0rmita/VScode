//Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
#include<iostream>
using namespace std;

struct dist
{
  int feet;
  int inch;
};

struct dist add(struct dist a, struct dist b)
{
  struct dist d;
  d.feet = a.feet+b.feet;
  if(a.inch+b.inch >= 12)
  {
    d.feet = d.feet+((a.inch+b.inch)/12);
    d.inch = (a.inch+b.inch)-(((a.inch+b.inch)/12)*12);
  }
  else
  {
    d.inch = a.inch+b.inch;
  }
  return d;
}

int main()
{
  struct dist d1 = {12,2};
  struct dist d2 = {14,11};

  struct dist d = add(d1,d2);

  cout << d.feet << " feet and " << d.inch << " inch" << endl;
  return 0;
}