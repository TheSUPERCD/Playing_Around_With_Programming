#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string str;
	    cin>>n>>str;
	    while(true and str.length()!=1)
	    {
	        bool flag=false;
	        for(int i=1;i<str.length();i++)
	        {
	            if(str[i]==str[i-1])
	            {
	                //cout<<str[i]<<str[i-1]<<endl;
	                str[i-1]='0';
	                str.erase(i,1);
	                flag=true;
	                break;
	            }
	        }
	        //cout<<str<<endl;
	        if(flag==false) break;
	    }
	    if(str.length()==1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}