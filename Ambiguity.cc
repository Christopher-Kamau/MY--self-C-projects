//Ambiguity
#include<iostream>
using namespace std;
class A{
	public:
		void name(){
			cout<<"A \n";
		}
};

class B: virtual public A{};

class C: virtual public A{};

class D: public B,public C{};

int main(){
	D obj;
	obj.name();
	
	return 0;
}
