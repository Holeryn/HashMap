#include "linked_list.h"

linked_list_t
create_list(linked_list_t list){
  list.length = 1;
  list.head = malloc(sizeof(linked_list_t));

  return list;
}

linked_list_t
list_add(linked_list_t list, char *s){
  linked_list_t temp;

  temp.head = malloc((list.length + 1)*sizeof(linked_list_t));

  strcpy(temp.head->string , s);
  temp.head->next = list.head;
  temp.length = list.length + 1;

  return temp;
}

void
read_all(linked_list_t list){
  linked_list_t temp;
  temp = list;

  for(int i = 0; i < list.length; i++){
    printf("%s\n",temp.head->string);

    temp.head = temp.head->next;
  }
}

int
find(linked_list_t list,char *s){
  linked_list_t temp;
  temp = list;
  for(int i = 0; i < list.length; i++){
    if(strcmp(temp.head->string,s) == 0){
      return 1;
    }

    temp.head = temp.head->next;
  }

  return 0;
}
