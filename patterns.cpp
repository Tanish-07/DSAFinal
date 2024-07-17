#include <iostream>
using namespace std;
// To print pattern
//  1 2 3
//  1 2 3
//  1 2 3
void pattern1(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

// To print
// 3 2 1
// 3 2 1
// 3 2 1
void pattern2(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << n - j + 1 << " ";
    }
    cout << endl;
  }
}

// To print
//  1 2 3
//  4 5 6
//  7 8 9
void pattern3(int n) {
  int cnt = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << cnt << " ";
      cnt++;
    }
    cout << endl;
  }
}

// To print
// *
// **
// ***
void pattern4(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

// To Print
//   1
//   2 2
//   3 3 3
void pattern5(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

// To Print
//   1
//   2 3
//   4 5 6
void pattern6(int n) {
  int cnt = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << cnt << " ";
      cnt++;
    }
    cout << endl;
  }
}

// To print
//   1
//   2 3
//   3 4 5
//   4 5 6 7
void pattern7(int n) {
  for (int i = 1; i <= n; i++) {
    int copy = i;
    for (int j = 1; j <= i; j++) {
      cout << copy << " ";
      copy++;
    }
    cout << endl;
  }
}

// To print
//   1
//   2 1
//   3 2 1
void pattern8(int n) {
  for (int i = 1; i <= n; i++) {
    int copy = i;
    for (int j = 1; j <= i; j++) {
      cout << copy << " ";
      copy--;
    }
    cout << endl;
  }
}

// To print
//   A A A
//   B B B
//   C C C
void pattern9(int n) {
  char ch = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << ch << " ";
    }
    cout << endl;
    ch++;
  }
}

// To print
// A B C
// A B C
// A B C
void pattern10(int n) {
  for (int i = 1; i <= n; i++) {
    char ch = 'A';
    for (int j = 1; j <= n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}

// To print
// A B C
// D E F
// G H I
void pattern11(int n) {
  char ch = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}

// To print
// A B C
// B C D
// C D E
void pattern12(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char ch = 'A' + i + j - 2;
      cout << ch << " ";
    }
    cout << endl;
  }
}

// To print
// A
// B B
// C C C
void pattern13(int n) {
  for (int i = 1; i <= n; i++) {
    char ch = 'A' + i - 1;
    for (int j = 1; j <= i; j++) {
      cout << ch << " ";
    }
    cout << endl;
  }
}

// To print
// A
// B C
// D E F
// G H I J
void pattern14(int n) {
  char ch = 'A';
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}

// To print
// A
// B C
// C D E
// D E F G
void pattern15(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      char ch = 'A' + i + j - 2;
      cout << ch << " ";
    }
    cout << endl;
  }
}

// To print
// D
// C D
// B C D
// A B C D
void pattern16(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      char ch = 'A' + n - i - 1 + j;//EXPLANTATION IS IN NEXT EXAMPLEA
      cout << ch << " ";
    }
    cout << endl;
  }
}

// To print
// A B C
// B C D
// C D E
void pattern17(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char ch =
          'A' + i - 1 + j -1; 
             // Trick to do this type of questions first make the value for
             // starting character of every row then add things to make it
             // working for every column too like here first ch= A+i-1 then i
             // added things to make it working for each column by addng j+1
      cout << ch << " ";
    }
    cout << endl;
  }
}

// To print
//    *
//   **
//  ***
// ****
// For space it is equal to n-i and star is equal to i
void pattern18(int n){
  for(int i=1;i<=n;i++){
    //Space
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    //Star
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

// To print
// ****
// ***
// **
// *
void pattern19(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

// To print
// ****
//  ***
//   **
//    *
void pattern20(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
      cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
      cout<<"*";
    }
    cout<<endl;
      }
}

// To print
// 1 1 1 1
//   2 2 2 
//     3 3
//       4
void pattern21(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
      cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++)
      cout<<i;
    cout<<endl;
  }
}

// To print
//    1
//   121
//  12321
// 1234321
// Here first we will divide it into 3 parts one with spaces in the beigning second in which the triangle 1 12 123 1234 will be covr then we will target for the last remaning triangle;
void pattern22(int n){
  for(int i=1;i<=n;i++){
    //code for space
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    //For second 
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    //for last 
    int cnt=i-1;
    for(int j=1;j<=i-1;j++){
      cout<<cnt;
      cnt--;
    }
    cout<<endl;
  }
}



int main() {
  int n;
  cout << "Enter the value of n:";
  cin >> n;

  // pattern1(n);
  // pattern2(n);
  // pattern3(n);
  // pattern4(n);
  // pattern5(n);
  // pattern6(n);
  // pattern7(n);
  // pattern8(n);
  // pattern9(n);
  // pattern10(n);
  // pattern11(n);
  // pattern12(n);      IMPORTANT PATTERN IT IS LITTLE BIT DIFFERENT TRY TO
  //                    SOLVE FIRST THEN READ 
  // pattern13(n); 
  // pattern14(n); 
  // pattern15(n);
  // pattern16(n);      REAL QUESTION MUST TO DO
  // pattern17(n);
  // pattern18(n);
  // pattern19(n);
  // pattern20(n);
  // pattern21(n);
  // pattern22(n);
}