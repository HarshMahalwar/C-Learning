#include <bits/stdc++.h>

#define ll long long int
#define qw priority_queue<int>
#define qwd priority_queue<int, vector<int>, greater<int>>
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data = data;
    }
};

node* insert(node* &head, int data){
    node* temp = new node(data);
    if(head == NULL)
        return temp;
    temp -> next = head;
    return temp;
}

void solve()
{

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