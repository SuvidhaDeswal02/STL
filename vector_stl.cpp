
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int, int>> v;
    v.push_back({1, 3});
    v.emplace_back(2, 4);
    
    vector<int> v1(5, 20);
    vector<int> v2(5);
    v2.push_back(3);
    v2.emplace_back(4);
    vector<int> v3(3, 9);
    vector<int> v4(v3);

    for (vector<int>::iterator vit = v1.begin(); vit != v1.end(); ++vit) 
    {
        cout << *vit << " ";
    }
    cout << endl;

    
    for (vector<int>::iterator t = v2.end(); t != v2.begin();) 
    {
        --t; 
        cout << *t << " ";
    }
    cout << endl;

    return 0;
}



