#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(18);
    v.push_back(24);
    v.push_back(30);
    sort(v.begin(), v.end());
    int min = v[0], dd, count = 0;
    for (int i = 1; i <= min; i++)
    {
        if (v[0] % i == 0)
        {
            if (v[1] % i == 0)
            {
                if (v[2] % i == 0)
                {
                    if (v[3] % i == 0)
                    {
                        dd = i;
                    }
                }
            }
        }
    }
    int sum = 1;
    for (int j = 0; j < 4; j++)
    {
        sum *= v[j];
    }
    cout << sum / dd << endl;
    cout << dd << endl;
}