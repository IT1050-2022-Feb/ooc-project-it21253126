#include "Guest.h"
class User : public Guest
{
  protected : 
    char User_ID[6];

  public : 
    User ();
    User (const char U_ID[], char U_Name[], char U_Email[], char Gen[], int U_Age, float U_Height, float U_Weight);
    void Login();
    void Get_Healthy_Foods ();
    void Get_Diet_Plan ();
    void Contact_Doctors ();
    void Display_UID ();
    void Make_Payment ();
    ~User();
};