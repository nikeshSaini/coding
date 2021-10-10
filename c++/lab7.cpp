#include <iostream>
using namespace std;
class prime
{
public:
  void chk(int n)
  {
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        cout << "not";
        break;
      }
    }
    cout << "prime";
  }
};
int main()
{
  int n;
  cout << "enter the number:";
  cin >> n;
  prime p1;
  p1.chk(n);
}
