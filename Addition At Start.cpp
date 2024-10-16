#include<iostream>
using namespace std; 

class List
{
    public: 
    int data; 
    List* next;
    List(int num)
    {
        data = num;
        next = NULL;
    }
};
void insert_head(List* &head, int data)
{
    List* new_node = new List(data);
    new_node->next = head;
    head = new_node;
}
void display(List* head)
{
    List* temp = head; 
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;  
}

int main()
{
    List* head = NULL;
    insert_head(head, 30);
    display(head);
    
    insert_head(head, 32);
    display(head);
    
    insert_head(head, 35); 
    display(head);

    return 0;
}


/*
OUTPUT: 
30 -> NULL
32 -> 30 -> NULL
35 -> 32 -> 30 -> NULL
*/
