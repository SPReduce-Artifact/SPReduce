struct a {
  int b;
  signed c : 2;
} d[1], e = {5, 6}, g;
char f;
int h;
int main() {
  for (; f <= 5; f++) {
    struct a i = {1, 6};
    g = i = d[0] = e;
  }
  printf("%d\n", d[0].c);
  for (; h;)
    ;
}
