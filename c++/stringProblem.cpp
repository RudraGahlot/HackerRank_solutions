#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a ,b;
  cin>>a>>b;
  
  
  int lena = a.size();
  int lenb = b.size();
  cout<<lena<<" "<<lenb<<endl;
  
  
   string c = a + b; 
   cout<<c<<endl;
   
       for(int i=0;i<1;i++)
        for(int j=0;j<1;j++)
  {
      int swap;
      swap=a[i];
      a[i]=b[j];
      b[j]=swap;
  }
  cout<<a<<" "<<b;
       
          return 0;
}
