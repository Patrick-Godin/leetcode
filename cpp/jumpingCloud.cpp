#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> v)
{
    int answer = 0;
    for (size_t i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 2] != 1)
        {
            i++;
        }
        answer++;
    }

    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    cout<<solve(vec)<<endl;
    return 0;
}