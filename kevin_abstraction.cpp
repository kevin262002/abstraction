#include<iostream>

using namespace std;

class Admin{
	
	protected:
		char com_name[20] = "SJA";
		int manager_salary = 25000;
		int employe_salary = 10000;
		int total_staff = 3;
	private:
		int total_revenue = 5000000;
		char can_terminate[20] = "yes";
		
		void myaccess(){
			
			cout<<com_name<<endl;
			cout<<manager_salary<<endl;
			cout<<employe_salary<<endl;
			cout<<total_staff<<endl;
			cout<<total_revenue<<endl;
			cout<<can_terminate<<endl;	
		}
};

class Manager : public Admin{
	
	public:
		
		void myaccess(){
			
			cout<<com_name<<endl;
			cout<<manager_salary<<endl;
			cout<<employe_salary<<endl;
			cout<<total_staff<<endl;	
		}	
};

class Employe : public Manager{
	
	public:
		
		void myaccess(){
			
			cout<<com_name<<endl;
			cout<<employe_salary<<endl;
			cout<<total_staff<<endl;		
		}
};

int main(){
	
	Employe obj;
	
	obj.Admin::myaccess();
	obj.Manager::myaccess();
	obj.myaccess();
	
	
	
	return 0;
}
