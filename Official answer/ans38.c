union Student{
  int year;
  int id;
};

int main(void){
  union Student data;
  data.year = 2016;
  data.id = 1;
  return 0;
}
