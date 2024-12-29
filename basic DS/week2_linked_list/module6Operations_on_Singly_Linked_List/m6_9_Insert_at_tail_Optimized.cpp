#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void insert_at_tail(Node *&head,Node* tail,int val)
{
    Node * newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;

}
void insert_at_any_position(Node* &head,int pos,int val)
{
    Node * newnode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<pos;i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next = newnode;

}
void print_linked_list(Node *head)
{
    Node *tmp =head;
    while(tmp!=NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

}
int main()
{
   Node *head = new Node (10);
   Node *a = new Node (20);
   Node *tail = new Node (60);
   head->next=a;
   a->next=tail;
    insert_at_any_position(head,2,100);
    print_linked_list(head);
   return 0;
}