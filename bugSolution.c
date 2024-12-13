int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20;
  int y = *ptr; // y is 20
  int z = *ptr + 10; // z is 30
  ptr = NULL;
  if (ptr != NULL) {
    *ptr = 30; //This line will not be executed because ptr is NULL
  } else {
    printf("Pointer is NULL. Cannot dereference.");
  }
  return 0;
}