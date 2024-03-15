#include <iostream>

using namespace std;

int main() {
     const int size = 5;

    int array(size) = {1, 2, 3, 4, 5};

    cout << "Елементи масиву:" <<endl;
    for(int i = 0; i < size; ++i) {
        cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
// Misha Simbirtsev SKIBIDI