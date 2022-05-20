#include <iostream>
using namespace std;

class Guest 
{   
protected :
  char User_Name[20];
  char Password[15];
  char Email[35];
  int Age;
  float Height;
  float Weight;
  char Gender[6];

public :
  Guest ();
  Guest (const char U_Name[], const char U_Pass[], const char U_Email[], const char Gen[], int U_Age, float U_Height, float U_Weight);
        
  void Register ();
  float Calculate_BMI ();
  void Get_Healthy_Foods ();
  void Display_Details ();
  ~Guest ();
   
};