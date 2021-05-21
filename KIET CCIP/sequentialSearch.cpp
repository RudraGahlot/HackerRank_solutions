Karan got a task to find the index of a particular element ‘k’. 
  Help him out. In case of repeatetion print the index of first occurence of number.

Input Format

Enter the array of size ‘n’, element to search’k’, and array[] in three different lines.

Constraints

1<= n <= 20

Output Format

Print the index of element.

Sample Input 0

5
6
2 4 6 9 7
Sample Output 0

2



////   CODE   /////


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
    cin>>n;
    int k;
    cin>>k;
    int location=0;
    int a[n];
   for(int i=0; i<n; i++){
        cin>>a[i];
    }

   for(int j=0;j<n;j++){
       if(a[j] == k){
         location=j;
         }
     }
    cout<<location;
    cout<<endl;
            return 0;
}
