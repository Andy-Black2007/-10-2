// from_10_sys_to_2_sys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> d_sys;
    int N, p, answ, last;
    p = 2;
    cin >> N;
    if (N == 1)
    {
        d_sys = { 1 };
    }
    else if (N == 0)
    {
        d_sys = { 0 };
    }
    else 
    {
        while (N >= 2)
        {
            answ = N / p;
            last = N - (answ * p);
            d_sys.push_back(last);
            N = answ;
        }
        d_sys.push_back(answ);
    }
   /* for (int i = 0; i < d_sys.size(); i++)
    {
        cout << d_sys[i];
    }
    cout << endl;*/
    reverse(d_sys.begin(), d_sys.end());
    for (int i = 0; i < d_sys.size(); i++)
    {
        cout << d_sys[i];
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
