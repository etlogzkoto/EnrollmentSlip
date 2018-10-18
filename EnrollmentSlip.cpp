/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////


int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    
   cout << "ENTER DETAILS HERE"<< endl;
   cout << endl;
   string sn;
   cout << "Student Name        : ";
   getline (cin, sn);
   string pc;
   cout << "Program/Course      : ";
   getline (cin, pc);
   string yl;
   cout << "Year/Level          : ";
   getline (cin, yl);
   int yearlevel;
   yearlevel = stoi(yl);
   string numberofunits;
   cout << "No. of Units        : ";
   getline (cin, numberofunits);
   double units;
   units = stod(numberofunits);
   double rateperunit;
   if (yearlevel == 1){
       rateperunit = 1500;
   }else if(yearlevel == 2){
       rateperunit = 1800;
   }else if(yearlevel == 3){
       rateperunit = 2000;
   }else if(yearlevel == 4,5){
       rateperunit = 2300;
   }else{
       cout <<endl;
   }
   double tuition = rateperunit*units;
   double downpayment = tuition*0.3;
   double balance = tuition-downpayment;

    cout << endl;
    cout <<"-------------------------------------"<< endl;
    cout <<"        ENROLLMENT SLIP  " << endl;
    cout << endl;
    

   cout <<"Student Name        : "<< sn <<endl;
   cout <<"Program/Course      : "<< pc <<endl;
   cout <<"Year Name           : ";
  
   if (yearlevel == 1){
       cout <<"Freshman"<<endl;
   }else if(yearlevel == 2){
       cout <<"Sophomore"<<endl;
   }else if(yearlevel == 3){
       cout <<"Junior"<<endl;
   }else if(yearlevel == 4,5){
       cout <<"Senior"<<endl;
   }else{
       cout <<endl;
   }
   
   cout <<"No. of Units        : "<< units <<endl;
   cout <<"Tuition Fee         : "<< tuition <<endl;
   cout <<"Downpayment         : "<< downpayment <<endl;
   cout <<"Balance             : "<< balance <<endl;


      
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
