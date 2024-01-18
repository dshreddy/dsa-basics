#include<bits/stdc++.h>
#define int long long int
#define endl "\n"

using namespace std;

class DynamicArray{

  public:

    int capacity;
    int length;
    int *arr = new int[2];

    void resize(){

      length = length*2;
      int *newArray = new int[length];

      for(int i=0; i<length; i++){
        newArray[i] = arr[i];
      }

      arr = newArray;
    }

    void pushBack(int number){

      if(length==capacity){
        resize();
      }

      arr[length++] = number;
    }

    // Remove the last element in the array
    void popBack() {
        if (length > 0) {
            length--;
        }
    }

        // Get value at i-th index
    int get(int i) {
        if (i < length) {
            return arr[i];
        }
        // Here we would throw an out of bounds exception
    }

    // Insert n at i-th index
    void insert(int i, int n) {
        if (i < length) {
            arr[i] = n;
            return;
        }
        // Here we would throw an out of bounds exception
    }

    void print() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
};

signed main (){
  return 0;
}
