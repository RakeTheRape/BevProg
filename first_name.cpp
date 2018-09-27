#include "std_lib_facilities.h"

int main(){

	cout<<"Enter the name of the person you want to write to\n";
	string first_name;
	cin>>first_name;
	cout<<"Dear " <<first_name<<", \n";
	cout<<"\tI don't know what to write to you, or is it even matter what i type here, but here have some words: Beef, Clickity, Winston.\n";

	cout<<"Enter the name of an other friend.\n";
	string friend_name;
	cin>>friend_name;
	cout<<"\tHave you seen " <<friend_name<<" lately?\n";

	
	char friend_sex;
	const char m = 'm';
	const char f = 'f';
	cout<<"If the friend is male, please enter an 'm', if the friend is female, please enter an 'f'.\n";
	cin>>friend_sex;

	if (friend_sex == m){

	cout<<"\tIf you see "<<friend_name<<", please ask him to call me.\n";}
	else if (friend_sex == f){

			cout<<"\tIf you see "<<friend_name<<", please ask her to call me.\n";}
	else {
	simple_error("What don't you understand by 'f' or 'm', huh?\n");}

	int age;
	cout<<"Please enter his/her age.\n";
	cin>>age;
	cout<<"\tI hear you just had a birthday and you are "<<age<<" years old\n";

	if(age <=0 || age>=110){
		simple_error("you're kidding!\n");}

	if (age <12){
		cout<<"\tNext year you will be "<<age+1<<"."<<endl;}
	if (age == 17){
		cout<<"\tNext year you will be able to vote.\n";}
	if (age > 70){
		cout<<"\tI hope you are enjoying retirement.\n";}

	cout<<"\tYours sincerely"<<endl<<endl<<endl<<"\tBence H.\n";






	


	
}
