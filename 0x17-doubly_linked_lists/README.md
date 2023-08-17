#alx-low_level_programming [root]
#0x17. C - Doubly linked lists [name]
#0x17-doubly_linked_lists [repo]

#Doubly linked lists
//*Resource*//
What is a Doubly Linked List
/* list that consists of a number node(s) and each node had a ability to hold some data*/
** Doubly linked means each node has the ability to link to the *next and *previous data/node/char/int**
**To use you have to state or command either next/prev what data you are pointing to**

#mendatory tasks files and description/ include prototype
#file1: 0-print_dlistint.c
0. Print list
Write a function that prints all the elements of a dlistint_t list.
#prototype: size_t print_dlistint(const dlistint_t *h);
#file1: 1-dlistint_len.c
1. List length
Write a function that returns the number of elements in a linked dlistint_t list.
#proto: size_t dlistint_len(const dlistint_t *h);
#file2: 2-add_dnodeint.c
2. Add node
Write a function that adds a new node at the beginning of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#file3: 3-add_dnodeint_end.c
3. Add node at the end
Write a function that adds a new node at the end of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#file4: 4-free_dlistint.c
4. Free list
Write a function that frees a dlistint_t list.
Prototype: void free_dlistint(dlistint_t *head);
#file5: 5-get_dnodeint.c
5. Get node at index
Write a function that returns the nth node of a dlistint_t linked list.
Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
#file6: 6-sum_dlistint.c
6. Sum list
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
Prototype: int sum_dlistint(dlistint_t *head);
#file7: 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c
7. Insert at index
Write a function that inserts a new node at a given position.
Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
#file8: 8-delete_dnodeint.c
8. Delete at index
Write a function that deletes the node at index index of a dlistint_t linked list.
Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
