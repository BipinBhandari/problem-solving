#include <iostream>
#include <limits.h>
#include <math.h>

using namespace std;

int isIntertia(int a[], int len) {
  int min_odd = INT_MIN;
  int max_odd = INT_MIN;
  int max_even = INT_MIN;
  int second_max_even = INT_MIN;

  for (int i = 0; i < len; ++i) {
    int num = a[i];
    if (num % 2 == 0) {
      if (num > max_even) {
        second_max_even = max_even;
        max_even = num;
      }else{
          if (num < max_even && num > second_max_even){
              second_max_even = num;
          }
      }
    } else {
      if (num > max_odd) {
        max_odd = num;
      }
      if (min_odd == INT_MIN) {
        min_odd = num;
      } else {
        if (num < min_odd) {
          min_odd = num;
        }
      }
    }
  }

  if (min_odd == INT_MIN)
    return 0;
  if (max_even < max_odd)
    return 0;
  if (min_odd > second_max_even)
    return 1;
  else
    return 0;
}

int main() {
  int arr[] = {2, 4, 6, 8, 10};

  int ans = isIntertia(arr, 5);
  cout << "Ans is : " << ans << endl;
}
