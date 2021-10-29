#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    while(1)
    {
		srand(time(0));
        int a=rand()%3+1;
        cout<<a;
        cout<<"Ban: "<<endl;
        char* ban;
        cin>>ban;
         
        char* may;
        if(a==1)
        {
            may="keo";
            cout<<may;
            if(ban=="bua"||ban=="Bua")
            cout<<"Ban thang!";
            if(ban=="keo"||ban=="Keo")
            cout<<"Hoa!";
            if(ban=="bao"||ban=="Bao")
            cout<<"Ban thua!";
        }
        if(a==2)
        {
            may="bua";
            cout<<may;
            if(ban=="bua"||ban=="Bua")
            cout<<"Hoa!";
            if(ban=="keo"||ban=="Keo")
            cout<<"Ban thua!";
            if(ban=="bao"||ban=="Bao")
            cout<<"Ban thang!";
        }
        if(a==3)
        {
            may="bao";
            cout<<may;
            if(ban=="bua"||ban=="Bua")
            cout<<"Ban thua!";
            if(ban=="keo"||ban=="Keo")
            cout<<"Ban thang!";
            if(ban=="bao"||ban=="Bao")
            cout<<"Hoa!";
        }
    }
    return 0;
}
