#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <char> people;
  int cp = 0, line, fail = 0;
  long int money;
  cin >> line;

  for (int i = 0; i < line; i++){
    char a;
    cin >> a;

    if (a == '(') {
      people.push(a);
      fail++;
    }
    else if (a == ')' && people.empty()) {
      fail++;
      continue;
    }
    else if (people.top() == '(') {
      people.pop();
      cp++;
      fail--;
    }
  }

  money = cp * 5000 - fail * 3500;
  if (money < 0) {
    cout << cp << " " << fail << endl << "賠 " << -money;
  }
  else if (money > 0) {
    cout << cp << " " << fail << endl << "賺 " << money;
  }
  else {
    cout << "不賺不賠";
  }
}
