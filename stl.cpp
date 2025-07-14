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

  cout << v[0] /* used to call an element from the vector container */ << " " << v.at(0) /* not used much */;

  //  Iterators - points to the memory address of the element
  vector<int>::iterator it = v.begin(); // v.begin() points to the memory address of the first element in the container.
  it++;                                 // moves one place ahead in the contiguous memory location
  cout << *(it) << " ";                 // prints 2

  vector<int>::iterator it = v.end(); //  the memory location right after the last element
  // vector<int>::iterator it = v.rbegin();
  // vector<int>::iterator it = v.rend();
  // never used, just know the syntax and explain if asked in the interview.

  //  printing vector container elements using iterator
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    cout << *(it) << " ";

  for (auto it = v.begin(); it != v.end(); it++) //  auto automatically assigns the data-type to the container according to the element; useful if we don't know the data-type of any element
    cout << *(it) << " ";

  for (auto it : v)
    cout << it << " ";

  //  Delete/Erase from a vector container
  v.erase(v.begin() + 1); //  erases the element one after the first element

  v.erase(v.begin() + 2, v.begin() + 4); //   erases multiple elements at the same time

  //  Insert function
  vector<int> v(2, 100);
  v.insert(v.begin(), 300);       //  {300, 100, 100}
  v.insert(v.begin() + 1, 2, 10); //  {300, 10, 10, 100, 100}

  //  Copy a vector
  vector<int> copy(2, 50);                       //  {50, 50}
  v.insert(v.begin(), copy.begin(), copy.end()); //  {50, 50, 300, 10, 10, 100, 100}

  cout << v.size(); //  outputs the size of the vector

  v.pop_back(); //  removes elements from the last

  //  v1 -> {10, 20}
  vector<int> v1(10, 20);
  //  v2 -> {30, 40}
  vector<int> v2(30, 40);
  v1.swap(v2); //  v1 -> {30, 40}, v2 -> {10, 20}

  v.clear(); //  erases the whole vector, doesn't matter what size it is

  cout << v.empty(); // outputs "true" if the vector is empty and "false" if it's not empty
}

void explainList()
{
  // Similar to vectos, provied front operations as well
  list<int> ls;

  ls.push_back(2);    //  {2}
  ls.emplace_back(4); //  {2, 4}

  ls.push_front(5);   //  {5, 2, 4}
  ls.emplace_front(); //  {2, 4}

  // rest fubnctions are same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque()
{
  deque<int> dq;
  dq.push_back(1);     //  {1}
  dq.emplace_back(2);  //  {1, 2}
  dq.push_front(4);    //  {4, 1, 2}
  dq.emplace_front(3); //  {3, 4, 1, 2}

  dq.pop_back();  //  {3, 4, 1}
  dq.pop_front(); //  {4, 1}

  dq.back();
  dq.front();

  // rest functions are same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap
}

int main()
{
  pairsExplained();
  return 0;
}
