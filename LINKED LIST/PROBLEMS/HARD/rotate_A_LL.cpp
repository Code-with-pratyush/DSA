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
Node *findNewNode(Node *temp, int k)
{
  int cnt = 1;
  while (temp != nullptr)
  {
    if (cnt == k)
    {
      return temp;
    }
    cnt++;
    temp = temp->next;
  }
  return temp;
}
Node *Rotate_A_LL(Node *head, int k)
{
  if (head == nullptr || k == 0)
  {
    return head;
  }
  Node *tail = head;
  int len = 1;
  while (tail->next != nullptr)
  {
    tail = tail->next;
    len += 1;
  }
  if (k % len == 0)
  {
    return head;
  }
  k = k % len;
  tail->next = head;
  Node *newNode = findNewNode(head, len - k);

  head = newNode->next;
  newNode->next = nullptr;

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
  head = Rotate_A_LL(head, 3);
  PrintList(head);
}