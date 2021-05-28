// lc 1796. SecondLargestDigitinaString.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

An alphanumeric string is a string consisting of lowercase English letters and digits.

Example 1:

Input: s = "dfa12321afd"
Output: 2
Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.
Example 2:

Input: s = "abc1111"
Output: -1
Explanation: The digits that appear in s are [1]. There is no second largest digit. 
 

Constraints:

1 <= s.length <= 500
s consists of only lowercase English letters and/or digits.
*/

#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int secondHighest(std::string s)
{

	if (s.size() == 0) return -1;

	set<int> digits;
	
	for (auto i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' and s[i] <= '9')
		{
			digits.insert(s[i] - '0');
		}
	}

	if (digits.empty() || digits.size() == 1) return -1;

	auto it = digits.rbegin();
	return *(++it);
}

int main()
{
	std::string s = "ck077";// cout << "s = "; cin >> s;

	cout << (secondHighest(s));

}
