#include <bits/stdc++.h>

#define ll long long int
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

class BFS{
    public:
    int v;
    list<int> *a;
    BFS(int v)
    {
        this -> v = v;
        a = new list<int>[v];
    }

    void insert(int s, int e)
    {
        a[s].push_back(e);
    }

    void bfs__(int itr)
    {
        bool d[1002];
        memset(d, false, sizeof(d));
        d[itr] = true;
        list<int> ar;
        ar.push_back(itr);  
        list<int>::iterator it;
        while(!ar.empty())
        {
            itr = ar.front();
            cout << itr << " ";
            ar.pop_front();
            for(auto it = a[itr].begin(); it != a[itr].end(); it++)
            {
                if(!d[*it])
                {
                    d[*it] = true;
                    ar.push_back(*it);
                } 
            }
        }
    }
};

// with masterseive algo i will store prime numbers from 0 to 10000 in an array.
// then i will change the value of the numbers of the given number one by one and then 
// return the first prime number which pops up by doing so by comparing it with the elements of the array.
// then i will insert them into the adjacency list.

void solve()
{
    int v, e, start, end;
    cin >> v >> e;
    BFS obj(v);
    cout << "Enter the starting point." << endl;
    cin >> start;
    cout << "Enter the ending point." << endl;  
    cin >> end;
    for (int i = 0; i < e; i++)
    {
        obj.insert(s, en);
    }
    obj.bfs__(1);
}

int main()
{
    func
        test
    {
        solve();
    }
    return 0;
}