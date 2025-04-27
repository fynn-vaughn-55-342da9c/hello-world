#include <stdio.h>
int main(int argc, char **argv) {
  (void)argc;
  (void)argv;
  if (argc > 1) {
    printf("Hello, %s", argv);
  } else {
    printf("Hello, World!\n");
  }
  return 0;
}
