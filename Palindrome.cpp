#include <iostream>
#include <string>
using namespace std;

//First we need a variable for the users input to be stored.
// 
//string UserInput
string UsersInput;

//we need a variable for the users input to be stored at reversal.
// 
//string ReverseUserInput.
string ReverseUsersInput;

//setup a function where the user can input there string.
//this function will not return anything.
void EnterString()
{
    cout << "Enter the word or sentence you want reversed: ";
    getline(cin, UsersInput);
    cout << "The word or sentence entered was: " << UsersInput << endl << endl;

}

//setup a function where the users input gets reversed.
//this function will not return anything.
void ReverseString()
{
    cout << UsersInput << " will now be reversed." << endl;
    //we could use a "FOR LOOP" to count up to the users string length then add to the Reversed string.
    //keeping in mind we start with zero.
    for (int i = 0; i < UsersInput.length(); i++)
    {
        ReverseUsersInput = UsersInput[i] + ReverseUsersInput;
    }
    cout << UsersInput << " reversed is: " << ReverseUsersInput << endl << endl;

}

//setup a function where the users input is check whether it is a palindrome or not reversed.
//palindrome: the word is spelled the same backward as forwards.
//this function will not return anything.
void CheckIfPalindrome()
{
    //if(UsersInput is equal to ReversedUsersInput)
    //{
        //print that it is a palindrome
    //}
    //if(UsersInput is not equal to ReversedUsersInput)
    //{
        //print that it is not a palindrome
    //}
    if (UsersInput == ReverseUsersInput)
    {
        cout << "This is a Palindrome!" << endl << endl;
    }
    else
    {
        cout << "This is not a Palindrome!" << endl << endl;
    }
        
}

//call defined functions
int main()
{
    EnterString();
    ReverseString();
    CheckIfPalindrome();

}


