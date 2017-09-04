#include <iostream>
#include <math.h>

using namespace std;

int countSquarePairs(int a[], int len) {
  int counter = 0;
  for (int i = 0; i < len; ++i) {
    for (int j = 0; j < len; ++j) {
      int element1 = a[i];
      int element2 = a[j];

      if (element1 <= 0 || element2 <= 0 || element1 == element2)
        continue;

      if (element1 < element2) {
        int element_sum = element1 + element2;
        float root = sqrt(element_sum);
        if (ceil(root) == root) {
          counter = counter + 1;
        }
      }
    }
  }

  return counter;
}

int main() {
  int arr[] = {11, 5, 4, 20};

  int ans = countSquarePairs(arr, 4);
  cout << "Ans is : " << ans << endl;
}