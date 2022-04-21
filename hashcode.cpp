#include <bits/stdc++.h>

#define ll long long int
#define qw priority_queue<int>
#define qwd priority_queue<int, vector<int>, greater<int>>
#define pp pair<int, int>
#define func                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test   \
    int t = 1; \
    while (t--)

using namespace std;

class contributor{
    public:
    string name;
    int num_of_skills;
    vector<pair<int, string>> skill;
    contributor* next;
    contributor(string name, int num_of_skills, vector<pair<int, string>>& skill)
    {
        this -> name = name;
        this -> num_of_skills = num_of_skills;
        this -> skill = skill;
        this -> next = NULL;
    }
};


// anna
// num_of_skills = 2
// skill:
// 1, c++
// 3, python

contributor* insert(contributor* head, string name, int num_of_skills, vector<pair<int, string>>& skill)
{
    contributor* t = new contributor(name, num_of_skills, skill);
    if(head == NULL)
        return t;
    t -> next = head;
    return head;
}

contributor* feed_contributor(contributor* head)
{
    string name;
    int num_of_skills;
    vector<pair<int, string>> skill;
    cin >> name >> num_of_skills;
    for (int i = 0; i < num_of_skills; i++)
    {
        string skill_name;
        int skill_level;
        cin >> skill_name >> skill_level;
        skill.push_back(make_pair(skill_level, skill_name));
    }
    head = insert(name, num_of_skills, skill);
    return head;
}

void display(contributor* head){
    contributor* t = head;
    int i = 0;
    while(t != NULL){
        cout << t->name << endl;
        cout << t->num_of_skills << endl;
        for (int i = 0; i < t->num_of_skills; i++)
        {
            cout << t->skill[i].first << t->skill[i].second << endl;
        }
        t = t->next;
    }
}

void solve()
{
    contributor* head= NULL;
    int num_of_contributors, num_of_projects;
    cin >> num_of_contributors >> num_of_projects;
    for (int i = 0; i < num_of_contributors; i++)
    {
        head = feed_contributor(head);
    }
    display(head);
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