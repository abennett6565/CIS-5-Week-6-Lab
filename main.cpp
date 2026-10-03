#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Lab 6 — Andrew Bennett
// CIS 5 Week 06 · Even and odd

int main() {
  // for loop
  int even_sum = 0;
  cout << "FOR LOOP: " << endl;
  // every iteration of the loop i increments by 2 starting from 0 to use all even numbers between 0 and 100
  for (int i = 0; i <= 100; i += 2)
  {
    //formats the output to be more readable
    cout << "even_sum: " << even_sum << " + i: " << i << " = ";
    //calculates the current total sum based on where in the iteration we are
    even_sum += i;
    cout << even_sum << endl;
  }
  
  //while loop
  int count = 1;
  int odd_sum = 0;
  cout << "WHILE LOOP: " << endl;
  // every iteration of the loop count increments by 2 starting from 1 to use all odd numbers between 0 and 100
  while(count <= 100)
  {
    //formats the output to be more readable
    cout << "odd_sum: " << odd_sum << " + count: " << count << " = ";
    //calculates the current total sum based on where in the iteration we are
    odd_sum = odd_sum + count;
    cout << odd_sum << endl;
    //increments count by 2
    count = count + 2;
  }
  cout << "Total sum of even numbers: " << even_sum << endl;
  cout << "Total sum of odd numbers: " << odd_sum << endl;

  return 0;
}
