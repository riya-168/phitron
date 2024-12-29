#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};
void insert_at_tail(Node *&head,Node* &tail,int val)
{
    Node * newnode = new Node(val);
    //if head is null
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void reverse_doubly(Node*head,Node*tail)
{
    // array er jonno
    // for(int i=0;int j=n-1; i<j ; i++,j--)
    // {
    //     swap(i,j);
    // }
    for(Node *i=head, *j=tail; i!=j && i->prev!=j; i=i->next, j=j->prev)
    {
        swap(i->val,j->val);
    }



}
void print_forward(Node*head)
{
    Node * tmp = head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_forward(head);
    reverse_doubly(head,tail);
    print_forward (head);
    cout << head->val << " "<< tail->val <<endl;
   
   return 0;
}