#ifndef SORTED_LIST_H_INCLUDED
#define SORTED_LIST__H_INCLUDED
/* ^^ these are the include guards */

/* Prototypes for the functions */


#include <stdio.h>  
#include <stdlib.h>  
#include<string.h>
typedef double key_type;
typedef int value_type;
  
// A linked list node  
struct Node {  
    int value;
    key_type key;
    struct Node* prev;
    struct Node* next;
    struct Node* prev_sorted;
    struct Node* sort;
};  

//Sorted_list data type
typedef struct {
    struct Node* head;
    struct Node* head_sort;
    struct Node* tails;
    struct Node* tails_sort;
    int size ;//store the node count
}Sorted_list;

//size function to calculate the size of linked list
int size(Sorted_list * list_detail);
 

/*push function to add the node to the head of the list*/
int push(Sorted_list * list_detail, value_type  value, key_type  key)  ;

int append(Sorted_list * list_detail, value_type  value, key_type  key);

//Function to print the list according to insertion order as well as key sort order
void print_list_all(Sorted_list * list_detail)  ;

void print_list_sort(Sorted_list * list_detail);



/*
 *function to remove first node
 *@param Sorted_list *
 *@param value_type
 *@param key_type *
 */
int remove_first(Sorted_list * list_detail,value_type * value, key_type * key);

/*
 *function to remove last  node
 *@param Sorted_list *
 *@param value_type
 *@param key_type *
 */
int remove_last(Sorted_list * list_detail,value_type * value, key_type * key);

/*
 *function to remove node having smallest value
 *@param Sorted_list *
 *@param value_type
 *@param key_type *
 */
int remove_smallest_key(Sorted_list * list_detail,value_type * value, key_type * key);

/*
 *function to remove node having largest key
 *@param Sorted_list *
 *@param value_type
 *@param key_type *
 */
int remove_largest_key(Sorted_list * list_detail,value_type * value, key_type * key);
void empty_list(Sorted_list * list_detail);
void destroy_list(Sorted_list * list_detail);
#endif
