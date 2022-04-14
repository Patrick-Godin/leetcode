#include <iostream>
#include <string>

using namespace std;

int solver(string s, int n)
{
    int valleys = 0;

    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'D' && s[i + 1] == 'U')
            valleys++;
    }

    return valleys;
}

int main()
{
    string str;
    int n;
    cin >> n >> str;
    cout << solver(str, n) << endl;
    return 0;
}