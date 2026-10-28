#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file = fopen("numbers.txt", "r");
  int num1, num2;

  if(!file) {
    perror("Couldn't open the file.");
    return 1;
  }

  while(fscanf(file, "%d%d", &num1, &num2) == 2)
    printf("%d ", num1 + num2);
  
  fclose(file);
  return 0;
}
