#include <bits/stdc++.h>
using namespace std;

int main(){
   string s1, s2, s3;
   getline(cin , s1);
   getline(cin , s2);
   getline(cin , s3);
   
   int count1 = 0, count2 = 0, count3 = 0;
   for(int i = 0; i<s1.size(); i++){
      if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'){
         count1++;
      }
   }
   for(int i = 0; i<s2.size(); i++){
      if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'){
         count2++;
      }
   }
   for(int i = 0; i<s3.size(); i++){
      if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='o'||s3[i]=='u'){
         count3++;
      }
   }
   
   if(count1 == 5 && count2 == 7 && count3 == 5){
      cout << "YES\n";
   }
   else{
      cout << "NO\n";
   }
   
   return 0;
}
