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
void input_linked_list(Node *&head,Node *&tail)
{
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
}
int count_size(Node *&head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}
int main()
{
   Node* head1 = NULL;
   Node* tail1 = NULL;
   Node* head2 = NULL;
   Node* tail2 = NULL;
   input_linked_list(head1,tail1);
   input_linked_list(head2,tail2);
   int size1 =count_size(head1);
   int size2 =count_size(head2);
    if(size1 != size2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
   Node *tmp1 = head1;
   Node *tmp2 = head2;
   if(size1 != size2)
     {
        cout<<"NO"<<endl;
        return 0;
     }
   while(tmp1!=NULL && tmp2 != NULL)
   {
        if(tmp1->val != tmp2->val)
        {
           cout<<"NO"<<endl;
           return 0;
        }
        else{
             tmp1 = tmp1->next;
             tmp2 = tmp2->next;
        }
    }
    cout<<"YES"<<endl;
     
   return 0;
}