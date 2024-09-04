#include <iostream>
using namespace std;

class item{
int number;	// private by default
float cost; // private by default
public:
void getdata(int a, float b);
void putdata(void){
    cout << "number =" << number<<endl; // defined inside the class
     cout <<  "cost=" << cost<<endl;
}
};

//	 Member Function Definition
void item :: getdata(int a, float b) // :: is  the membership label
{
number = a;	// private variables
cost = b;	// directly used
}

int main(){
item x;
cout<< "----Object x----"<<endl;

x.getdata(100, 299.95);
x.putdata();
item	y;
cout << endl<<"----Object y----"<< endl;
y.getdata(200, 175.50);
 y.putdata();
return 0;
}
