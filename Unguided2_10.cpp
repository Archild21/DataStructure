#include <bits/stdc++.h>

using namespace std;

struct Node {
    char data;
    Node *kiri, *kanan;
};

Node* newNode(char data){
    Node* node = new Node;
    node->data = data;
    node->kiri = node->kanan = NULL;
    return node;
}

void postOrder(Node* root){
if (root == NULL)
    return;
    stack<Node *> s1, s2;
    s1.push(root);
    Node* node;
while (!s1.empty()) {
    node = s1.top();
    s1.pop();
    s2.push(node);
if (node->kiri)
    s1.push(node->kiri);
if (node->kanan)
    s1.push(node->kanan);
}
while (!s2.empty()) {
    node = s2.top();
    s2.pop();
cout << node->data << " ";
    }
}

int main()
{
Node* root = NULL;
root = newNode('K');
root->kiri = newNode('L');
root->kanan = newNode('M');
root->kiri->kiri = newNode('-');
root->kiri->kanan = newNode('N');
root->kanan->kiri = newNode('O');
root->kanan->kanan = newNode('P');
cout<<"Hasil Post-Order : ";
postOrder(root);
return 0;
}
