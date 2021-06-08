#include <iostream>
int main()
{  airplane::data (); 
    

    fuel2.weight=150000;
    fuel2.distance=2400;
    fuel2.fuel= fuel2.weight/fuel2.distance;

    std::cout<<"Fuel Required is /n" << fuel2.fuel;

    return 0;


    
    
}
    
class airplane 
{
    float weight;
    float distance;
    float fuel;
    
    public:
    void data(float weight, float distance );

   
    
};
