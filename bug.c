int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; 
  int y = *ptr; //y is 20
  int z = *ptr + 10; //z is 30
  ptr = NULL; // Setting pointer to NULL
  *ptr = 30;// This will cause segmentation fault
  return 0;
}