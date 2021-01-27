#include<bits/stdc++.h>
using namespace std;
int main()
{


   int t;
   cin>>t;

   while(t--)
   {
       int n;
       cin>>n;


       string num;
       cin>>num;

      //our answer, the resulting ebne number
       string ans = "";

      //iterating through the digits of given number
       for(int i =0;i<n;i++)
       {

          //converting character digit to integer
	int digit = num[i]-'0';

          //checking if digit is odd
           if((digit)%2==1)
           {
	        //adding the odd digit to the answer using string concatenation
                  ans= ans+num[i];
           }


	//we do not need more than 2 odd digits, so we break the loop once we get 2 digits
           if(ans.size()==2)
               break;
         }

       if(ans.size()==2)	//if the size of ans variable is 2, ans is an ebne number
           cout<<ans<<endl;



       else
           cout<<-1<<endl;
}
   return 0;
}
