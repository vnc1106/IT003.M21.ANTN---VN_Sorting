#include<bits/stdc++.h>
const int N = 1e6;
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
    vector<int> a(arr.begin() + l, arr.begin() + m + 1);
    vector<int> b(arr.begin() + m + 1, arr.begin() + r + 1);
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()) {
        if(a[i] <= b[j]) {
            arr[l] = a[i]; ++l; ++i;
        }       
        else {
            arr[l] = b[j]; ++l; ++j;
        }
    }   
    while(i < a.size()) {
        arr[l] = a[i]; ++l; ++i;
    }
    while(j < b.size()) {
        arr[l] = b[j]; ++l; ++j;
    }
}
void merge_sort(vector<int> &arr, int l, int r) {
    if(l == r) return;
    int m = (l + r)/2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, m, r);
}

void heapify(vector<int> &arr, int n, int i) {
    int largest = i;
    int left = 2*i + 1, right = 2*i + 2;
    if(left < n && arr[left] > arr[largest]) largest = left;
    if(right < n && arr[right] > arr[largest]) largest = right;
    if (i != largest) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heap_sort(vector<int> &arr, int l, int n) {
    ++n;
    for(int i=n/2 - 1; i>=0; i--) {
        heapify(arr, n, i);
    }
    for(int i=n-1; i>=0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0); 
    }
}

void stl_sort(vector<int> &arr, int l, int r) {
    sort(arr.begin(), arr.end());
}

void quick_sort(vector<int> &arr, int left, int right) {
      int i = left, j = right;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  swap(arr[i], arr[j]);
                  i++;
                  j--;
            }
      };
      if (left < j)
            quick_sort(arr, left, j);
      if (i < right)
            quick_sort(arr, i, right);
}