Rishabh got a task to order the numbers in such a way that all got arrange in non-decreasing order. 
  Write the necessart code to help him.

Input Format

Enter the size ‘n’ and array in two different lines.

Constraints

1<= n <= 20

Output Format

Print sorted array.

Sample Input 0

5
7 5 2 9 6
Sample Output 0

2 5 6 7 9


/////    CODE   ////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    cin>>n;
    int swap;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    
    for (i=0 ; i<n-1; i++){
        
    for (j=0 ; j<n-1; j++){
        
      if (a[j] > a[j+1]){
          
        swap = a[j];
        a[j] = a[j+1];
        a[j+1] = swap;
      }
    }
  }
    for(j=0; j<n; j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
