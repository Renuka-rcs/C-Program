#include<iostream>
using namespace std;
class person
{
	char name[15];
	int age;
	public:
	    void getdata(void);
	    void display(void);
};
void person :: getdata(void)
{
	cout<<"Enter name\n";
	cin>>name;
	cout<<"Enter age\n";
	cin>>age;
}
void person :: display(void)
{
	cout<<"Name->"<<name;
	cout<<"\nage->" <<age;
	cout<<"\n";
}
int main()
{
	person p;
	p.getdata();
	p.display();
	 
	return 0;
}
	

