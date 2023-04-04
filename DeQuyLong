#include <stdio.h>
 
int A(int m, int n){
  if(m == 0) // nếu m == 0 thì return n + 1
    return n + 1;
  else if(n == 0) // nếu n == 0 thì return đệ quy A(m - 1, 1)
    return A(m - 1, 1);
  else // nếu m > 0 và n > 0 thì return đệ quy lồng A(m-1, A(m, n-1))
    return A(m-1, A(m, n-1));
}
int main() {
  int kq = A(2,1); // truyển tham số đầu vào cho A() là m = 2 và n = 1
  printf("Với m = 2 và n = 1");
  printf("\nKết quả: %d",kq);
}
//https://codehow.net/de-quy-long-nested-recursion-trong-c-c++-91.html
