#include <iostream>
#include <string>
using namespace std;

string MyString;
string ReverseMyString;

void EnterString()
{
    cout << "Enter the word or sentence you want reversed: ";
    getline(cin, MyString);
    cout << "The word or sentence entered was: " << MyString << endl << endl;

}

void ReverseString()
{
    cout << MyString << " will now be reversed." << endl;
    for (int i = 0; i < MyString.length(); i++)
    {
        ReverseMyString = MyString[i] + ReverseMyString;
    }
    cout << MyString << " reversed is: " << ReverseMyString << endl << endl;

}

void CheckIfPalindrome()
{
    if (MyString == ReverseMyString)
    {
        cout << "This is a Palindrome!" << endl << endl;
    }
    else
    {
        cout << "This is not a Palindrome!" << endl << endl;
    }
        
}

int main()
{
    EnterString();
    ReverseString();
    CheckIfPalindrome();

}


