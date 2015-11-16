#include <iostream>
using namespace std;

class Singleton{
    public:
        static Singleton * instance;
        static Singleton * GetInstance();
    private:
        Singleton();
};

Singleton * Singleton::instance = NULL;

Singleton * Singleton::GetInstance()
{
    if (instance == NULL)
    {
        instance = new Singleton();
    }
    return instance;
}
Singleton::Singleton()
{
    cout<<"Instance Get."<<endl;
}
int main()
{
    cout<<"the first instance:"<<endl;
    Singleton *FirstInstance = Singleton::GetInstance();
    cout<<"the second instance:"<<endl;
    Singleton * SecondInstance = Singleton::GetInstance();
    return 0;

}
