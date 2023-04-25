#include "assistant.h"
using namespace std;
//global variables
string greet;
int input;
assistant x; // main  object
void check2();
void check3();
void check4();
void check5();
void line();      // create new line
void repeat();     //ask user input again.
void repeat1();//input function
int main()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    string greet = "                                    GOOD DAY CUSTOMER";
    x.typing(greet);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Sleep(2000);
    system("CLS");
    repeat();
    return 0;
}
void repeat()//input function
{
    system("cls");
    cout<<endl;
    cout<<"CHOOSE FROM THE OPTIONS BELOW"<<endl;
    x.speak("Choose from the options below");
    Sleep(2000);
    cout<<endl;
    Sleep(2000);
    cout<<" [1] MEDICAL DIAGNOSIS                                [2] EXIT"<<endl;
    x.speak("Choose medical diagnosis for a medical assistant or exit if you would like to cancel");
    Sleep(2500);
    cout<<endl;
    cout<<"Choose Here : ";
    cin>>input;
    switch(input)
    {
    case 1:
        repeat1();
        break;
    case 2:
        exit(1);
        break;
    default:
        x.typing("Sorry, Unknown Command");
    }
}
void repeat1()//second input function
{
    system("cls");
    cout<<endl;
    cout<<"CHOOSE ONE OF THE OPTIONS BELOW"<<endl;
    x.speak("Choose one of the options below");
    cout<<endl;
    cout<<endl;
    cout<<" (Enter THE OPTION )                                               [0] go back"<<endl;
    cout<<endl;
    cout<<" [1] COMMON COLD                               [2] COVID 19"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<" [3] EPILEPSY                                  [4] DIABETES"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Type Here : ";
    cin>>input;
    switch(input)
    {
    case 1:
        check2();
        break;
    case 2:
        check3();
        break;
    case 3:
        check4();
        break;
    case 4:
        check5();
        break;
    case 0:
        repeat();
        break;
    default:
        x.typing("Sorry, Unknown command");
    }
}
void check2()//check condition function
{
    //ask symptoms to diagnose
    string x1,x2,x3,x4;
    x.typing("Do you have any of the following symptoms");
    Sleep(3000);
    cout<<endl;
    x.typing("Are you coughing?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x1;
    if(x1 == "yes")
    {
        x1 = "1";
    }
    else
    {
        x1 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you have a runny nose?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x2;
    if(x2 == "yes")
    {
        x2 = "1";
    }
    else
    {
        x2 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you have a sore throat?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x3;
    if(x3 == "yes")
    {
        x3 = "1";
    }
    else
    {
        x3 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Have you been sneezing?. Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x4;
    if(x4 == "yes")
    {
        x4 = "1";
    }
    else
    {
        x4 = "0";
    }
    cout<<endl;
    cout<<endl;
    //Propositional logic table
    if(x1 == "1" && x2 == "1" && x3 == "1" && x4 == "1")
    {
        x.typing("Chances are high you have a Common Cold.");
        Sleep(3000);
        x.typing("You can use the following treatment to treat it.");
        Sleep(3000);
        cout<<endl;
        x.typing("1 Get lots of rest.    2 Gargle with salt water.  3 Drink plenty of fluids.");
        Sleep(5000);
        cout<<endl;
        x.typing("Thank you for using our medical assistant.");
        system("PAUSE");
    }
    else
    {
        x.typing("You do not have a common cold.");
        Sleep(3000);
        x.typing("Try choosing another diagnosis.");
        system("PAUSE");
    }
    repeat1();
}
void check3()//check condition function
{
    //ask symptoms to diagnose
    string x1,x2,x3,x4;
    x.typing("Do you have any of the following symptoms");
    Sleep(3000);
    cout<<endl;
    x.typing("Do you have a fever?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x1;
    if(x1 == "yes")
    {
        x1 = "1";
    }
    else
    {
        x1 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Have you been feeling tired?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x2;
    if(x2 == "yes")
    {
        x2 = "1";
    }
    else
    {
        x2= "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you have a headache?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x3;
    if(x3 == "yes")
    {
        x3 = "1";
    }
    else
    {
        x3 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you have diarrhea?. Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x4;
    if(x4 == "yes")
    {
        x4 = "1";
    }
    else
    {
        x4 = "0";
    }
    cout<<endl;
    cout<<endl;
    //Propositional logic table
    if(x1 == "1" && x2 == "1" && x3 == "1" && x4 == "1")
    {
        x.typing("Chances are high you have a Covid-19.");
        Sleep(3000);
        x.typing("You can use the following treatment to treat it.");
        Sleep(3000);
        cout<<endl;
        x.typing("1 Get lots of res.    2 Use pain relievers.   3 If you are 65 years and older. I would encourage you to see a doctor.");
        Sleep(9000);
        cout<<endl;
        x.typing("Thank you for using our medical assistant.");
        system("PAUSE");
        exit(1);
    }
    else
    {
        x.typing("You do not have a Covid-19.");
        Sleep(3000);
        x.typing("Try choosing another diagnosis.");
        system("PAUSE");
    }
    repeat1();
}

void check4()//check condition function
{
    //ask symptoms to diagnose
    string x1,x2,x3;
    x.typing("Do you have any of the following symptoms");
    Sleep(3000);
    cout<<endl;
    x.typing("Have you had any seizures?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x1;
    if(x1 == "yes")
    {
        x1 = "1";
    }
    else
    {
        x1 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you feel confused before these seizures?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x2;
    if(x2 == "yes")
    {
        x2 = "1";
    }
    else
    {
        x2 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you get headaches?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x3;
    if(x3 == "yes")
    {
        x3 = "1";
    }
    else
    {
        x3 = "0";
    }
    cout<<endl;
    cout<<endl;
    //Propositional logic table
    if(x1 == "1" && x2 == "1" && x3 == "1")
    {
        x.typing("Chances are high you have a Epilepsy.");
        Sleep(3000);
        x.typing("You can use the following treatment to treat it.");
        Sleep(3000);
        cout<<endl;
        x.typing("1 Use medication named anti-epileptic drugs.  2 Go on a special ketogenic diet.");
        Sleep(7000);
        cout<<endl;
        x.typing("Thank you for using our medical assistant.");
        system("PAUSE");
        exit(1);
    }
    else
    {
        x.typing("You do not have a Epilepsy.");
        Sleep(3000);
        x.typing("Try choosing another diagnosis.");
        system("PAUSE");
    }
    repeat1();
}

void check5()//check condition function
{
    //ask symptoms to diagnose
    string x1,x2,x3,x4,x5;
    x.typing("Do you have any of the following symptoms");
    Sleep(3000);
    cout<<endl;
    x.typing("Have you been urinating frequently?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x1;
    if(x1 == "yes")
    {
        x1 = "1";
    }
    else
    {
        x1 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you have excessive thirst?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x2;
    if(x2 == "yes")
    {
        x2 = "1";
    }
    else
    {
        x2 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Do you get headaches?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x3;
    if(x3 == "yes")
    {
        x3 = "1";
    }
    else
    {
        x3 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Have you had unusual fatigue?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x4;
    if(x4 == "yes")
    {
        x4 = "1";
    }
    else
    {
        x4 = "0";
    }
    cout<<endl;
    cout<<endl;
    x.typing("Have you been feeling extremely hungry?.Enter Yes or No.");
    cout<<endl;
    cout<<endl;
    cin>>x5;
    if(x5 == "yes")
    {
        x5 = "1";
    }
    else
    {
        x5 = "0";
    }
    cout<<endl;
    cout<<endl;
    //Propositional logic table
    if(x1 == "1" && x2 == "1" && x3 == "1" && x4=="1" && x5=="1")
    {
        x.typing("Chances are high you have a Diabetes.");
        Sleep(3000);
        x.typing("You can use the following treatment to treat it.");
        Sleep(3000);
        cout<<endl;
        x.typing("1 Eat healthy.    2 Exercise regularly.   3 Monitor your blood sugar.     4 Use diabetes medication.      5 Go for insulin teraphy.");
        Sleep(10000);
        cout<<endl;
        x.typing("Thank you for using our medical assistant.");
        system("PAUSE");
        exit(1);
    }
    else
    {
        x.typing("You do not have a Epilepsy.");
        Sleep(3000);
        x.typing("Try choosing another diagnosis.");
        system("PAUSE");
    }
    repeat1();
}




