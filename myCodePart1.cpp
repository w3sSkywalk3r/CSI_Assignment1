//
//   COPYRIGHT (C) Student@zips.uakron.edu>, 2020  All rights reserved.
//   Student Name
//   Purpose: This is myCode and is based upon what we study for Comp Sci
//
#include <cassert>
#include <iosfwd>
#include <iostream>
#include <iomanip>
#include <limits>  // numeric_limits<std::streamsize> for validations


// these are declarations - prefer this or std:: prefix
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;


// ******************************************
// PLACE ALL OF TASK1'S stuff HERE, below
// ******************************************
#define identifier replacement     // allows user to enter an identifier that when the compiler comes across the identifier the value will be entered into the program
#ifdef starWars     // allows user to enter an identifier but also terminate that identifier
#endif      // follows the #ifdef statement, #if, and some other pre processor directives. The endif is what terminates the identifier.
//#line  1 ""     // assits in helping the programmer locate errors within their code by allowing the
            // programmer to name the line and also the file name assoicated with it
//#error      // gives the programmer an error message and indicates where the error was found


using std::string; //can store words or phrases as a variable
//using std::complex; // Allows the compiler to read and deal with complex numbers
using std::tuple; // Allows the user to create order sets to the n-tuple degree
using std::fixed;


static int uChoose = 0;

int
mainMenu();

void
variables();

void
consoleInput();

void
consoleOutput();

void
operations();

void
decisions();

void
iterations();

void
validations();

void
misc();

struct Test_myCode
{
  void
  default_beg()
  {
    uChoose = mainMenu();
    assert(!(std::cin.fail()));
    std::cout << " Main menu passed " << std::endl;
  }
  void
  whatAction()
  {
    switch (uChoose)
    {
      case (1):
        variables();
        break;
      case (2):
        consoleInput();
        break;
      case (3):
        consoleOutput();
        break;
      case (4):
        operations();
        break;
      case (5):
        decisions();
        break;
      case (6):
        iterations();
        break;
      case (7):
        validations();
        break;
      case (8):
        misc();
        break;
      default:
        cout << "no case";
    }
  }

  // The test runner for this test class.
  void
  run()
  {
    default_beg();
    whatAction();
  }

};


int
main()
{
  Test_myCode test;
  while (true)
  {
    test.run();
  }

}


int
mainMenu()
{
  // heading, input section
  cout << endl;
  cout << setw(68) << "__________________________________________________________________ " << endl;
  cout << setw(68) << "|------------------------------------------------------------------|" << endl;
  cout << setw(68) << "|                Wesley C  - The Programming Wizard                |" << endl;
  cout << setw(68) << "|                   Coded Potions and Spells                       |" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "   MAIN MENU"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "1) Variables"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "2) Console Input "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "3) Console Output"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "4) Operations"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "5) Decisions "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "6) Iterations    "
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "7) Variables"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "8) Miscellaneous"
       << right << setw(2) << "|" << endl;
  cout << left << setw(2) << "|" << setw(21) << " " << setw(43) << "Ctrl-c to Quit"
       << right << setw(2) << "|" << endl;
  cout << setw(68) << "|__________________________________________________________________|" << endl;
  cout << endl;
  int userChoice = 0;
  // take and validate the user entry

  cout << "Enter the code that you wish to generate, or quit to exit: "; // output stream a message
  cin >> userChoice;
  return userChoice;
}
// PLACE CODE HERE FOR EACH TASK
// TASK 1 CODE
void
variables()
{
  // A  ( looks like we did the first one for you :) )
  int var1;
  float var2;
  char var3;
  printf("Integer value is %d \n", var1);
  printf("Float value is %f \n", var2);
  printf("Char value is %c \n", var3);

  // B
    var1 = 3;
    var2 = 0.3964;
    var3 = 'a' ;
    printf("Integer value is %d \n", var1);
    printf("Float value is %f \n", var2);
    printf("Char value is %c \n", var3);
  // C
    var1 = 99;
    printf("I changed var1 and here is what happened: %d /n", var1);
  // D above
  // E above

  cout << "end of variables" << endl;
  cin.get();
}
// TASK 2 CODE (code inside of the braces of the task)
void
consoleInput()
{
    // A
    int var1 = 0;
  float var2 = 0;
  char var3 = 0;
  printf("Enter a value for var1: ");
  cin >> var1;
  printf("Input a float value for var2: ");
  cin >> var2;
  printf("Input a char value for var3: ");
  cin >> var3;
  printf("Here are the new values for var1, var2, and var3, respectively: %d, %f, and %c \n " , var1, var2, var3);

    // B

  char var4 = 'a';
  string var5 = "Hello There";
  float var6 = 40.434;

  printf("Enter a value for var4: \n" );
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');

  cin.get(var4);

  printf("Enter a value for var5: \n");
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
  std::getline(std::cin, var5);


  printf("Enter a value for var6: \n");
  cin >> var6;

  cin.ignore();
  printf("The Char value is %c \n ", var4);
  printf("The String value is %s \n", var5.c_str());
  printf("The Float value is %f \n", var6);

    //C
  printf("Please enter 'yo toe is big' \n");
  cin >> var5;

  printf("%s \n", var5.c_str());
  printf("Please enter 'yo toe is big' \n");
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
  getline(cin,var5);
  printf("%s \n", var5.c_str());
    std::cin.clear();
    //std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');


    //D
  short int var7;
  short int var8;
  printf("Please enter a value for var7 and var8: ");
  cin >> var7 >> var8;
  printf("Here are the values for var7 and var8: %d , %d \n" ,var7, var8);

    //E
  var7 = 32800;
  printf("%d" , var7);
  printf(" The reason why the value of 32800 does not display is due to the fact that we are using variable \n");
  printf("type short int whose range is -32767 to 32767, since 32800 is greater we yield the value -32736. \n");

  //F
  var7 = 'a';
  printf("%d \n" , var7);
  printf("The value that was printed for char 'a' was 97 because the ascii integer equivalent to 'a' is 97 \n");

  cout << "end of console input" << endl;
  cin.get();
}
// TASK 3 CODE (code inside of the braces of the task)
void
consoleOutput()
{
    //A
  int var1 = 2;
  float var2 = 3.409;
  char var3 = 'd';

  cout << "The value of var1 is: " << var1 << endl;
  cout << "The value of var2 is: " << var2 << endl;
  cout << "The value of var3 is: " << var3 << endl;

    //B
  float var4 = 0.34;
  float var5 = 2.51;
  float var6 = 3.79;

  float var7 = var4 + var5 + var6;
  cout << "The value of var7 is: " << var7 << endl;
  cout << "The value of var7 without using any variables is: " << 0.34 + 2.51 + 3.79 << endl;

     //C
  cout.precision(7);

  cout << "The value of var4 to precision 7 is: " << fixed << var4 << endl;
  cout << "The value of var5 to precision 7 is: " << fixed << var5 << endl;
  cout << "The value of var6 to precision 7 is: " << fixed << var6 << endl;

    //E
    std::cout << std::right << std::setw(15)  << "var4";
  std::cout << std::right << std::setw(15) <<  "var5";
  std::cout << std::right << std::setw(15)  << "var6" << endl;

    //D
  std::cout << std::right << std::setw(15)  <<  fixed << var4;
  std::cout << std::right << std::setw(15) <<  fixed << var5;
  std::cout << std::right << std::setw(15)  << fixed << var6 << endl;

    //F

  cout << std::setw(15) << std::setfill('0') << var4 << endl;
  cout << std::setw(15) << std::setfill('0') << var5 << endl;
  cout << std::setw(15) << std::setfill('0') << var6 << endl;
  cout << std::setw(15) << std::setfill('\0');

  cout << "end of console output" << endl;
  cin.get();
}
// TASK 4 CODE (code inside of the braces of the task)
void
operations()
{
    //A
    float var4 = 45.77;
    float var5 = 77.43;
    float var6 = ((var4 / var5)* 100);
    cout  << "The percentage is: " << var6 << " %" << endl;

    //B
    int var1 = 0;
    int var2 = 4;
    int var3 = 7;
    float var24 = var2 / static_cast<float>(var3);
    cout << "The result without truncation is: " << var24 << endl;

    //C
    long double var7 = 2000000 * 8000;
    cout << "The result of part C is: " << var7 << endl;

    //D
    int var8 = 0;
    cout  << "Please enter an integer between 1-999 for var8: ";
    cin >> var8;
    if ((std::cin.fail()) || var8 < 1 || var8 > 999)
    {
        cout << "The value entered must be a number between 1-999" << endl;
        cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
    }
    else
    {
        cout << "An integer between 1-999 was entered." << endl;
    }


  cout << "end of operations" << endl;
  cin.get();
}
// TASK 5 CODE (code inside of the braces of the task)
void
decisions()
{
    //A
    float var4 = 45.77;
    float var5 = 77.43;

    float var44 = ((var4 / var5)* 100);
    cout  << "The percentage is: " << var44 << " %" << endl;

    if (var44 >= 92.99)
    {
        cout << " The letter grade is A " << endl;
    }
    else if (var44 >= 89.99)
    {
        cout << " The letter grade is A- " << endl;
    }
    else if(var44 >= 86.99)
    {
        cout << " The letter grade is B+ " << endl;
    }
    else if(var44 >= 82.99)
    {
        cout << " The letter grade is B " << endl;
    }
    else if(var44 >= 79.99)
    {
        cout << " The letter grade is B- " << endl;
    }
    else if(var44 >= 76.99)
    {
        cout << " The letter grade is C+ " << endl;
    }
    else if(var44 >= 72.99)
    {
        cout << " The letter grade is C " << endl;
    }
    else if(var44 >= 69.99)
    {
        cout << " The letter grade is C- " << endl;
    }
    else if(var44 >= 66.99)
    {
        cout << " The letter grade is D+ " << endl;
    }
    else if(var44 >= 62.99)
    {
        cout << " The letter grade is D " << endl;
    }
    else if(var44 >= 60)
    {
        cout << " The letter grade is D- " << endl;
    }
    else if(var44 < 60)
    {
        cout << " The letter grade is F " << endl;
    }

    //B

    bool var7 = 0;
    cout << "Enter a boolean value for var7" << endl;
    cin >> var7;

    if(var7 == true)
    {
        cout << "The strategy calls for the university to buy bean bags." << endl;
    }
    else
    {
        cout << "The strategy saves expenditures for the university." << endl;
    }

    //C

    var5 = 55.7234;
    if ((1.5*77)> var5)
    {
        cout << "the computation is greater" << endl;
    }
    else
    {
        cout << "var5 is greater" << endl;
    }

    //D

    short int var6 = 199;
    var7 = true;

    if((var6 > 150) && (var7 == true))
    {
        cout << "The test is true" << endl;
    }

    else
    {
        cout <<"The test is false" << endl;
    }

  cout << "end of decisions" << endl;
  cin.get();
}
// TASK 6 CODE (code inside of the braces of the task)
void
iterations()
{
    //A
    int repetition = 0;
    float var4 = 45.77;
    float var5 = 77.43;
    while (repetition < 10)
    {

    cout << "Please enter a value for var4: " << endl;
    cin >> var4;
    cout << "Please enter a value for var5: " << endl;
    cin >> var5;
    if (var4 > var5)
    {
        cout << "Sorry points earned cannot be greater than total points, there is no extra credit";
        continue;
    }
    float var44 = ((var4 / var5)* 100);
    cout  << "The percentage is: " << var44 << " %" << endl;

    if (var44 >= 92.99)
    {
        cout << " The letter grade is A " << endl;
    }
    else if (var44 >= 89.99)
    {
        cout << " The letter grade is A- " << endl;
    }
    else if(var44 >= 86.99)
    {
        cout << " The letter grade is B+ " << endl;
    }
    else if(var44 >= 82.99)
    {
        cout << " The letter grade is B " << endl;
    }
    else if(var44 >= 79.99)
    {
        cout << " The letter grade is B- " << endl;
    }
    else if(var44 >= 76.99)
    {
        cout << " The letter grade is C+ " << endl;
    }
    else if(var44 >= 72.99)
    {
        cout << " The letter grade is C " << endl;
    }
    else if(var44 >= 69.99)
    {
        cout << " The letter grade is C- " << endl;
    }
    else if(var44 >= 66.99)
    {
        cout << " The letter grade is D+ " << endl;
    }
    else if(var44 >= 62.99)
    {
        cout << " The letter grade is D " << endl;
    }
    else if(var44 >= 60)
    {
        cout << " The letter grade is D- " << endl;
    }
    else if(var44 < 60)
    {
        cout << " The letter grade is F " << endl;
    }

    repetition ++;
    }

    //B
    char var7 = NULL;
    char var8 = NULL;

    while(1)
    {
        cout << "Please enter a value for var7: ";
        var8 = var7;
        cin >> var7;
        if(var7 == 'z')
        {
           break;
        }
        else if (!ispunct(var7))
        {
            cout << "Sorry this is not a punctuation character!" << endl;
            continue;
        }
        else if (var7 < var8)
            cout << "Your punctuation is lower than before." << endl;
        else
        {
            cout << "Your punctuation is higher than before." << endl;
        }
    }


    //C
    int var9 = 100;
    cout << "The value of var9 is: " << var9 << endl;
    while (var9 > 0)
    {
        var9 = var9 / 2;
        cout << "The value of var9 is: " << var9 << endl;
    }

    //D
    for (;var9 <= 127; ++var9)
    {
        cout << static_cast<char>(var9) << endl;
    }


  cout << "end of iterations" << endl;
  cin.get();
  }
// TASK 7 CODE (code inside of the braces of the task)
void
validations()
{
  char var10 = ' ';
  cout << "Please enter a letter for var10: ";
  cin >> var10;
  if ((var10 < 65) || (var10 > 122) )
  {
      cout << "You did not enter a letter value, " << var10 << " was invalid" << endl;

  }
  else
  {
      cout << var10 << " was valid" << endl;
  }



  cout << "end of validations" << endl;
  cin.get();
}
// TASK 8 CODE (code inside of the braces of the task)
void
misc()
{
  bool myFlag;
  //  A.	Fix this code:
  if (myFlag == 0)
  {
    std::cout << "My flag is true everyone!" << endl;
  }
  std::cout << "The code was wrong because inside the if statement the variable myFlag was" << endl << "only being assigned"
  << " the value of 0, in c++ language the way to say is equal to is with a double equal sign." << endl;
  // Add a comment to explain what is going on, and why?
  int myVar = 25;
  // B.	Try to improve this code (rewrite it):
  if (myVar > 0)
  {
    std::cout << "Greater!" << endl;
  }
  else if (myVar < 0)
  {
    std::cout << "Lesser!";
  }
  else
  {
    std::cout << "Same!";
  }

  std::cout << "The way to improve the code was by changing the code from three if statements," << endl << "to an if, else if, and trailing else"
  << endl << " because instead of having three different operations that the computer is running, once there is true statement" <<
  endl << " the other statements are skipped." << endl;
  // C
  int myNumber = 40;
  cout << myNumber++ << endl;
  cout << "Here is the value of myNumber after a postfix: " << myNumber << endl;
  cout << "Here is the value of myNumber with a prefix: " << ++myNumber << endl;
  cout << "end of miscellaneous" << endl;
  cin.get();
}


