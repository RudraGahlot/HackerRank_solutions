////     QUES    ////

You need to find the sum of digits of a number ‘n’ using recursion.

Note: Solve this question using recursion only.

Input Format

Enter the number ‘n’.

Constraints

1<= n <= 5000

Output Format

Print the sum

Sample Input 0

499
Sample Output 0

22
  
  
  
  /////      CODE     /////
  
  
  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

      int sumOfDigit(int n){
          if(n==0)
              return 0;
          return (n%10 + sumOfDigit(n/10));
      }     

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    int sum = sumOfDigit(n);
    cout<<sum;
    return 0;
}
