#include<bits/stdc++.h>
using namespace std;

int has[40];

int main()
{


		int t;
		cin>>t;
		while(t--)
		{
			memset(has,0,sizeof has);
			
			for(int i=0;i<17;i++)
			{
				string s;
				cin>>s;
				if(s.size()>1){
					if(s[0]=='1'){
						has[10]=1;
					}
				}
				else {
					if(s[0]>=3&&s[0]<=9){
						has[s[0]-'0']=1;
					}
					if(s[0]=='J')s[11]=1;
					if(s[0]=='Q')s[12]=1;
					if(s[0]=='K')s[13]=1;
					if(s[0]=='A')s[14]=1;
				}
			}
            int ans = 0;
            for (int i = 3; i <= 14; i++)
            {
				cout << "1" << endl;
				if(ans>=5)cout<<ans<<'\n';
				else cout<<0<<'\n';
			}
	
 } 