#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 4096

struct node{
  char string[BUF_SIZE];
  struct node *next;
};

typedef struct node node_t;

struct linked_list{
  int length;
  node_t *head;
};

typedef struct linked_list linked_list_t;

// Self explanotary functions
linked_list_t create_list(linked_list_t list);
linked_list_t list_add(linked_list_t list, char *s);
int find(linked_list_t list,char *s);
void read_all(linked_list_t list);

// G: Do you want the documentation ?
// V: Yes, Sir
// G: Read the code

#endif
