//jobayer
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//class definitin
class Staff {
   private:
   string name;
   string staff_number;
string faculty   ;   
   int age;
public :
       Staff( string name, string staff_number, string faculty , int age   ){
          
           this->name = name;          
           this->staff_number = staff_number;          
           this->faculty = faculty;          
           this->age = age;
              
       }
       //getters
       string getName()
       {
           return name;
       }
      
       string getStaff_number()
       {
           return staff_number;
       }

       string getFaculty()
       {
           return faculty;
       }
      
       int getAge()
       {
           return age;
       }
      
              
      
//setters
       void setName(string name)
       {
           this->name = name;
       }
      
       void setStaff_number(string staff_number)
       {
           this->staff_number = staff_number;
       }
      
       void setFaculty(string faculty)
       {
           this->faculty = faculty;
       }
      
       void setAge(int age)
       {
           this->age = age;
       }
      
       //member function
      
      
       // displayStaff
       void displayStaff()
       {  
          
           cout << "name :" << name <<endl;          
           cout << "staff_number :" << staff_number <<endl;
           cout << "faculty :" << faculty <<endl;
           cout << "age :" << age <<endl;
       }
};

// main
int main(){
  
   Staff a = Staff("Min Ho", "143", "Medicine" , 30);
   Staff b = Staff("Ji Woo", "437", "Agriculture" , 42);
   Staff c = Staff("Fattah", "321", "Aeronautic" , 26);
  
   cout << "displaying staff A" <<endl;
   a.displayStaff();
  
   cout << endl << "displaying staff B" <<endl;
   b.displayStaff();
  
   cout << endl<< "displaying staff C" <<endl;
   c.displayStaff();
  
   return 1;
  
}

