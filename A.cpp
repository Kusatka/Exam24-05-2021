#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int bin(int numb)
    {
    vector <int> out;
    while (numb > 0)
        {
        int hex = numb % 2;
        out.push_back(hex);
        numb /= 2;
        }
    int k = out.size();
    return out[0];
    }

    int bin_sum(int n){
    int out = 0;
    while (n > 0)
        {
        int hex = n % 2;
        if (hex)
        out++;
        n /= 2;
        }
    return out;
    }

int main() 
{
    int a, b;
    int count = 0;
    int max = -1;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
    if (bin(abs(i)) == 0 and bin_sum(abs(i)) == 5 and i % 10 != 0){
    count++;
    if (i > max)
    max = i;
    }
}

if (!count)
    {
    cout << 0 << " " << 0;
    return 0;
    }

cout << count << " " << max << endl;
return 0;
}