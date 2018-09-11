#include <iostream>

using namespace std;

class Cat
{
    public:
    void walk()
    {
        cout<<"cat walkiing..."<<endl;
    }
    private:
    void eat()
    {
        cout<<"cat eating..."<<endl;
    }

};
class Dog
{
    public:
    void walk()
    {
        cout<<"walkiing..."<<endl;

    }

    void eat()
    {
        cout<<"eating..."<<endl;
        Cat cat;
        cat.eat();
    }

};

int main()
{
       Dog dog;
       dog.eat();
       dog.walk();

    return 0;
}
