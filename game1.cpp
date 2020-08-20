#include<bits/stdc++.h>
using namespace std;
int main(){
int num,guess,atmp=1;
cout<<"Search the number between 1 and 100"<<endl;

srand(time(0));
num=rand();
num=num%100+1;
do
{
    cin>>guess;
    if(guess>num){
    cout<<"enter lower number"<<endl;
    }
    else if(guess<num){
        cout<<"enter higher number "<<endl;      
    }
    else
{
cout<<"right answer"<<endl<<"you did it in "<<atmp<<" attemps"<<endl<<"congratulations"<<endl;
}   
   atmp++;
} while (num!=guess);



}