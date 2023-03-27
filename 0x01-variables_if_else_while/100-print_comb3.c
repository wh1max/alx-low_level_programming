#include <stdio.h>
/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
int main() {
  int i, j;

  for (i = 0; i < 9; i++) {
    for (j = i + 1; j < 10; j++) {
      putchar(i + '0');
      putchar(j + '0');
      if (i < 8) {
        putchar(',');
        putchar(' ');
      }
    }
  }

  putchar('\n');
  return 0;
}

