#include <iostream>

using namespace std;

class employee
{
	int   emp_id;
	char  emp_name[50];
	char emp_role[50];
	int emp_age;
	int emp_salary;
	int emp_experience;
	char emp_city[20];
	char emp_compny_name[30];
	
	public:

		void get_emp_details();
		void show_emp_details();
};

void employee ::  get_emp_details()
{
	cout<<"\nEnter employee id: ";
	cin>>emp_id;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee role: ";
	cin>>emp_role;
	cout<<"\nEnter employee age: ";
	cin>>emp_age;
	cout<<"\nEnter employee salary: ";
	cin>>emp_salary;
	cout<<"\nEnter employee experience: ";
	cin>>emp_experience;
	cout<<"\nEnter employee city: ";
	cin>>emp_city;
	cout<<"\nEnter employee compny name: ";
	cin>>emp_compny_name;
}

void employee::show_emp_details()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee id      :  "<<emp_id;
	cout<<"\nEmployee name    :  "<<emp_name;
	cout<<"\nEmployee role    :  "<<emp_role;
	cout<<"\nEmployee age     :  "<<emp_age;
	cout<<"\nNet salary       :  "<<emp_salary;
	cout<<"\nEmployee experience  :  "<<emp_experience<<" year";
	cout<<"\nEmployee city    :  "<<emp_city;
	cout<<"\nEmployee compny name :  "<<emp_compny_name;
	cout<<"\n-------------------------------\n\n";
}
int main()
{
    employee emp[2];
    cout<<"Enter the employeeinformation:"<<endl;
    for(int i=0;i<2;i++)
    {
    	emp[i].get_emp_details();
	}
    cout<<endl<<"The employee information is:";
    cout<<endl<<"ID \t name \t role \t salary \t age \t exp \t compny_name \t city";
    for(int i=0; i<2; i++)
    {
    	emp[i].show_emp_details();
	}
}
