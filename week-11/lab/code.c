#include <string.h>

void binky(int a[], int *b)
{
  b[2] = 107;
  a[2] *= 7;
}

void change_char(char *s)
{
  *s = 'j';
  s = "MAE";
}

void change_ptr(char **p_str)
{
  **p_str = 'm';
  *p_str = "SUSTech";
  p_str = NULL;
}

void winky(void) 
{
  char word[6];
  char *pw = word;
  strcpy(word, "hello");

  change_char(pw);
  change_ptr(&pw);
}

int main(int argc, char *argv[])
{
  int arr[] = {0, 10, 20, 30, 40, 50};
  int *ptr = arr;
  binky(arr, ptr);
  winky();
  return 0;
}

// EOF
