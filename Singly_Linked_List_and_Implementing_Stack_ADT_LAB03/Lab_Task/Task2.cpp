/*
Task 2 Given a SinglyLinkedList, print the number of elements in that list. Sample Input/Output is given below
--------------------------------------------------------------------------------------------------------------
Sample Input                Sample Output
1 → 2 → 3 → 4 → NULL        4
NULL                        0
1 → NULL                    1
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class Linked_list {
private:
    node *head, *tail;
    static int count;
public:
    Linked_list () {
        count = 0;
        head = NULL;
        tail = NULL;
    }

void add_node (int data) {
    node *tmp = new node;
    tmp->data = data;

    tmp->next = NULL;

    if(head == NULL) {
        head = tmp;
        tail = tmp;
    } else {
        tail->next = tmp;
        tail = tail->next;
    }
}

node* getHead () {
    return head;
}


static void display (node* head) {
    if(head == NULL) {
        cout<<Linked_list::count<<endl;
    } else {
        Linked_list::count++;
        display(head->next);
    }
}
};

int Linked_list::count;

int main() {
    Linked_list obj1;

    obj1.add_node(1);
    obj1.add_node(2);
    obj1.add_node(3);
    obj1.add_node(4);

    Linked_list::display(obj1.getHead());
    //obj1.display(obj1.getHead());

    Linked_list obj2;
    obj2.display(obj2.getHead());

    Linked_list obj3;
    obj3.add_node(1);
    //obj3.display(obj3.getHead());
    Linked_list::display(obj3.getHead());

}
