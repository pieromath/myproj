#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
  list<int> li;

  cout << boolalpha << li.empty() << noboolalpha << endl;

  li.push_back(1);
  li.push_front(0);

  cout << li.size() << endl;

  int myarray[] = {2,3,4,5,6,7,8,9};
  
  list<int> li2(myarray, myarray+7);

  copy(li2.begin(), li2.end(), ostream_iterator<int> (cout, " "));
  cout << endl;

  li.splice(li.end(), li, li2.begin(), li2.end());

  copy(li.begin(), li.end(), ostream_iterator<int> (cout, " "));
  cout << endl;

  li.push_front(5);

  copy(li.begin(), li.end(), ostream_iterator<int> (cout, " "));
  cout << endl;

  li.remove(5);

  copy(li.begin(), li.end(), ostream_iterator<int> (cout, " "));
  cout << endl;

  char a_fruit[][20] = {"apple", "orange", "pear", "quince"};
  list<string> fruit(a_fruit, a_fruit + 4);

  cout << "fruit:                 ";
  copy(fruit.begin(), fruit.end(), ostream_iterator<string> (cout, " "));
  cout << '\n';

  char a_citrus[][20] = {"grapefruit", "lemon", "lime"};
  list<string> citrus(a_citrus, a_citrus+3);
  cout << "citrus:                ";
  copy(citrus.begin(), citrus.end(), ostream_iterator<string> (cout, " "));
  cout << '\n';

  for (auto x: citrus)
    cout << x << " ";
  cout << endl;

  return 0;
}
