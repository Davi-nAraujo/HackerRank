#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

class Box{
    private:
    int l, b, h;

    public:
    //default constructor
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
     //parameterized constructor
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }   
    //copy constructor
    Box(Box const& B){
        l =  B.l;
        b = B.b;
        h = B.h;
    }
    
    //functions
    int getLength() const{
       return l;
    }
    int getBreadth() const{
       return b;
    }
    int getHeight() const{
       return h;
    }
    long long CalculateVolume(){
        return ((long long)l*b*h);
    }
    
    // < overloading
    bool operator<(Box const& C) const {
        return (l<C.l) || ((b<C.b)&&(l==C.l)) || ((h<C.h)&&(b==C.b)&&(l==C.l));  
    }
    
    friend ostream& operator<<(ostream& texto, Box const& B);
};

ostream& operator<<(ostream& texto, Box const& B){
    texto << B.getLength() << " " << B.getBreadth() << " " << B.getHeight() ;  
    return texto;   
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}

