#include<iostream>
using namespace std;
#include<string.h>
int main()
     {
       char name[100];
       int age;
       cout<<"\t|  ***CANDIDATE DETAILS***        |";
       cout<<"\n\t-----------------------------------";
       cout<<"\n\t|Enter the Name of the candidate: |";
       gets(name);

       cout<<"\t|Enter the Age of the candidate:  |";
       cin>>age;
       cout<<"\t-----------------------------------";
       if(age>=18)
       {
       cout<<"\n\tCongratulations "<<name<<" YOU ARE NOW ELIGIBLE FOR VOTING"<<endl;

       }
       else
       {
       cout<<"\n\t"<<name<<" YOU ARE NOT ELIGIBLE FOR VOTING BECAUSE YOU ARE STILL A MINOR"<<endl;
       cout<<"\n\tYOU CAN VOTE ONLY AFTER "<<18-age<<"year(s)"<<endl;
       cout<<"\n\tNOTE: CITIZENS CAN ONLY VOTE ONCE THEY ARE 18 YEARS"<<endl;
       cout<<"\n\t----THANKYOU----"<<endl;
       }
      return 0;
       }
