// Write recursive function to check if given string is palindrome (palindrome reads the same backward as forward Like Civic, Level)
#include <iostream>
using namespace std;
bool check_palindrome(string alpha, int left, int right)
{
    if (left >= right)
        return true;
    else if (alpha[left] == alpha[right])
        return check_palindrome(alpha, left + 1, right - 1);
    else
        return false;
}
int main()
{
    string alpha;
    cout << "Enter a string (all small or all capital letters): "; cin >> alpha;
    cout << "The length of string is: " << alpha.length() << endl;
    if (check_palindrome(alpha, 0, alpha.length() - 1))
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}