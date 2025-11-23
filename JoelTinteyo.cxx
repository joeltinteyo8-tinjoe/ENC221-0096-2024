#include<iostream>
using  namespace std;


class Roommate {
public:
	string name;
	string college;
	string hobby;
	int age;
	string talent;
	string course;
	
	void  display_roommate_details(){
		cout<<"THE DESCRIPTION OF MY ROOMMATE IS!!!"<<endl;
		cout<<"Name -"<<name<<endl;
		cout<<"College -"<<college<<endl;
		cout<<"Hobby -"<<hobby<<endl;
		cout<<"Age -"<<age<<endl;
		cout<<"Talent -"<<talent<<endl;
		cout<<"Course -"<<course<<endl;
	};
};	
int main(){
	Roommate Isaiah_Timah;
	Isaiah_Timah.name="Isaiah Timah";
	Isaiah_Timah.college="COETEC";
	Isaiah_Timah.hobby="movies";
	Isaiah_Timah.age=20;
	Isaiah_Timah.talent="basket ball";
	Isaiah_Timah.course="WATER ENGINEERING";
	
	Isaiah_Timah.display_roommate_details();

return 0;
	}