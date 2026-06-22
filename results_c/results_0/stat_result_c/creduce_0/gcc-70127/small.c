struct a {
  int b;
  signed c : 2;
} d[1], f = {5, 6}, g;
short e;
int main() {
  for (; e <= 0; e++) {
    struct a h = {1, 6};
    g = h = d[0] = f;
  }
  printf("%d\n", d[0].c);
  return 0;
}
