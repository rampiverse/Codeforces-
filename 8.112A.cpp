#include<iostream> //header file
#include<string>
using namespace std;
int main()
{
     string s1 ,s2;
     cin>> s1>>s2;
     // Convert both to lower case
     for(int i=0; i<s1.size();i++)
     {
          if(s1[i]>='A'&&s1[i]<='Z')
          {
               s1[i]=s1[i]-'A'+'a';
          }
          if(s2[i]>='A'&&s2[i]<='Z')
          {
               s2[i]=s2[i]-'A'+'a';
          }
     }
     // comapre the string
     if(s1<s2)
          cout<<-1<<endl;
     else if(s1>s2)
          cout<<1<<endl;
     else
          cout<<0<<endl;
     return 0;
}
