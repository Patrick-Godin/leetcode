#include <iostream>
#include <string>

using namespace std;

long solver(string s, int n)
{
    int count = 0;
    int remainderCtr = n % s.size();
    int remainder = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        {
            if (remainderCtr > 0)
            {
                if (s[i] == 'a')
                {
                    remainder++;
                }
                remainderCtr--;
            }
        }
    }

    return count * (n / s.size()) + remainder;
}

int main()
{
    string str;
    int n;
    cin >> str >> n;
    cout<<solver(str, n)<<endl;
    return 0;
}