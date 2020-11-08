#include<bits/stdc++.h>
using namespace std;
bool is_vowel(char c)
{ return(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
}
string reverse_vowel(string str)
{ int j=0;
  string vowel;
  for(int i=0;str[i]!='\0';++i)
  { if(is_vowel(str[i]))
    { vowel[j++]=str[i];
    }
  }
  for(int i=0;str[i]!='\0';++i)
  { if(is_vowel(str[i]))
    { str[i]=vowel[--j];
    }
  }
  return str;
}
int main()
{ string str;
  cout<<"enter the string\n";
  cin>>str;
  cout<<"new string as follows\n";
  cout<<reverse_vowel(str);
  return 0;
}
