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
void insert_at_tail(Node *&head,Node*& tail,int val)
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
void delete_head(Node *&head)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}
int main()
{
   Node* head = NULL;
   Node* tail = NULL;
   int val;
   while(true)
   {
    cin>> val;
    if(val == -1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
   }
   delete_head(head);
   print_linked_list(head);
   return 0;
}