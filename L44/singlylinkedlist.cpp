#incldue<bits/stdc++.h>
using namespace std;

class node
{
   public:
   int data;
   node * next;

   node(int data)
   {
    this->data=data;
    this->next=NULL;
   }
};


int main()
{
    node * node1(10);
    cout<<node1->data;
    cout<<node1->next;
    return 0;
}