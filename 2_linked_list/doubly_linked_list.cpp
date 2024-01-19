#include<bits/stdc++.h>
#define int long long int
#define endl "\n"

using namespace std;

class Node{
public:
    int data;
    Node  * next = nullptr;
    Node * prev = nullptr;

    Node() {}
    Node(int number){
        data = number;
    }
};

class LinkedList{
public:
    Node * head;
    Node * tail;

    LinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    // O(1)
    void insertAtStart(int number){
        Node * newNode = new Node(number);

        if(head==nullptr){
            head = tail = newNode;
            return;
        }

        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }

    // O(1)
    void insertAtEnd(int number){
        Node * newNode = new Node(number);

        if(head==nullptr){
            head = tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    // O(1)
    void removeAtStart(){
        if(head == nullptr){
            return;
        }
        Node * temp = head;
        head = head->next;
        if(head!=nullptr){
            head->prev = nullptr;
        }
        delete temp;
    }

    // O(1)
    void removeAtEnd(){
        if(tail == nullptr){
            return;
        }

        if(head==tail){
            delete head;
            head = tail = nullptr;
            return;
        }

        Node * temp = tail->prev;
        delete tail;
        temp->next = nullptr;
        tail = temp;
    }

    // O(n)
    void print(){
        Node * temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<"\n";
    }
};

signed main(){

    LinkedList l = LinkedList();
    l.insertAtEnd(4);
    l.insertAtEnd(5);
    l.insertAtEnd(6);
    l.print();
    l.insertAtStart(3);
    l.insertAtStart(2);
    l.insertAtStart(1);
    l.print();
    l.removeAtEnd();
    l.print();
    l.removeAtStart();
    l.print();
}