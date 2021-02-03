#include <stdio.io>

int write(int filedes, const char *buf, unsigned int nbyte);
int main(void) {
  write(1, "Hello World!\n", 13); 
  return(1);
}
