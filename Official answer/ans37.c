struct flag{
  unsigned int up:1;
  unsigned int on:1;
};

int main(void){

  struct flag f;

  f.up = 0;
  f.on = 1;

  return 0;
}
