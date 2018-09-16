int main(){
  int n = 10;
  
  if(n == 1){
    goto label1;
  }else if(n == 2){
    goto label2;
  }
  
 label1:
  return 1;
  
 label2:
  n = 0;
  
  return 0;
}
