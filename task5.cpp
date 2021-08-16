#include<iostream>
using namespace std;
int main(){
    int a[10]={6,2,5,5,4,5,6,3,7,6},i=0,sum=0,no;
    char str[100];
    cout<<"Enter Number: ";
    cin>>str;
    while(str[i]!='\0'){
        no = (int)str[i] - 48;
        for(int j=0;j<=9;j++)
            if(j == no)
                sum=sum+a[j];
        i++;
    }
    cout<<"No. of MatchSticks Needed: "<<sum;
    return 0;
}
