// leetcode 1816. Truncate Sentence.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.                                         //
Each of the words consists of only uppercase and lowercase English letters (no punctuation).                                                   //
                                                                                                                                               //
For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.                                                          //
You are given a sentence s​​​​​​ and an integer k​​​​​​. You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.//
                                                                                                                                               //
                                                                                                                                               //
                                                                                                                                               //
Example 1:                                                                                                                                     //
                                                                                                                                               //
Input: s = "Hello how are you Contestant", k = 4                                                                                               //
Output: "Hello how are you"                                                                                                                    //
Explanation:                                                                                                                                   //
The words in s are ["Hello", "how" "are", "you", "Contestant"].                                                                                //
The first 4 words are ["Hello", "how", "are", "you"].                                                                                          //
Hence, you should return "Hello how are you".                                                                                                  //
Example 2:                                                                                                                                     //
                                                                                                                                               //
Input: s = "What is the solution to this problem", k = 4                                                                                       //
Output: "What is the solution"                                                                                                                 //
Explanation:                                                                                                                                   //
The words in s are ["What", "is" "the", "solution", "to", "this", "problem"].                                                                  //
The first 4 words are ["What", "is", "the", "solution"].                                                                                       //
Hence, you should return "What is the solution".                                                                                               //
Example 3:                                                                                                                                     //
                                                                                                                                               //
Input: s = "chopper is not a tanuki", k = 5                                                                                                    //
Output: "chopper is not a tanuki"                                                                                                              //
                                                                                                                                               //
                                                                                                                                               //
Constraints:                                                                                                                                   //
                                                                                                                                               //
1 <= s.length <= 500                                                                                                                           //
k is in the range [1, the number of words in s].                                                                                               //
s consist of only lowercase and uppercase English letters and spaces.                                                                          //
The words in s are separated by a single space.                                                                                                //
There are no leading or trailing spaces.                                                                                                       //
*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

string truncate(string& s, int& k)
{
    string truncated_s;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == ' ')
        {
            k--;
            if (k == 0) break;
            truncated_s.push_back(s[i]);
        }

        else
        {
            truncated_s.push_back(s[i]);

        }
    }


    return truncated_s;
}
int main()
{
    string s = "Hello how are you Contestant"; 
    int k = 4;
    //getline(cin, s);
    cout << (truncate(s, k));
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
