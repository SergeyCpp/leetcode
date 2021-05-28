// lc 1748. SumofUniqueElements.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
Return the sum of all the unique elements of nums.

Example 1:
Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.

Example 2:
Input: nums = [1,1,1,1,1]
Output: 0
Explanation:There are no unique elements, and the sum is 0.

Example 3:
Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
*/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int sumOfUnique(vector<int>& nums)
{
    if (nums.size() < 2) return nums[0];

    vector<int> n;
    int sum = 0;

    for (auto& s : nums)
    {
        if ((count(nums.begin(), nums.end(), s) <= 1) and (find(n.begin(), n.end(), s) == n.end()))
            sum += s;
    }

    return sum;
}

int main()
{
    vector<int> nums = { 1,2,3,4,5 };

   
    cout << sumOfUnique(nums);
}
