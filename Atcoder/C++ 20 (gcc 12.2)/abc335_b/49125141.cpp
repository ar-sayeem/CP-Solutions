/// AtCoder Beginner Contest 335 (Sponsored by Mynavi)
/// 06 January, 2023
/// B - Tetrahedral Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n;
    cin >> n;
    for(int i=0; i<=n; i++)
        for(int j=0; j<=n; j++)
            for(int k=0; k<=n; k++)
                if(i+j+k<=n)
                    cout << i << ' ' << j << ' ' << k << '\n' ;
    return 0;
}
