#include<iostream>
using namespace std;
int main(){
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;
    cout<<"enter the money: ";
    cin>>amount;
    switch(amount>=2000)
    {
    case 1:
        n2000=amount/2000;
        amount=amount-n2000*2000;
        break;
    }
    switch(amount>=500)
    {
    case 1:
        n500=amount/500;
        amount=amount-n500*500;
        break;
    }
    switch(amount>=200)
    {
    case 1:
        n200=amount/200;
        amount=amount-n200*200;
        break;
    }
    switch(amount>=100)
    {
    case 1:
        n100=amount/100;
        amount=amount-n100*100;
        break;
    }
    switch(amount>=50)
    {
    case 1:
        n50=amount/50;
        amount=amount-n50*50;
        break;
    }
    switch(amount>=20)
    {
    case 1:
        n20=amount/20;
        amount=amount-n20*20;
        break;
    }
    switch(amount>=10)
    {
    case 1:
        n10=amount/10;
        amount=amount-n10*10;
        break;
    }
    switch(amount>=5)
    {
    case 1:
        n5=amount/5;
        amount=amount-n5*5;
        break;
    }
    switch(amount>=2)
    {
    case 1:
        n2=amount/2;
        amount=amount-n2*2;
        break;
    }
    switch(amount>=1)
    {
    case 1:
        n1=amount/1;
        amount=amount-n1*1;
        break;
    }
    cout<<"notes of 2000 is :"<<n2000<<endl;
    cout<<"notes of 500 is :"<<n500<<endl;
    cout<<"notes of 200 is :"<<n200<<endl;
    cout<<"notes of 100 is :"<<n100<<endl;
    cout<<"notes of 50 is :"<<n50<<endl;
    cout<<"notes of 10 is :"<<n10<<endl;
    cout<<"notes of 5 is :"<<n5<<endl;
    cout<<"notes of 2 is :"<<n2<<endl;
    cout<<"notes of 1 is :"<<n1<<endl;
}