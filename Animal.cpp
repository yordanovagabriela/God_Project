#include "Animal.h"
#include "RandomG.h"
#include <iosteam>

using namespace std;

Animal::Animal() 
{ 
  name = " ";
  energy = 0;
  power = 0;
  size = 0;
  weight = 0;
  point = new Point2D();
  state = State.Unknown;
}

Animal::Animal(string name, double energy, double power, double size, double weight, Point2D *point, State state) : Entity(name, energy, power, size, weight, point, state)
{      
}                   

void Animal::Eat()
{
     RandomG food;
     weight += food.RandomNumber();
     setState(Eating);
 }
 
void Animal::Sleep()
{
     RandomG food;
     energy += food.RandomNumber();
     setState(Sleeping);     
 } 

void Animal::SearchingForFood()
{
     RandomG food;
     power -= food.RandomNumber();
     setState(SearchingForFood);
 }
