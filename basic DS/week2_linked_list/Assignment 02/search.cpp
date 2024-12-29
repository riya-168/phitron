#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    long long val;
    Node *next;
    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, long long val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
long long search_value(Node *&head, long long digit)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        // if (tmp->next == NULL) {
        //     return -1;
        // }
        if (tmp->val == digit)
        {
            return cnt;
        }
        tmp = tmp->next;
        cnt++;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        long long val;
        long long digit;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        cin >> digit;
        long long index = search_value(head, digit);
        cout << index << endl;
        

    }
    return 0;
}