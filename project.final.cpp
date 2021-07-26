#include <iostream>
#include <conio.h>
#include <cstdio>
#include <string.h>
#include <cstdlib>
using namespace std;
static int p =0;
class a
{
	private:
	char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
	public:
	void install();
	void allotment();
	void empty ();
	void show ();
	void avail ();
	void position (int i);
		
};
a[10];
void vline (char ch)
{
	for(int i=80; i>0; i--)
	cout<<ch;
}
void a::install()
{
	cout<<"enter bus no";
	cin>>a[p].busn;
	cout<<"\nEnter driver name:";
	cin>>bus[p].driver;
	cout<<"\nArrival time:";
	cin>>bus[p].arrival;
	cout<<"\ndeparture time:";
	cin>>bus[p].depart;
	cout<<"\nForm:\t\t\t";
	cin>>bus[p].form;
	cout<<"\nto:\t\t\t";
	cin>>bus[p].to;
	bus[p].empty();
	p++;
}
void a::allotment()
{
	int seat;
	char number[5];
	top;
	cout<<"bus no:";
	cin>>number;
	int n;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n].busn,number)==0)
		break;
	}
	while(n<=p)
	{
		cout<<"\nSeat number:";
		cin>>seat;
		if(seat>32)
		{
			cout<<"\n there are only 32 seats available in this bus.";
			
		}
		else
		{
			if(strcmp(bus[n].seat[seat/4][seat%4]-1],"Empty")==0)
			
	
	
	{
		cout<<"enter passenger name:";
		cin>>bus[n].seat[seat/4][(seat%4)-1];
		break;
		
	}
		else
		cout<<"the seat number is already resverd\n";
	}

     if(n>p)
     {
     	cout<<"Enter bus number.\n ";
     	goto top;
	 }
}
}
void::empty(){
	for(int i=0; i<8;i++)
	{
		for(int j=0; j<4; j++)
		{
			strcpy(bus[p].seat[i][j],"empty");
			
		}
	}
}
vvoid a::show(){
	int n;
	char number[5];
	cout<<"enter bus  number:";
	cin>>number;
	for(n=0; n<=p; n++)
	{
		if(strcmp(bus[n].busn,number)==0)
		break;
	}
	while(n<=p){
		vline("*");
		cout<<"bus no:\t"<<bus[n].busn<<"\ndriver:\t"<<bus[n].driver<<"\t\tArrival time:"<<bus[n].depart<<"\nForm:\t\t"<<bus[n].form<<"\t\tTo:\t\t"<<bus[n].to<<"\n";
		vLine("*");
		bus[0].position(n);
		int a=1;
		for(int i=0; i<8; i++)
		{
			for(int j=0; j<4; j++)
			{
				a++;
				
				if(strcmp(bus[n].seat[i][j],"Empty")!=0)
				cout<<"\nThe Seat no is"<<(a-1)<<"is reserved for"<<bus[n].seat[i][j]<<".";
			}
		}
		break;
	}
   if(n>p)
    cout<<"enter correct bus no;";
	
}
void a::position(int I){
	int s=0; p=0;
	for(int i=0; i<8; i++)
	{
		cout<<"\n";
		for(int j=0; j<4; j++)
		{
			s++;
			if(strcmp(bus[i].seat[i][j],"Empty")==0)
			{
				cout.width(5);
				cout.fill("");
				cout<<s<<".";
				cout.width(10);
				cout.fill("");
				cout<<bus[i].seat[i][j];
				p++;
			}
			else{
				cout.width(5);
				cout.fill("");
				cout<<s<<".";
				cout<<.width(10);
				cout.fill("");
				cout<<bus[i].seat[i][j];
			}
		}
	}
	cout<<"\n\nThere are"<<p<<"seats empty in bus no:"<<bus[i].busn;
}
void a::avail(){
	
	for(int n=0; n<p; n++){
	vline('*');
	cout<<"Bus no:\t"<<bus[n].busn<<"\ndriver:\t"<<bus[n].driver
	<<"\t\tArrival time:\t"<<bus[n].arrival<<"\tDeparture Time:\t"
	<<bus[n].depart<<"\nFrom:\t\t"<<bus[n].form<<"\t\tTo:\t\t\t"
	<<bus[n].to<<"\n";
	vline('*');
	vline('_');	
	}
}
int main(){
	system("cls");
	int w;
	while(1)
	{
		//system("cls");
		cout<<"\n\n\n\n\n";
		cout<<"\t\t\t1.install\n\t\t\t"
		<<"2.resverstion\n\t\t\t"
		<<"3.show\n\t\t\t"
		<<"4.Buses Available.\n\t\t\t"
		<<"5.exit";
		cout<<"\n\t\t\tEnter your choice:->";
		cin>>w;
		
		switch(w)
		{
			case 1:bus[p].install();
				break;
				case 2: bus[p].allotment();
				break;
				case 3:bus[0].show();
				break;
				case 4: bus[0].avail();
				break;
				case 5: exit(0);
				
			}
		}
	return 0;	
	}
	

