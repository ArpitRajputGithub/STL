#include <iostream>
#include <vector>
// #include <iterator>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    // vector of pair
    // vector<pair<int, int>> v; // declaration
    //
    // v = {{1, 2}, {2, 3}, {3, 4}}; // vector of pair
    //
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << endl
    //          << v[i].second;
    // }

    // Array of vectors
    int N;
    cin >> N;

    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; i++)
        {
            int ele;
            cin >> ele;
            v[i].push_back(ele);
        }
    }
    for(int i=0; i<N; i++){
        printVec(v[i]);
    }
}
