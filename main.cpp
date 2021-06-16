#include <iostream>
class fuel 
{
    float weight;
    float distance;
    float total_fuel;
    public:
    void getdata(void);
    void display(void);

};
void fuel::getdata()
{
    std::cout<<"Enter the weight of your jet";
    std::cin>> weight;
    std::cout<<"Enter the distance you want to fly";
    std::cin>> distance;
    total_fuel=(weight)/(distance);
}
void fuel::display()
{
    std::cout<<"Total Fuel to be carried"<<total_fuel;

}
int main()
{
    fuel f;
    f.getdata();
    f.display();
}