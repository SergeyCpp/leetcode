// leetcode1790. Check if One String Swap Can Make Strings Equal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
You are given two strings s1 and s2 of equal length. 
A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.
Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

Example 1:

Input: s1 = "bank", s2 = "kanb"
Output: true
Explanation: For example, swap the first character with the last character of s2 to make "bank".
Example 2:

Input: s1 = "attack", s2 = "defend"
Output: false
Explanation: It is impossible to make them equal with one string swap.
Example 3:

Input: s1 = "kelb", s2 = "kelb"
Output: true
Explanation: The two strings are already equal, so no string swap operation is required.
Example 4:

Input: s1 = "abcd", s2 = "dcba"
Output: false 

Constraints:

1 <= s1.length, s2.length <= 100
s1.length == s2.length
s1 and s2 consist of only lowercase English letters.
*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool areAlmostEqual(string& s1, string& s2) {
    int k = 0;
    vector<int> c;
    for (auto i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            c.push_back(i);
    }
    if (c.size() == 0) return true;
    else if (c.size() == 2 && s1[c[0]] == s2[c[1]] && s1[c[1]] == s2[c[0]]) return true;
    else return false;
    
}
int main()
{
    string s1 = "caa", s2 = "aaz";//false
    cout << boolalpha << areAlmostEqual(s1, s2);
}