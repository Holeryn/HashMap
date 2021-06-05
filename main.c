/* 	Questo codice è stato scritto     */
/* 	un giovedi del 3 giugno 2021      */
/* 	e poi aggiornato il 5 giugno 2021 */

#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>

#include "linked_list.h"
#include "ReadLine.h"
#include "Hash_map.h"

#define LENGTH 48
#define FILE_NAME "parole"
#define PAROLA argv[1]

int hash(int c){
  if(c <= 'Z'){
    return c - 'A';
  }else{
    return c - 'a' + 25;
  }
}

int main(int argc, char **argv){
  char line[BUF_SIZE];
  int fd;

  HashMap map;
  map = create_hashmap(LENGTH);

  assert((fd = open(FILE_NAME,O_RDONLY)) != -1);

  while(Iread_line(fd,line) != 0){
    map = add(map,line,hash);
  }

  print_entry(map,argv[1][0],hash);
  if(search(map,argv[1],hash)){
    puts("Trovata");
  }else{
    puts("Non trovata");
  }
}
