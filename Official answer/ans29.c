int myfunc(int n1, int n2){
  return n1+n2;
}

int main(void){
  int sum;
  int (*p_func)(int,int);
  p_func = myfunc;
  sum = (*p_func)(5,5);
 
  return 0;
}
