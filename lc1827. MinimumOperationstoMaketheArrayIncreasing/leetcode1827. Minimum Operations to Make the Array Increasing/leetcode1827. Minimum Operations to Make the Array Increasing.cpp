// leetcode1827. Minimum Operations to Make the Array Increasing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
You are given an integer array nums (0-indexed). In one operation, you can choose an element of the array and increment it by 1.

For example, if nums = [1,2,3], you can choose to increment nums[1] to make nums = [1,3,3].
Return the minimum number of operations needed to make nums strictly increasing.

An array nums is strictly increasing if nums[i] < nums[i+1] for all 0 <= i < nums.length - 1. An array of length 1 is trivially strictly increasing.

 

Example 1:

Input: nums = [1,1,1]
Output: 3
Explanation: You can do the following operations:
1) Increment nums[2], so nums becomes [1,1,2].
2) Increment nums[1], so nums becomes [1,2,2].
3) Increment nums[2], so nums becomes [1,2,3].
Example 2:

Input: nums = [1,5,2,4,1]
Output: 14
Example 3:

Input: nums = [8]
Output: 0
 

Constraints:

1 <= nums.length <= 5000
1 <= nums[i] <= 104
*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
using namespace std;
int minOperations(vector<int>& nums) 
{
    if (nums.size() < 2) return 0;
    int min = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        while (nums[i + 1] <= nums[i])
        {
            min += abs(nums[i + 1] - nums[i]) + 1;
            nums[i + 1] = nums[i] + 1;
        }
    }
    return min;
}
int main()
{
    vector<int> v{ 1,1,1 };
    cout << (minOperations(v));
    cout << endl;
    for (auto & s : v)
    {
        cout << s << " ";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
