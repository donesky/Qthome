#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,j,k;
    char ss[512];
    string s;
    while(cin.getline(ss,512))
    {
        s=ss;
        int length=s.length();
        int max=0,mark1=0,mark2=0;

        for(i=0;i<length;i++)
        {
            for(j=i;j<length;j++)
            {
                int flag=1;
                for(k=i;k<=j;k++)
                {
                    if(s[k]!=s[i+j-k])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag && j-i+1>max)
                {
                    max=j-i+1;
                    mark1=i;
                    mark2=j;
                }
            }
        }
        cout<<"The length of palindrome string="<<max<<endl;
        cout<<"The length of palindrome string="<<max<<endl;

        cout<<"The length of palindrome string="<<max<<endl;
        cout<<"The length of palindrome string="<<max<<endl;

        cout<<"The palindrome string=";
        for(int i=mark1;i<=mark2;i++)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
