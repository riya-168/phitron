#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
    Node(int val)
    {
        this ->val = val;
        this ->next = NULL;
    }
};
int main()
{
    
    Node * head = new Node (10);
    Node * a = new Node (20);
    Node* b = new Node (30);
    Node* c = new Node (40);
    Node* d = new Node (50);
    head ->next = a;
    a->next =b;
    b->next =c;
    c->next =d;
    d->next =b;

    Node *slow = head;
    Node * fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            //cycle deteected
            flag = true;
            break;
        }
    }
    if(flag == true)
    {
        cout<< "cycle detected";
    }
    else{
        cout<<"No cycle";
    }

   return 0;
}