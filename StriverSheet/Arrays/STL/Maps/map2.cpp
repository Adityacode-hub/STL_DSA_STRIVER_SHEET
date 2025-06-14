#include<iostream>
#include<map>

using namespace std;

int main() {
  map < int, string > m1;
  m1.insert(pair < int, string > (1, "a"));//ascending order
  map < int, string, greater < int >> m2;//here we have defined the custom comperator  for descending order
  m2.insert(pair < int, string > (1, "a"));
  m1[2] = "ab";
  m1[3] = "abc";
  m1[4] = "abcd";
  m2[2] = "ab";
  m2[3] = "abc";
  m2[4] = "abcd";

  map < int, string > ::iterator it;

  cout << "Map1\n";
  for (it = m1.begin(); it != m1.end(); it++)
    cout << it -> first << " " << it -> second << '\n';
  cout << '\n';
  cout << "Map2\n";
  for (it = m2.begin(); it != m2.end(); it++)
    cout << it -> first << " " << it -> second << '\n';
  cout << '\n';

  m1.erase(1);
  m2.erase(m2.find(1));
  cout << "After erasing element, size of map1 is " << m1.size() << '\n';
  cout << "After erasing element, size of map2 is " << m2.size() << '\n';
  int val = 3;
  if (m1.find(val) != m1.end())
    cout << "The map1 contains " << val << " as key" << endl;
  else
    cout << "The map1 does not contains " << val << " as key" << endl;
  cout << "Elements of map1\n";
  for (it = m1.begin(); it != m1.end(); it++)
    cout << it -> first << " " << it -> second << '\n';
  cout << '\n';
  cout << "Elements of map2\n";
  for (it = m2.begin(); it != m2.end(); it++)
    cout << it -> first << " " << it -> second << '\n';
  cout << '\n';

  m1.clear();
  if (m1.empty() == true) {
    cout << "Map1 is empty now!";
  }
  return 0;
}