#include "ReadLine.h"

int
Iread_line(int fd, char *line){
  ssize_t numRead;
  char ch;

  int bytes = 0;

  for(;;){
    numRead = read(fd,&ch,1);

    if(numRead == -1){
      return -1;
    }

    if(numRead == 0){ // EOF
      return 0;
    }

    if(ch == '\n'){
      *line = '\0';
      return bytes;
    }

    bytes++;
    *line++ = ch;
  }
}
