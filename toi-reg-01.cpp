#include <iostream>
using namespace std; 

int main() {
  int M[1000] = {0};

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
      int p;
      int c;

      cin >> p;
      cin >> c;

      M[p] += c;
  }

  cin >> N;

  for (int i = 0; i < N; i++) {
      int p;
      int c;

      cin >> p;
      cin >> c;

      M[p] += c;

      for (int p = 1000; p >= 0; p++) {
          bool flag = false;

          if (M[p] != 0) {
              flag = true;
              cout << p << ":"<< M[p];
          }

          if (flag == false) {
              cout << "NULL!";
          }
      }
  }
}  
