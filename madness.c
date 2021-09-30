#include <stdio.h>

char c = 'a';
int n = 1;
long x = 2;

int *cp = &c;
int *np = &n;
int *xp = &x;

unsigned int i = 5678;
int *ip = &i;
char *cip = &i;

int main(){
  printf("Address of c: %p\n", &c);
  printf("Address of n: %p\n", &n);
  printf("Address of x: %p\n", &x);

  printf("Address of c: %lu\n", &c);
  printf("Address of n: %lu\n", &n);
  printf("Address of x: %lu\n", &x);

  printf("pointer of c: %d\n", cp);
  printf("pointer of n: %d\n", np);
  printf("pointer of x: %d\n", xp);

  c = *cp + 10;
  n = *np+10;
  x = *xp+10;

  printf("c : %c\n", c);
  printf("n : %d\n", n);
  printf("x : %ld\n", x);  

  printf("ip : %p ip points to : %d\n", &ip, *ip);
  printf("cip : %p cip points to : %d\n", &cip, *cip);

  printf("i : %u\n", i);
  printf("i : %x\n", i);

  printf("hhu : %hhu\n", *cip);
  ++cip;
  printf("hhu : %hhu\n", *cip);

  char *cip = &i;

  printf("hhu : %hhu\n", *cip);
  cip += 16;
  printf("hhu : %hhu\n", *cip);
  cip += 16;
  
  return 0;
}
