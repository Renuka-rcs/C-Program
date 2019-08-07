/************************Static Class Member***********************************/
#include<iostream>
using namespace std;
//class item created
class ITEM
{
	static int count;
	int number;
	public :
	void getdata(int a)
	{
		number = a;
		count++;
	}
	void getcount(void)
	{
		cout<<"count"<<count<<"\n";
	}
};

int ITEM :: count;

int main()
{
	ITEM a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();

	a.getdata(100);
	b.getdata(200);
	c.getdata(300);

	cout<<"After reading data"<<"\n";

	a.getcount();
	b.getcount();
	c.getcount();
	return 0;
}
