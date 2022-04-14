#include <iostream>
#include <vector>

using namespace std;

vector<int> solveTrivial(vector<int> vec, int d)
{
    int temp;
    for (size_t i = 0; i < d; i++)
    {
        temp = vec.front();
        for (size_t j = 0; j < vec.size(); j++)
        {
            vec[j] = vec[j + 1];
        }
        vec[vec.size() - 1] = temp;
    }

    return vec;
}

vector<int> solve(vector<int> vec, int d)
{
    vector<int> temp(vec.begin()+d, vec.end());

    for (size_t i = 0; i < d; i++)
    {
        temp.push_back(vec[i]);
    }
    

    return temp;
}

int main()
{

    int n, d;
    cin >> n >> d;
    vector<int> vec(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    auto answer = solve(vec, d);
    for (auto i : answer)
        cout << i << " ";

    cout << endl;

    return 0;
}