#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <char> people;
  int cp = 0, line, fail = 0;
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

  cout << cp << " " << fail;
}
