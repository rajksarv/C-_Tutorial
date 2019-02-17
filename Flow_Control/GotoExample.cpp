//* goto statements are almost never used in any development
//*as they are complex and makes your program much less readable
//*and more error prone. In place of goto, you can use continue
//*and break statement



#include <iostream>
using namespace std;
int main(){
   int num; cout<<"Enter a number: "; cin>>num;
   if (num % 2==0){
      goto print;
   }
   else {
      cout<<"Odd Number";
   }

   print:
   cout<<"Even Number";
   return 0;
}