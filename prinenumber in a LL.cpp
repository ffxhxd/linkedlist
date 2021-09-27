//display only prime numbers in a ll.
//Fahad Farooq CSE-19-42.


#include <bits/stdc++.h> 
using namespace std; 
 
struct Node { 
  int data; 
  Node* next; 
}; 
void push(Node** head_ref, int new_data) 
{ 
  Node* new_node = new Node; 
  new_node->data = new_data; 
  new_node->next = (*head_ref); 
  (*head_ref) = new_node; 
} 

int isPrime(int n) 
{ 
 
  if ((n == 2) || (n == 3)) 
    return n;  
 
  if (n == 1 || n % 2 == 0 || n % 3 == 0) 
    return -1; 
  for (int i = 5; i * i <= n; i = i + 6) 
    if (n % i == 0 || n % (i + 2) == 0) 
      return -1; 
  return n; 
} 
 
void getPrime(Node** head_ref) 
{ 
  Node* ptr = *head_ref; 
  while(ptr != NULL) { 
    int p = isPrime(ptr->data);
      if (p != -1) { 
        cout << p << " ";
      }
      ptr = ptr->next; 
  }
} 

int main() 
{ 

  Node* head = NULL; 
  
  push(&head, 17); 
  push(&head, 10); 
  push(&head, 6); 
  push(&head, 5); 
  push(&head, 19);
  push(&head, 3);
  push(&head, 1); 
 
  cout << "Prime nodes are: ";
  getPrime(&head); 
  return 0; 
} 
