#ifndef READ_LINE
#define READ_LINE

#include <sys/types.h>

// I stand for insecure, to much test can
// increase too much the time complexity
// Return :
// -1 : in case of error
// 0 : end of file
// other : length of the line in bytes
// Reading line after recevied 0 or -1 is probaably UB
int Iread_line(int fd, char *line);
#endif
