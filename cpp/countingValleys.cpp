#include <iostream>
#include <string>

using namespace std;

int solver(string s, int n)
{
    int valleys = 0;
    //TODO
    // int level = 0;
    // bool inValley=0;

    // for (size_t i = 0; i < s.size() - 1; i++)
    // {
    //     if(level<0 && !inValley){
    //         inValley=1;
    //         valleys++;
    //     }
    //     level = 'D' ? level-- : level++;
    // }

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