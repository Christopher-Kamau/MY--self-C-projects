#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int salary;
		
    public :
    	void setName(string n){
		name = n;	
		}
		void setSalary(int s){
			salary = s;
		}
		string getName(){
			return name ;
		}
		int getSalary(){
			return salary;
		}
};		
		
int main(){
	Employee emp;
	
	emp.setName("chris");
	emp.setSalary(7000);
	
	cout<<"Name: "<<emp.getName()<<endl;
	cout<<"Salary: "<<emp.getSalary()<<endl;
	return 0;
}		
