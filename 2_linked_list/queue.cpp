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

class Queue{
public:
    Node * head;
    Node * tail;

    Queue(){
        head = nullptr;
        tail = nullptr;
    }

    // O(1)
    void enqueue(int number){

        Node * newNode = new Node(number);

        if(tail==nullptr){
            head = tail = newNode;
            return;
        }

        Node * temp = tail;
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
    }

    // O(1)
    void dequeue(){

        if(head == nullptr){
            return;
        }

        if(head==tail){
            delete head;
            head = tail = nullptr;
            return;
        }

        head->next->prev = nullptr;
        delete head;
        head = head->next;
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

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();

    q.dequeue();

    q.print();

    return 0;
}