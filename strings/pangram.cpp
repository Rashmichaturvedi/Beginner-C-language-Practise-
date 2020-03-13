/*pangram program in c++
Pangram is a sentence containing every letter in the English alphabet. Given a string, find
 all characters that are missing from the string, i.e., the characters that can make string a Pangram.
 We need to print output in alphabetic order*/
 // to be added to make Pangram
#include<bits/stdc++.h>  // In programming contests,
// using this file is a good idea, when you want to reduce the time wasted in doing chores; especially when your rank is time sensitive.
using namespace std;
const int MAX_CHAR = 26;

// Returns characters that needs to be added
// to make str
string missingChars(string str)
{
    // A boolean array to store characters
    // present in string.
    bool present[MAX_CHAR] = {false};

    // Traverse string and mark characters
    // present in string.
    for (int i=0; i<str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            present[str[i]-'a'] = true;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            present[str[i]-'A'] = true;
    }

    // Store missing characters in alphabetic
    // order.
    string res = "";
    for (int i=0; i<MAX_CHAR; i++)
        if (present[i] == false)
            res.push_back((char)(i+'a')); //push back function is used to push elements into a vector from the back.
            //The new value is inserted into the vector at the end, after the current last element and the container size is increased by 1.

    return res;
}

// Driver program
int main()
{
    string str = "The quick brown fox jumps "
                 "over the dog";
    cout << missingChars(str);
    return 0;
    }
