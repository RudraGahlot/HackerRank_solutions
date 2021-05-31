///  QUES   ///

Ramesh got a set of numbers and alloted a task to find the minimum of all the royal numbers present in the set if available otherwise print ‘No’. Royal numbers are those numbers which are divisible by 2,3 & 5 all three numbers.

Input Format

Enter all the numbers in the array of size ‘n’ and the value of 'n'.

Constraints

1<= n <= 20

Output Format

Print the minimum royal number.

Sample Input 0

4
32 30 62 90
Sample Output 0

30
  
  
  ///    CODE  ////
  
  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    cin>>n;
    int a[n];
   int count = 0;
    int k=0;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        if(a[i]%2==0){
          if(a[i]%3==0){
             if(a[i]%5==0){
           count++;
            k=a[i];
            break;
             }
           }
         }
    }
    if(k!=0) cout<<k;
     else cout<<"No";
    return 0;
}
