﻿// leetcode 1. two sums.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int& target)
{
    vector<int> res;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (nums[i] + nums[j] == target)
            {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return res;
}
int main()
{
    vector<int> nums{ 3,3 };
    int target = 6;
    vector<int> s = twoSum(nums, target);
    cout << "[ " << s[0] << " " << s[1] << " ]";
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