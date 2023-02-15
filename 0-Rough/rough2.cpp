#include<vector>
using namespace std;
int pivotIndex(vector<int> &arr, int n) {
  int s = 0, e = n - 1;
  int m = s + ((e - s) / 2);
  // cout
  while (s < e) {
    if (arr[m] >= arr[0]) {
      s = m + 1;
      // cout<<"s :"<<s<<endl;
    } else {
      e = m;
      // cout<<"e :"<<e<<endl;
    }
    m = s + ((e - s) / 2);
  }
  return s;
}

int binarySearch(vector<int> &a, int k, int s, int e) {
  int m = s + (e - s) / 2;
  while (s <= e) {
    if (k < a[m]) {
      e = m - 1;
    } else if (k > a[m]) {
      s = m + 1;
    } else if (k == a[m]) {
      return m;
    }
    m = s + (e - s) / 2;
  }
  return -1;
}

int findPosition(vector<int> &arr, int n, int k) {
  int index;
  int p = pivotIndex(arr, n);
  if (k >= arr[0]&&k<=arr[p-1]) {
    index = binarySearch(arr,k, 0, p - 1);
  } else {
    index = binarySearch(arr,k, p, n - 1);
  }
  return index;
}
