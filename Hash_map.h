#ifndef HASH_MAP
#define HASH_MAP

#include <stdlib.h>

#include "linked_list.h"

typedef linked_list_t *HashMap;

// Search a string into the hash map using the key calcualted using hash(s[0])
// Return 1 in case of success
// return 0 in case of unsucess (is not your pain)
int search(HashMap hash_map, char *s, int (*hash)(const int));

// Add an element into the hash map
HashMap add(HashMap hash_map, char *s, int (*hash)(const int));

// Create an hush map with num entries
HashMap create_hashmap(int num);

// print entris with key "entry"
void print_entry(HashMap hash_map, int entry, int (*hash)(const int));


#endif
