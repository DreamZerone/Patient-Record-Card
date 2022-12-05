#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class Patient_Login_Records 
{

private:
    ///patient_signup_data
    string Patient_Signup_UserId;
  
string Patient_Signup_Password;
  
    ///patient_Login_data
    string Patient_Login_Username;
  
string Patient_Login_Password;
  
    ///login_member_function
public:
void Patient_Signup ();
  
bool Patient_Login (string Patient_Login_Username,
		       
string Patient_Login_Password);

};


class Patient_Records 
{

private:
    ///patient_detail
    string Sex_Of_Patient = "Wating for new records.....";
  
string Name_Of_Patient = "Wating for new records.....";
  
string Age_Baseline = "Wating for new records.....";
  
 
    ///patient_Sickness_records
    string History_Diabetes = "Wating for new records.....";
  
string History_CHD = "Wating for new records.....";
  
string History_Vascular = "Wating for new records.....";
  
string History_Smoking = "Wating for new records.....";
  
string History_HTN = "Wating for new records.....";
  
string History_DLD = "Wating for new records.....";
  
string History_Obesity = "Wating for new records.....";
  
string DLDmeds = "Wating for new records.....";
  
string DMmeds = "Wating for new records.....";
  
string HTNmeds = "Wating for new records.....";
  
string ACEIARB = "Wating for new records.....";
  
string Cholesterol_Baseline = "Wating for new records.....";
  
string Creatinine_Baseline = "Wating for new records.....";
  
string eGFR_Baseline = "Wating for new records.....";
  
string sBP_Baseline = "Wating for new records.....";
  
string DBP_Baseline = "Wating for new records.....";
  
string BMI_Baseline = "Wating for new records.....";
  
string Time_To_Event_Months = "Wating for new records.....";
  
string EventCKD35 = "Wating for new records.....";
  
string TIME_YEAR = "Wating for new records.....";

 
public:
 
void Get_Sickness_Data ();
  
void Print_Sickness_Data ();

 
};


 
int 
main () 
{
  
    /////(A_Wild_Object)//
    Patient_Records Sickness[100][100];	////get_access_and_print_the_data
  
 
    ////login_class_object
  char Adding_Patient_Choice;
  
int Is_Successful;
  
int Return_Is_Successful;
  
int Index = 0;
  
int Index_No = 0;
  
cout << "                 !!Welcome to 'MEDIINFRA'!!       " << endl <<
    
endl;
  
cout << "Signup here....." << endl;
  
Patient_Login_Records Patient_Signup_Obj[100];	////login_class_variable 
  
char Restart_System;		/////Restart_System
  do
    
    {
      
 
      do
	
	{
	  
Patient_Signup_Obj[Index].Patient_Signup ();
	  
Index = Index + 1;
	  
cout <<
	    
"Do you want to add more new 'Patient' or 'signup' (y/n)?: ";
	  
cin >> Adding_Patient_Choice;	///adding_more_patient
	
}
      
while (Adding_Patient_Choice != 'n');	////until_not_to_add
      
char Logout_System;	/////////Logout_System
      do
	
	{
	  
 
int Start_Searching = 0;
	  
 
cout << "Do you want to login (y/n)?: ";
	  
char Login_Choice;
	  
cin >> Login_Choice;
	  
 
if (Login_Choice != 'n')
	    
	    {
	      
 
int Check_If_True = 1;
	      
while (Check_If_True)
		
		{
		  
 
		    ////searching_of_patient
		    string Search_Id, Search_Pwd;
		  
cout << "You can search any patient here!" << endl;
		  
cout <<
		    
"To search and login any patient write login ID and PASSWORD here!"
		    
 <<endl;
		  
cout << "Patient Login ID: ";
		  
cin >> Search_Id;
		  
cout << "Patient Login PASSWORD:";
		  
cin >> Search_Pwd;
		  
 
int Start_Searching = 0;
		  
for (Start_Searching; Start_Searching < Index;
			
Start_Searching++)
		    
		    {
		      
Return_Is_Successful =
			
Patient_Signup_Obj[Start_Searching].
			Patient_Login 
 (Search_Id, Search_Pwd);
		      
if (Return_Is_Successful == 1)
			
break;
		    
}
		  
if (Return_Is_Successful == 0)
		    
		    {
		      
cout <<
			
"Login unsuccessful incorrect username or password login again! "
			
 <<endl;
		      
Check_If_True = 1;
		    
}
		  
		  else
		    
		    {
		      
Check_If_True = 0;
		    
}
		
}
	      
switch (Return_Is_Successful)
		
		{
		
 
case true:
		  
		  {
		    
 
char Patient_Medical_History;
		    
 
cout <<
		      
"Do you want to view Patient_Medical_History(y/n)?:";
		    
cin >> Patient_Medical_History;
		    
if (Index_No >= 1)
		      
		      {
			
if (Patient_Medical_History != 'n')
			  
			  {
			    
for (int i = 0; i <= Start_Searching; i++)
			      
			      {
				
for (int j = 0; j <= Index_No; j++)
				  
				  {
				    
Sickness[i][j].Print_Sickness_Data ();
				  
} 
cout << endl;
			  
} 
}
		      
}
		    
		    else
		      
		      {
			
cout << "\nNo patient record found !!!\n" << endl;
		      
}
		    
cout <<
		      
"If you want new record of patient then Press(y) if not then(n):";
		    
char Add_New_Record;
		    
cin >> Add_New_Record;
		    
if (Add_New_Record != 'n')
		      
		      {
			
cout <<
			  
"Please enter all the type of sickness of patient!!!"
			  
 <<endl;
			
 
Sickness[Start_Searching][Index_No].
			  Get_Sickness_Data 
 ();
		      
}
		    
 
char View_Data;
		    
cout << "Do you want to view the data(y/n)? :";
		    
cin >> View_Data;
		    
if (View_Data != 'n')
		      
Sickness[Start_Searching][Index_No].
			Print_Sickness_Data 
 ();
		    
 
 
 
cout <<
		      
"Do you want to view Patient_Medical_History(y/n)?:";
		    
cin >> Patient_Medical_History;
		    
if (Patient_Medical_History != 'n')
		      
		      {
			
for (int i = 0; i <= Start_Searching; i++)
			  
			  {
			    
for (int j = 0; j <= Index_No; j++)
			      
			      {
				
Sickness[i][j].Print_Sickness_Data ();
			      
} 
cout << endl;
		      
 
} 
 
}
		  
 
} 
 
cout <<
		    
"Well done! all the task completed return to main menu!!"
		    
 <<endl;
		  
 
break;
		
 
}
	      
Index_No++;
	    
}
	  
 
cout <<
	    "System application Logout Please login again......:(y/n):";
	  
cin >> Logout_System;
	
 
}
      
while (Logout_System != 'n');
      
 
cout << "Restart The System application...... ::y/n::";
      
cin >> Restart_System;
    
}
  
while (Restart_System != 'n');
  
 
cout << "All the process !(abnormally) terminated... thankyou!";
  
return 0;

}


 
void 
Patient_Login_Records::Patient_Signup () 
{
  
cout << "Enter Patient Username: ";
  
cin >> Patient_Signup_UserId;
  
cout << "Enter Patient Password: ";
  
cin >> Patient_Signup_Password;
  
cout << "Signup successful now you can login!" << endl;

} 
 
bool 
  Patient_Login_Records::Patient_Login (string Patient_Login_Username,
					
string Patient_Login_Password) 
{
  
 
if ((Patient_Signup_UserId) == (Patient_Login_Username) 
	 &&(Patient_Signup_Password) == (Patient_Login_Password))
    
    {
      
 
cout << "Login Successful!" << endl;
      
return true;
    
}
  
  else
    
    {
      
return false;
    
}

}


 
////Get_Sickness_Data
void 
Patient_Records::Get_Sickness_Data () 
{
  
    ///Patient_Records
    cout << "Gender_Of_Patient:";
  
cin >> Sex_Of_Patient;
  
cout << "Name_Of_Patient:";
  
cin >> Name_Of_Patient;
  
cout << "Age_Baseline:";
  
cin >> Age_Baseline;
  
 
    ///patient_Sickness_records
    cout << "History_Diabetes:";
  
cin >> History_Diabetes;
  
cout << "History_CHD:";
  
cin >> History_CHD;
  
cout << "History_Vascular:";
  
cin >> History_Vascular;
  
cout << "History_Smoking:";
  
cin >> History_Smoking;
  
cout << "History_HTN:";
  
cin >> History_HTN;
  
cout << "History_DLD:";
  
cin >> History_DLD;
  
cout << "History_Obesity:";
  
cin >> History_Obesity;
  
cout << "DLDmeds:";
  
cin >> DLDmeds;
  
cout << "DMmeds:";
  
cin >> DMmeds;
  
cout << "HTNmeds:";
  
cin >> HTNmeds;
  
cout << "ACEIARB:";
  
cin >> ACEIARB;
  
cout << "Cholesterol_Baseline:";
  
cin >> Cholesterol_Baseline;
  
cout << "Creatinine_Baseline:";
  
cin >> Creatinine_Baseline;
  
cout << "eGFR_Baseline:";
  
cin >> eGFR_Baseline;
  
cout << "sBP_Baseline:";
  
cin >> sBP_Baseline;
  
cout << "DBP_Baseline:";
  
cin >> DBP_Baseline;
  
cout << "BMI_Baseline:";
  
cin >> BMI_Baseline;
  
cout << "Time_To_Event_Months:";
  
cin >> Time_To_Event_Months;
  
cout << "EventCKD35:";
  
cin >> EventCKD35;
  
cout << "TIME_YEAR:";
  
cin >> TIME_YEAR;

} 
 

///Print_Sickness_Data
void 
Patient_Records::Print_Sickness_Data () 
{
  
    ////print_patient_data
    cout << "_____________________________________" << endl;
  
cout << "-------------------------------------|" << endl;
  
cout << setw (25) << "Gender of patient |";
  
cout << setw (10) << Sex_Of_Patient;
  cout << "  |" << endl;
  
cout << setw (25) << "Name of patient |";
  
cout << setw (10) << Name_Of_Patient;
  cout << "  |" << endl;
  
cout << setw (25) << "Age of patient |";
  
cout << setw (10) << Age_Baseline;
  cout << "  |" << endl;
  
cout << "-------------------------------------|" << endl;
  
cout << "_____________________________________|" << endl;
  
 
 
 
/////Print_Sickness_Data
    cout << "1___________________________________________________________" <<
    
endl;
  
cout << setw (25) << "History_Diabetes |";
  
cout << setw (19) << History_Diabetes;
  cout << setw (17) << "|" << endl;
  
 
cout << "2___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_CHD |";
  
cout << setw (19) << History_CHD;
  cout << setw (17) << "|" << endl;
  
 
cout << "3___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_Vascular |";
  
cout << setw (19) << History_Vascular;
  cout << setw (17) << "|" << endl;
  
 
cout << "4___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_Smoking |";
  
cout << setw (19) << History_Smoking;
  cout << setw (17) << "|" << endl;
  
 
cout << "5___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_HTN |";
  
cout << setw (19) << History_HTN;
  cout << setw (17) << "|" << endl;
  
 
cout << "6___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_DLD |";
  
cout << setw (19) << History_DLD;
  cout << setw (17) << "|" << endl;
  
 
cout << "7___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "History_Obesity |";
  
cout << setw (19) << History_Obesity;
  cout << setw (17) << "|" << endl;
  
 
cout << "8___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "DLDmeds |";
  
cout << setw (19) << DLDmeds;
  cout << setw (17) << "|" << endl;
  
 
cout << "9___________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "DMmeds |";
  
cout << setw (19) << DMmeds;
  cout << setw (17) << "|" << endl;
  
 
cout << "10__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "HTNmeds |";
  
cout << setw (19) << HTNmeds;
  cout << setw (17) << "|" << endl;
  
 
cout << "11__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "ACEIARB |";
  
cout << setw (19) << ACEIARB;
  cout << setw (17) << "|" << endl;
  
 
cout << "12__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "Cholesterol_Baseline |";
  
cout << setw (19) << Cholesterol_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "13__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "Creatinine_Baseline |";
  
cout << setw (19) << Creatinine_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "14__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "eGFR_Baseline |";
  
cout << setw (19) << eGFR_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "____________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "sBP_Baseline |";
  
cout << setw (19) << sBP_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "16__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "DBP_Baseline |";
  
cout << setw (19) << DBP_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "17__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "BMI_Baseline |";
  
cout << setw (19) << BMI_Baseline;
  cout << setw (17) << "|" << endl;
  
 
cout << "18__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "Time_To_Event_Months |";
  
cout << setw (19) << Time_To_Event_Months;
  cout << setw (17) << "|" << endl;
  
 
cout << "19__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "EventCKD35 |";
  
cout << setw (19) << EventCKD35;
  cout << setw (17) << "|" << endl;
  
 
cout << "20__________________________________________________________|"
    << 
endl;
  
cout << setw (25) << "TIME_YEAR |";
  
cout << setw (19) << TIME_YEAR;
  cout << setw (17) << "|" << endl;
  
cout << "____________________________________________________________|" <<
    
endl;

} 
 

