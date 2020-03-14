
// C++ program move all special char to the end of the string
//or placing all the X to the beginning of string
//asked in google
#include <bits/stdc++.h>
using namespace std;

// Function return a string with all special
// chars to the end
string moveAllSC(string str)
{
    // Take length of string
    int len = str.length();

    // traverse string
    string res1 = "", res2 = "";
    for (int i = 0; i < len; i++)
    {
        char c = str.at(i); //string at() in C++ std::string::at can be used to extract characters by characters from a given string.

        // check char at index i is a special char
        if (c=='x' || c == 'X ') //  if (isalnum(c) || c == ' ')
            res1 += c;
        else
            res2 += c;
    }

    return res1 + res2;
}

// Driver code
int main()
{
    string str1("Xaxnashk");
    string str2(" rashxadjkxs");
    string str = str1 + str2;
    cout << moveAllSC(str) << endl;
    return 0;
}
