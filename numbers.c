#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file = fopen("numbers.txt", "r");
  int number;

  if(!file) {
    perror("Couldn't open the file.");
    return 1;
  }

  while(fscanf(file, "%d", &number) == 1)
    printf("Read number: %d\n", number);
  
  fclose(file);
  return 0;
}
