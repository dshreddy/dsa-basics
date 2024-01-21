// https://leetcode.com/problems/design-linked-list/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int value) : val(value), next(nullptr) {}
};

class MyLinkedList {
private:
    Node* head;

public:
    MyLinkedList() : head(nullptr) {}
    
    // Get the value at the given index.
    int get(int index) {
        if (index < 0 || head == nullptr) return -1;
        
        Node* current = head;
        for (int i = 0; i < index && current; ++i) {
            current = current->next;
        }
        
        return (current != nullptr) ? current->val : -1;
    }
    
    // Add a new node with the given value at the head.
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    // Add a new node with the given value at the tail.
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        
        current->next = newNode;
    }
    
    // Add a new node with the given value at the specified index.
    void addAtIndex(int index, int val) {
        if (index < 0) {
            addAtHead(val);
            return;
        }
        
        Node* newNode = new Node(val);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        
        Node* current = head;
        for (int i = 0; i < index - 1 && current; ++i) {
            current = current->next;
        }
        
        if (current == nullptr) return;  // Index out of bounds.
        
        newNode->next = current->next;
        current->next = newNode;
    }
    
    // Delete the node at the specified index.
    void deleteAtIndex(int index) {
        if (index < 0 || head == nullptr) return;
        
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        
        Node* current = head;
        for (int i = 0; i < index - 1 && current->next; ++i) {
            current = current->next;
        }
        
        if (current->next == nullptr) return;  // Index out of bounds.
        
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
};

signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   return 0;
}