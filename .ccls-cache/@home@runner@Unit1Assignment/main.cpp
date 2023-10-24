//Dr. T help on Unit 1 Assignment COSC-1437 Dr. Tyson McMillan, code
//Student: Rickardo Martinez
#include <iostream>
using namespace std; 

void showMenu(); 
void calcVelocity(); 
void calcAcceleration();
void calcMotion();


int main() 
{
  int choice = 0;
  do
  {
      showMenu(); // call the show menu function
      cin >> choice; 
      if(choice == 1)
      {
        calcVelocity(); //call the calcVelocity() function
      }
      else if(choice == 2)
      {
        //calcAcceleration() 
      }
  }while(choice != 7);  
  return 0; 
}

void showMenu()
{
  cout << "Menu\n";
  cout << "1. calc velocity\n";
  cout << "2. calc acceleration\n";
  cout << "3. calc motion\n";
  cout << "4. calc newton's 2nd law\n";
  cout << "5. calc weight\n";
  cout << "6. calc momentum\n";
  cout << "7. Exit\n";
  cout << "8. clear screen\n";
  cout << "Enter your choice: ";
}

void calcVelocity()
{
  double ds = 0.0, dt = 0.0; // ds = ds (distance)
  cout << "Velocity Calculator\n";
  cout << "Enter ds (d = ds): ";
  cin >> ds; 
  cout << "Enter dt (d = dt): ";
  cin >> dt; 
  cout << "Velocity = " << ds / dt << endl;

}
void Accerlation();
{
  double dv = 0.0, dt = 0.0; // dv = dv (distance)
  