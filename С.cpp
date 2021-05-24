#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    string s;
    int max_s = 1, size = 1;
    getline(fin, s);
    char symb = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            size++;
            if (size > max_s)
            {
                max_s = size;
                symb = s[i];
            }
        }
        else
            size = 1;
    }
    cout << symb << ' ' << max_s;
}