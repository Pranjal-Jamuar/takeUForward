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

  // Nested Properties of Pair
  pair<int, pair<int, int>> q = {1, {2, 3}};
  cout << q.first << " " << q.second.second << " " << q.second.first;
  cout << endl;

  pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
  cout << arr[1].second;
}

// Vector (very important) - Dynamic container which can increase and its deecrease its size according to the demand/need. It's a container only, similiar to array which stores elements.

// Best place to use vectors is when you don't know the size of a data-structure which you're using in a problem.

void explainVector()
{
  vector<int> v;     // creates an empty container
  v.push_back(1);    // takes "1" in the empty container
  v.emplace_back(2); // similar o "push_back", dynamically increases the size of container and enters "2" into it, faster than push_back

  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 3); // implicitly understands that it is a pair and takes the input as a pair so no need to use the braces explicitly.

  // Declaration with a fixed size
  vector<int> vect(5, 100); //  creates a container of size 5 containing "100" as every element

  vector<int> s(5); //  creates a container of size each element being some garbage value or "0"

  vector s1(s); //  creates a copy of container "s" in "s1"
}

int main()
{
  pairsExplained();
  return 0;
}
