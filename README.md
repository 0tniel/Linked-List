# Linked-List
# Singly Linked List in C++

## Overview

This repository contains an implementation of a Singly Linked List in C++. A linked list is a linear data structure where elements, known as nodes, are stored non-contiguously. Each node consists of two components:
- **Data**: The value stored in the node.
- **Next Pointer**: A reference to the next node in the sequence.

Unlike arrays, linked lists allow for dynamic memory allocation, making insertions and deletions more efficient.

## Features

The Singly Linked List supports the following operations:
- **Insertion**: Add nodes at the beginning or end of the list.
- **Traversal**: Access nodes sequentially from start to end.
- **Deletion**: Remove nodes from specific positions.
- **Searching**: Locate nodes with specific values.

## Linked List Operations

### 1. Regular Linked List Implementation

In a singly linked list, each node points to the next node, and the last node points to `nullptr`, marking the end of the list. This structure ensures efficient memory usage and flexible management of the list size.

#### Basic Operations:
- **Insertion**: Add nodes at the start or end of the list.
- **Traversal**: Access all nodes sequentially.
- **Deletion**: Remove specific nodes.
- **Searching**: Find nodes with particular data.

#### Algorithm for Regular Linked List:
- **Creating a Node**:
  1. Allocate memory for a new node.
  2. Assign the node’s data.
  3. Initialize the next pointer to `nullptr`.

- **Insert at Start**:
  1. Create a new node.
  2. Set the new node's `next` pointer to the current head.
  3. Update the head to point to the new node.

- **Insert at End**:
  1. Create a new node.
  2. If the list is empty, set the head to the new node.
  3. Otherwise, traverse to the last node and set its `next` pointer to the new node.

- **Traverse the List**:
  1. Start from the head.
  2. Follow the `next` pointers until `nullptr` is reached.

### 2. Addition of a Node at the End

This operation involves adding a node at the end of the linked list.

#### Algorithm:
1. **Create a New Node**: Allocate memory and assign a value.
2. **Check if List is Empty**: 
   - If the head is `nullptr`, set it to the new node.
3. **Traverse to the End**: 
   - Start at the head and continue until the last node is found.
4. **Link the New Node**: 
   - Set the `next` pointer of the last node to the new node.

### 3. Addition of a Node at the Start

To insert a node at the beginning of the list:

#### Algorithm:
1. **Create a New Node**: Allocate memory and assign a value.
2. **Link to the Current Head**: Set the new node’s `next` pointer to the current head.
3. **Update the Head**: Set the head to the new node.

## Usage

To use the Singly Linked List, clone the repository and run the program. You can modify the list using the provided operations for insertion, traversal, and deletion.

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
