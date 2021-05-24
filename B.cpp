#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int num)
{
    if(num < 2) { return false; }
    if(num == 2) { return true; }
    if(num % 2 == 0) { return false; }
    for(int i = 3; i <= sqrt(num); i += 2)
    {
        if(num % i == 0) { return false; }
    }
    return true;
}

int main()
{
    const int from = 101000000;
    const int to   = 102000000;

    for (int i = from; i <= to; ++i) {
        if(i % 2 == 0){
            int p = sqrt(i/2);
            if (p*p*2 == i and isPrime(p)){
                cout  << i << endl;
            }
        }
    }
    return 0;
}


