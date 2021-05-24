////     QUESTION    ////

Print the corresponding pattern for different values of ‘n’

Input Format

Enter the value of ‘n’.

Constraints

1<= n <= 10

Output Format

Print the required pattern

Sample Input 0

3
Sample Output 0

***
**
*


////     CODE    /////


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
