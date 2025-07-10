#include <bits/stdc++.h>
using namespace std;

// Pattern 1
void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << "* ";
    cout << endl;
  }
}

// Pattern 2
void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cout << "* ";
    cout << endl;
  }
}

// Pattern 3
void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
      cout << j << " ";
    cout << endl;
  }
}

// Pattern 4
void pattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
      cout << i << " ";
    cout << endl;
  }
}

// Pattern 5
void pattern5(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
      cout << "* ";
    cout << endl;
  }
}

// Pattern 6
void pattern6(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
      cout << j << " ";
    cout << endl;
  }
}

// Pattern 7
void pattern7(int n)
{
  // for(int i = 1; i <= n; i++) {
  //   for(int k = 1; k <= n - i; k++)
  //     cout << "  ";
  //   for(int j = 1; j <= 2 * i - 1; j++)
  //     cout << "* ";
  //   cout << endl;
  // }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j <= n - i)
        cout << " ";
      else if (j >= i + n)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
}

// Pattern 8
void pattern8(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j <= n - i)
        cout << " ";
      else if (j >= i + n)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
}

// Pattern 9
void pattern9(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j <= n - i)
        cout << " ";
      else if (j >= i + n)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j <= n - i)
        cout << " ";
      else if (j >= i + n)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
}

// Pattern 10
void pattern10(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cout << "*";
    cout << endl;
  }

  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j <= i; j++)
      cout << "*";
    cout << endl;
  }
}

// Pattern11
void pattern11(int n)
{
  int start = 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      start = 1;
    else
      start = 0;
    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

// Pattern 12
void pattern12(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
      cout << j;
    for (int k = 1; k <= 2 * (n - i); k++)
      cout << " ";
    for (int l = 1; l <= i; l++)
      cout << l;
    cout << endl;
  }
}

// Pattern 13
void pattern13(int n)
{
  int start = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << start << " ";
      start += 1;
    }
    cout << endl;
  }
}

// Pattern 14
void pattern14(int n)
{
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cout << char(ch + j);
    cout << endl;
  }
}

// Pattern 15
void pattern15(int n)
{
  char ch = 'A';
  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
      cout << char(ch + j);
    cout << endl;
  }
}

// Pattern 16
void pattern16(int n)
{
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cout << char(ch + i);
    cout << endl;
  }
}

// Pattern 17
void pattern17(int n)
{
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n - i; k++)
      cout << " ";
    for (int j = 0; j <= i; j++)
      cout << char(ch + j);
    for (int l = i - 1; l >= 0; l--)
      cout << char(ch + l);
    cout << endl;
  }
}

// Pattern 18
void pattern18(int n)
{
  char ch = 'A' + n - 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cout << char(ch - j);
    cout << endl;
  }
}

// Pattern 19
void pattern19(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
      cout << "*";
    for (int k = 1; k <= 2 * (n - i); k++)
      cout << " ";
    for (int l = 1; l <= i; l++)
      cout << "*";
    cout << endl;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
      cout << "*";
    for (int k = 1; k <= 2 * (n - i); k++)
      cout << " ";
    for (int l = 1; l <= i; l++)
      cout << "*";
    cout << endl;
  }
}

// Pattern 20
void pattern20(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
      cout << "*";
    for (int k = 1; k <= 2 * (n - i); k++)
      cout << " ";
    for (int l = 1; l <= i; l++)
      cout << "*";
    cout << endl;
  }

  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
      cout << "*";
    for (int k = 1; k <= 2 * (n - i); k++)
      cout << " ";
    for (int l = 1; l <= i; l++)
      cout << "*";
    cout << endl;
  }
}

// Pattern 21
void pattern21(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}

// Pattern 22
void pattern22(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i, left = j, right = (2 * n - 2) - j, down = (2 * n - 2) - i;
      cout << (n - min(min(top, down), min(left, right)));
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  // pattern1(n);
  // pattern2(n);
  // pattern3(n);
  // pattern4(n);
  // pattern5(n);
  // pattern6(n);
  // pattern7(n);
  // pattern8(n);
  // pattern9(n);
  // pattern10(n);
  // pattern11(n);
  // pattern12(n);
  // pattern13(n);
  // pattern14(n);
  // pattern15(n);
  // pattern16(n);
  // pattern17(n);
  // pattern18(n);
  // pattern19(n);
  // pattern20(n);
  // pattern21(n);
  pattern22(n);
  return 0;
}