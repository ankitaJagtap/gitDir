#include<iostream>
using namespace std;

class add
{   public:
    int num1,num2;

    public:
    void read()
    {
    cout<<"Enter two numbers:";
    cin>>no1>>no2;
    }
    void display()
    {
    cout<<no1<<no2;
    }

    void sum()
    {
    cout<<"addition is:"<<no1+no2;
    }
};

int main()
{
add obj;
obj.read();
obj.display();
obj.sum();
}



