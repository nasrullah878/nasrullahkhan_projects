#include <iostream>
#include "head.h"
using namespace std;
void nasrullah::input_private(){
cout<<"enter values for phone_number : "<<endl;
cin>>phone_number;
cin.ignore();
cout<<"Enter values for address : ";
getline(cin, address);
//cin>>address;
};
void nasrullah::display(){
cout<<"The phone_number is :"<<phone_number<<endl;
cout<<"The address is :"<<address<<endl;

};
void nasrullah::input_public(){
cout<<"Enter values for  age : "<<endl;
cin>>age;
cout<<"Enter values for height : ";
cin>>height;
cout<<"Age is :"<<age<<endl;
cout<<"Height is :"<<height<<endl;
}
