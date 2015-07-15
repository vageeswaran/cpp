#include <bits/stdc++.h>

using namespace std;

int main()

{

    string toBeReversed;

    cout << "Enter a string to be reversed: ";

    getline(cin, toBeReversed);

    cout << toBeReversed << " when reversed, is ";

    reverse(toBeReversed.begin(),
            toBeReversed.end());

    cout << toBeReversed << endl;

    return 0;
}
