#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    long long val;
    Node *next;
    Node(long long val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void insert_at_tail(Node *&head,Node*& tail,long long val)
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
void max_min(Node* head,long long & min_val,long long & max_val)
{
    min_val=LLONG_MAX;
    max_val = LLONG_MIN;
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val < min_val)
        {
            min_val = tmp->val;
        }
        if(tmp->val > max_val)
        {
            max_val=tmp->val;
        }
        tmp = tmp->next;
    }
}
int main()
{
   Node* head = NULL;
   Node* tail = NULL;
   long long val;
   long long min_val,max_val;
   while(true)
   {
    cin>> val;
    if(val == -1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
   }
   if(head == NULL){
    cout <<"0"<<endl;
    return 0;
   }
   max_min(head,min_val,max_val);
   cout<<(max_val) - (min_val)<<endl;
   return 0;
}