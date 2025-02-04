#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 0;
  long fibonacci = 0, prev = 0, next = 1;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      fibonacci = 0;
    }
    else if (i == 2)
    {
      fibonacci = 1;
      prev = 0;
      next = 1;
    }
    else
    {
      fibonacci = prev + next;
      prev = next;
      next = fibonacci;
    }
    // cout << "debug[" << i << "]" << " fibonnaci: " << fibonacci << " prev: " << prev << " next: " << next << endl;
    if (i == n)
    {
      cout << fibonacci << ", ..." << endl;
    }
    else
    {
      cout << fibonacci << ", ";
    }
  }
  return 0;
}