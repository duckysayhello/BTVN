#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
    private:
    int l,b,h;
     
    public:
    
    Box()
    {
        l=0;
        h=0;
        b=0;
    }
    Box(int m, int n, int p)
    {
        l=m;
        b=n;
        h=p;
    }
    Box(const Box& bos)
    {
        l=bos.l;
        b=bos.b;
        h=bos.h;   
    }
    
    int getLength() const
    {
        return l;
    }
    int getBreadth() const
    {
        return b;
    }
    int getHeight() const
    {
        return h;
    }
    long long CalculateVolume() const
    {
        return static_cast<long long>(l)*b*h;
    }
    
    bool operator<(Box& b)
    {
        if (this->l<b.l) return 1;
        else if ((this->b<b.b)&&(this->l==b.l)) return 1;
        else if ((this->h<b.h)&&(this->l==b.l)&&(this->b==b.b)) return 1;
        else return 0;
    }
    
    friend ostream& operator<<(ostream& out, Box& box)
    {
        out<<box.l<<" "<<box.b<<" "<<box.h;
        return out;
    }
};

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