/*
Task 3 Given a SinglyLinkedList, print the difference between two adjacent keys. Sample Input/Output is Problem given below.
--------------------------------------------------------------------------------------------------------
Sample Input                Sample Output
10 → 5 → 9 → 15 → NULL      5 -4 6
NULL                        Nothing to print
1 → NULL                    Nothing to print
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
    static int temp;
public:
    Linked_list () {
        temp = 0;
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
    if(head == NULL || head->next == NULL) {
        if(Linked_list::temp == 0) {
            cout<<"Nothing to print"<<endl;
        }
    } else {
        Linked_list::temp++;
        cout<<(head->data)-(head->next->data)<<" ";
        display(head->next);
    }
}
};

int Linked_list::temp;


int main() {
    // cerating first object
    Linked_list obj1;

    obj1.add_node(10);
    obj1.add_node(5);
    obj1.add_node(9);
    obj1.add_node(15);

    Linked_list::display(obj1.getHead());
    cout<<endl;

    // cerating first object

    Linked_list obj2;
    obj2.add_node(NULL);
    Linked_list::display(obj2.getHead());

    // cerating first object

    Linked_list obj3;
    obj3.add_node(1);
    Linked_list::display(obj3.getHead());

}

