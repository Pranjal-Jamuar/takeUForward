#include <bits/stdc++.h>
using namespace std;

// C++ STL is divided into 4 parts ->
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators

// Pairs(part of the utility library) -> self-explanatory as the name suggests, it takes a pair of values
void pairsExplained()
{
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second;
  cout << endl;

  pair<int, pair<int, int>> q = {1, {2, 3}};
  cout << q.first << " " << q.second.second << " " << q.second.first;
  cout << endl;

  pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
  cout << arr[1].second;
}

int main()
{
  pairsExplained();
  return 0;
}
