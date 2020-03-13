#include <ctype.h>
#include <stdio.h>

int main() {
  char s[] = "!!Hello**";
  size_t pos = 0;
  for (char *p = s; *p; ++p)
    if (isalpha(*p))
      s[pos++] = *p;
  s[pos] = '\0';
  //printf("%s\n", s[pos]); //this will output as <null>
   printf("%s\n", s); //output hello
}
