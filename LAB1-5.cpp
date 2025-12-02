#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(const string & text, int start, int end) {
  if (start >= end)
    return true;

  if (text[start] != text[end])
    return false;

  return isPalindrome(text, start + 1, end - 1);
}

int main() {
  string text;

  cout << "Input a string: ";
  getline(cin, text);

  text.erase(remove(text.begin(), text.end(), ' '), text.end());

  bool palindrome = isPalindrome(text, 0, text.length() - 1);

  if (palindrome)
    cout << "The string is a palindrome." << endl;
  else
    cout << "The string is not a palindrome." << endl;

  return 0;
}