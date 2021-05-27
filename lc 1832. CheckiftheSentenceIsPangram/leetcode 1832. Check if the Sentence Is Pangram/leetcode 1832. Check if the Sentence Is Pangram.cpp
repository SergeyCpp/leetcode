// leetcode 1832. Check if the Sentence Is Pangram.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//A pangram is a sentence where every letter of the English alphabet appears at least once.                                    /
//Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise. /
//                                                                                                                             /
//1 <= sentence.length <= 1000                                                                                                 /
//sentence consists of lowercase English letters.                                                                              /
*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

bool checkIfPangram(string sentence)
{
    vector<char> English_letters{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    set<char> st;
    if (size(sentence) < English_letters.size()) return false;
    for (int i = 0; i < sentence.size(); i++)
    {
        if (find(English_letters.begin(), English_letters.end(), sentence[i]) != English_letters.end())
        {
            st.insert(sentence[i]);
        }
    }
    if (st.size() == English_letters.size()) return true;
    else return false;
    
}
int main()
{
    
    string sentence = "jwtucoucmdfwxxqnxzkaxoglszmfrcvjoiunqqausaxxaaijyqdqgvdnqcaihwilqkpivenpnekioyqujrdrovqrlxovcucjqzjsxmllfgndfprctxvxwlzjtciqxgsxfwhmuzqvlksyuztoetyjugmswfjtawwaqmwyxmvo";
    cout << boolalpha << (checkIfPangram(sentence));
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
