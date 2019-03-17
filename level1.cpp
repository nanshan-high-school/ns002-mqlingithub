#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <char> people;
  int cp = 0, line;
  cin >> line;

  for (int i = 0; i < line; i++){
    char a;
    cin >> a;
    
    if (a == '(') {
      people.push(a);
    }
    else if (people.empty()) {
      continue;
    }
    else if (people.top() == '(') {
      people.pop();
      cp++;
    }
  }

  cout << cp;
}
