#include "Hash_map.h"

HashMap
create_hashmap(int num){
  HashMap hash_map;
  hash_map = malloc(sizeof(linked_list_t)*num);

  for(int i = 0; i <= num; i++)
    hash_map[i] = create_list(hash_map[i]);

  return hash_map;
}

HashMap
add(HashMap hash_map, char *s, int (*hash)(const int)){
  HashMap temp_map;
  temp_map = hash_map;
  temp_map[hash(s[0])] = list_add(hash_map[hash(s[0])],s);

  return temp_map;
}

int
search(HashMap hash_map, char *s, int (*hash)(const int)){
  return find(hash_map[hash(s[0])],s);
}

void
print_entry(HashMap hash_map, int entry, int (*hash)(const int)){
  read_all(hash_map[hash(entry)]);
}
