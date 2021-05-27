// leetcode 1837.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///Given an integer n(in base 10) and a base k, return the sum of the digits of n after converting n from base 10 to base k./
///After converting, each digit should be interpreted as a base 10 number, and the sum should be returned in base 10.		/
///																															/
///	Constraints :																											/
///																															/
///	1 <= n <= 100																											/
///	2 <= k <= 10																											/
*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int From_10base_to_kbase(int& n, int& k)
{
	int ostatok;
	int sum = 0;
	
	while (n > 0)
	{
		ostatok = n % k;
		sum += ostatok;
		n /= k;
	}

	return sum;
}

int main()
{
	int n, k;
	do
	{
		system("cls");
		cout << "1 <= n <= 100" 
			<< endl 
			<< "2 <= k <= 10" 
			<< endl;
		cout << "n = "; cin >> n;
		cout << "k = "; cin >> k;

	} while ((k < 2) || (k > 10));

	cout << endl << (From_10base_to_kbase(n, k));
}
