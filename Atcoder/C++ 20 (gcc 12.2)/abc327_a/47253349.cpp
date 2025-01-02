/// HHKB Programming Contest 2023(AtCoder Beginner Contest 327)
/// A - ab
/// 04 November, 2023

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    int Found = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if ((S[i] == 'a' && S[i + 1] == 'b') || (S[i] == 'b' && S[i + 1] == 'a'))
        {
            Found = 1;
            break;
        }
    }
    if (Found == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
