#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *reverse_A_LL(Node *head)
{
  Node *temp = head;
  Node *prev = nullptr;
  while (temp != nullptr)
  {
    Node *front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front;
  }
  return prev;
}

Node *find_K_th_Node(Node *temp, int k)
{
  k -= 1;
  while (temp != nullptr && k > 0)
  {
    k--;
    temp = temp->next;
  }
  return temp;
}

Node *Reverse_A_Group_in_LL(Node *head, int k)
{
  Node *temp = head;
  Node *prevNode = nullptr;
  while (temp != nullptr)
  {
    Node *k_th_Node = find_K_th_Node(temp, k);
    if (k_th_Node == nullptr)
    {
      if (prevNode)
      {
        prevNode->next = temp;
      }
      break;
    }
    Node *newNode = k_th_Node->next;
    k_th_Node->next = nullptr;
    reverse_A_LL(temp);
    if (temp == head)
    {
      head = k_th_Node;
    }
    else
    {
      prevNode->next = k_th_Node;
    }
    prevNode = temp;
    temp = newNode;
  }
  return head;
}

Node *convert_Arr_to_LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *templaate = new Node(arr[i]);
    mover->next = templaate;
    mover = templaate;
  }
  return head;
}

void PrintList(Node *head)
{
  Node *curr = head;
  for (; curr != nullptr; curr = curr->next)
  {
    cout << curr->data << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
  cout << "The Linked List elements are: ";
  Node *head = convert_Arr_to_LL(arr);
  PrintList(head);
  cout << "Linked List after reversal is: ";
  head = Reverse_A_Group_in_LL(head, 3);
  PrintList(head);
}