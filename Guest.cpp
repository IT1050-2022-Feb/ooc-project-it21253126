#include <iostream>
#include <cstring>
#include "Guest.h"
using namespace std;


Guest :: Guest (const char U_Name[],const char U_Pass[], const char U_Email[], const char Gen[], int U_Age, float U_Height, float U_Weight)
{
  strcpy (User_Name, U_Name);
  strcpy (Password, U_Pass);
  strcpy (Email, U_Email);
  strcpy (Gender, Gen);
          
  int Age = U_Age;
  float Height = U_Height;
  float Weight = U_Weight;
}

void Guest :: Register ()
{
  
}
float Guest :: Calculate_BMI ()
{
  return Weight / Height * Height;
}
void Guest :: Get_Healthy_Foods ()
{
  
}
        
void Guest :: Display_Details ()
  {
    cout << "User Name : " << User_Name << endl;
    cout << "Email : " << Email << endl;
    cout << "Age : " << Age << endl;
    cout << "Height : " << Height << endl;
    cout << "Weight : " << Weight << endl;
    cout << "Gender : " << Gender << endl;
  }
Guest :: ~Guest();