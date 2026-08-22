#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);
    Node* four = new Node(50);
    Node* five = new Node(1000);

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = five;

    int target = 40;

    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == target) {
            cout << temp->data << endl;
            break;
        }

        temp = temp->next;
    }

    return 0;
}