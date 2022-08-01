#include <iostream>
using namespace std;

int main() {

  int x, n;
  bool prime = true;

  cout << "Enter The Number: ";
  cin >> n;

  if (n == 0 || n == 1) {
    prime = false;
  }

  for (x = 2; x <= n/2; ++x) {
    if (n % x == 0) {
      prime = false;
      break;
    }
  }

  if (prime)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
