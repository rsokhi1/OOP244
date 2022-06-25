# Workshop #1: Modules   
 
In process of doing your first workshop, in part 1 section you are to sub-divide a program into modules, compile each module separately and construct an executable from the results of each compilation. In part 2 (**DIY**) you are to write a module to be used throughout the semester based on your knowledge of ipc144 subject; Cstrings, pointers.

## Learning Outcomes

Upon successful completion of this workshop, you will have demonstrated the abilities to:
- organize source code into modules, using header and implementation files;
- compile and link modular programs;
- distinguish the contents of a header and an implementation file;
- describe to your instructor what you have learned in completing this workshop.



## Submission Policy

This workshop is divided into two coding parts and one non-coding part:

- Part 1: A step-by-step guided workshop, worth 50% of the workshop's total mark that is due on **Thursday at 23:59:59** of the week of your scheduled lab.
> Please note that the part 1 section is **not to be started in your first session of the week**. You should start it on your own before the day of your OOP244 class and join the first session of the week to ask for help and correct your mistakes (if there are any).
- Part 2 (**DIY**): A Do It Yourself type of workshop that is much more open-ended and is worth 50% of the workshop's total mark. This part is due on **Sunday at 23:59:59** of the week of your scheduled lab.  
- *reflection*: non-coding part, to be submitted together with *DIY* part. The reflection doesn't have marks associated with it but can incur a **penalty of max 40% of the whole workshop's mark** if your professor deems it insufficient (you make your marks from the code, but you can lose some on the reflection).
- Submissions of part 2 that do not contain the *reflection* (that is the **non-coding part**) are not considered valid submissions and are ignored.


If at the deadline the workshop is not complete, there is an extension of **one day** when you can submit the missing parts.  **The code parts that are submitted late receive 0%.**  After this extra day, the submission closes; if the workshop is incomplete when the submission closes (missing at least one of the coding or non-coding parts), **the mark for the entire workshop is 0%**.

Every file that you submit must contain (as a comment) at the top:<br />
**your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

If the file contains only your work or work provided to you by your professor, add the following message as a comment at the top of the file:

> I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which part of the assignment is given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrongdoing.

## Compiling and Testing Your Program

All your code should be compiled using this command on `matrix`:

```bash
g++ -Wall -std=c++11 -g -o ws file1.cpp file2.cpp ...
```

- `-Wall`: the compiler will report all warnings
- `-std=c++11`: the code will be compiled using the C++11 standard
- `-g`: the executable file will contain debugging symbols, allowing *valgrind* to create better reports
- `-o ws`: the compiled application will be named `ws`

After compiling and testing your code, run your program as following to check for possible memory leaks (assuming your executable name is `ws`):

```bash
valgrind ws
```

To check the output, use a program that can compare text files.  Search online for such a program for your platform, or use *diff* available on `matrix`.

# LAB (50%)
***Shopping List*** is a program that keeps track of your shopping list up to 15 items. You can add items to the list, remove and check the items you bought. Also, you can remove all the checked items and clear the list.

Here is a sample execution of the program 

## LAB Execution example

```text
-->>> My Shopping List <<<--
1-[ ]Oranges qty:(4)
2-[ ]Apples qty:(4)
3-[ ]Bananas qty:(10)
4-[ ]Frozen Strawberries qty:(1)
5-[X]Milk 3% qty:(2)
6-[ ]Milk Skim qty:(1)
7-[ ]Lundry Detergent liquic qty:(1)
8-[ ]Lundry Detergent pods qty:(1)
----------------------------
1- Toggle bought Item
2- Add Shopping Item
3- Remove Shopping Item
4- Remove bought Items
5- Clear List
0- Exit
> 1
Item number: 3
-->>> My Shopping List <<<--
1-[ ]Oranges qty:(4)
2-[ ]Apples qty:(4)
3-[X]Bananas qty:(10)
4-[ ]Frozen Strawberries qty:(1)
5-[X]Milk 3% qty:(2)
6-[ ]Milk Skim qty:(1)
7-[ ]Lundry Detergent liquic qty:(1)
8-[ ]Lundry Detergent pods qty:(1)
----------------------------
1- Toggle bought Item
2- Add Shopping Item
3- Remove Shopping Item
4- Remove bought Items
5- Clear List
0- Exit
> 4
Removing bought items, are you sure?
(Y)es/(N)o: y
-->>> My Shopping List <<<--
1-[ ]Oranges qty:(4)
2-[ ]Apples qty:(4)
3-[ ]Frozen Strawberries qty:(1)
4-[ ]Milk Skim qty:(1)
5-[ ]Lundry Detergent liquic qty:(1)
6-[ ]Lundry Detergent pods qty:(1)
----------------------------
1- Toggle bought Item
2- Add Shopping Item
3- Remove Shopping Item
4- Remove bought Items
5- Clear List
0- Exit
> 2
Item name: Tooth Paste
Quantity: 3
-->>> My Shopping List <<<--
1-[ ]Oranges qty:(4)
2-[ ]Apples qty:(4)
3-[ ]Frozen Strawberries qty:(1)
4-[ ]Milk Skim qty:(1)
5-[ ]Lundry Detergent liquic qty:(1)
6-[ ]Lundry Detergent pods qty:(1)
7-[ ]Tooth Paste qty:(3)
----------------------------
1- Toggle bought Item
2- Add Shopping Item
3- Remove Shopping Item
4- Remove bought Items
5- Clear List
0- Exit
> 0
```


## Step 1: *Test the Program*

### On Visual Studio
- Open Visual studio 2019 and create an Empty C++ Windows Console Project:<br />
![Empty Project](images/emptyproj.png)
- In VS, (if not open already) open Solution Explorer (click on View/Solution Explorer) and then add w1p1.cpp file to your project:<br />
-Right-click on **“Source Files”**<br />
-Select **“Add/Existing Item”**<br />
-Select **w1p1.cpp** from the file browser<br />
-Click on **“Ok”**
- Now you can run the program by selecting **“Debug/Start Without Debugging”** or pressing the **“Ctr-F5”** button. 
### On Linux, in your Matrix account
- Connect to Seneca with [Global Protect VPN](https://inside.senecacollege.ca/its/services/vpn/studentvpn.html)
- Upload **w1p1.cpp** and **shoppinglist.csv** to your matrix account (Ideally to a designated directory for your workshop solutions). Then, enter the following command to compile the source file and create an executable called ws:
```bash
g++ w1p1.cpp -Wall -std=c++11 -o ws<ENTER>

-Wall: display all warnings
-std=c++11: compile using C++11 standards
-o ws:  name the executable ws
```
- Type the following to run and test the execution:
```bash
ws<ENTER>
```

## Step 2: Create the Modules
### On Windows, using Visual Studio (VS)
In the solution explorer, add five new modules to your project:
- **shoppingListApp**; A module to hold the main() function and its relative functions and constant value. (see below)
- **File**; A module to hold the functions and global variables related to File processing.
- **ShoppingList**; A module to hold the direct shopping list related functions, global variables and constants.
- **ShoppingRec**; A module to hold the shopping record related functions, variables, constants and the **ShoppingRec** structure.
- **Utils**; A module to hold the general utility functions for the applications. This file may be moved to other workshops and assignments if needed.

The **shoppingListApp** module has an implementation (.cpp) file but no header file. The **File**,  **ShoppingList**, **ShoppingRec** and **Utils** modules have both implementation (.cpp) and header (.h) files:

#### Header files
Add **File.h**,  **ShoppingList.h**, **ShoppingRec.h** and **Utils.h** to the “Header Files” directory (right click on “Header Files” and select “Add/New Item” and add a header file)<br />
Make sure you add the compilation safeguards and also have all the C++ code in the last four modules in a namespace called “sdds”. 

##### Compilation Safeguards
**compilation safeguards** refer to a technique to guard against multiple inclusion of header files. It does so by applying macros that check against a defined name:
```C++
#ifndef NAMESPACE_HEADERFILENAME_H // replace with relevant names
#define NAMESPACE_HEADERFILENAME_H

// Your header file content goes here

#endif
```
If the name isn’t yet defined, the **#ifndef** will allow the code to proceed onward to then define that same name. Following that the header is then included. If the name is already defined, meaning the file has been included prior (otherwise the name wouldn’t have been defined), the check fails, the code proceeds no further and the header is not included again.<br />
Compilation safeguards prevent multiple inclusions of a header in a module. They do not protect against including the header again in a different module (remember that each module is compiled independently from other modules).<br />
Additionally, here is an instructional video showing how the compiler works and why you need these safeguards in all of your header files. Do note that this video describes the intent and concept behind safeguards, the naming scheme isn’t the standard for our class. Follow the standard for safeguards as described in your class.<br />
[Compilation Safegards](https://www.youtube.com/watch?v=EGak2R7QdHo): https://www.youtube.com/watch?v=EGak2R7QdHo

#### CPP Source Files
Add **shoppingListApp.cpp**, **File.cpp**,  **ShoppingList.cpp**, **ShoppingRec.cpp** and **Utils.cpp** to the “Source Files” directory (right click on “Source Files” and select “Add/New Item” and add a C++ file)<br />

## Step 3: The main Module

### shoppingListApp Module 
(The module holding the **main** function)

**shoppingListApp.cpp** file should have these include and namespace statements: 
```C++
#include <iostream>
#include <cstdlib>
#include "File.h"
#include "ShoppingList.h"
#include "Utils.h"
using namespace std;
using namespace sdds;
```
#### Constant value declaration
Add the following constant value to the file
```C++
// set to false when compling on Linux
const bool APP_OS_WINDOWS = true;  
```

#### module Functions
```Text
main
listMenu
```

## Step 4: organize the code in modules
-----------------------------------------------

Separate the rest of the functions in **w1p1.cpp** and copy them into the remaining modules as described below. Copy the body of the functions into the cpp files and the prototypes into the header files. 

#### Guideline for creating modules
##### #includes
Avoid unnecessary random includes and only include a header file in a cpp file in which the header file functions are called or the header file definitions are used. <br />
Do not include a header file inside another header file unless it is absolutely necessary.

##### Global variables (file scope variables)
Global variable declarations must be in the CPP files to be kept invisible to other modules

##### Structure definitions
Structure definitions must be kept in the header file to be visible to all the modules using it.

##### Constant value declarations 
The Constant value declarations are to be added to the file they are used in; if they are used in a header file, they must be added to the header file otherwise they must be added to the CPP file they are used in.

##### Namespace
All your code (in header files and CPP files) must be surrounded by the **sdds** namespace except in the module holding the **main** function.<br />
The **main** module should use the **sdds** namespace (```using namespace sdds;```).<br />
> important: Never use the **using** statement in a header file.


### ShoppingRec module
This module Contains the ***ShoppingRec*** Structure.
#### Functions
```Text
getShoppingRec
displayShoppingRec
toggleBoughtFlag
isShoppingRecEmpty
```
#### Constant Value Declarations
```Text
MAX_QUANTITY_VALUE
MAX_TITLE_LENGTH
```

### Utils module
#### Functions
```Text
flushkeys
ValidYesResponse
yes
readCstr
readInt
```
### ShoppingList module
#### Functions
```Text
loadList
displayList
removeBoughtItems
removeItem
saveList
clearList
toggleBought
addItemToList
removeItemfromList
listIsEmpty
```
#### Constant Value Declaration
```Text
MAX_NO_OF_RECS
```
#### Global Variable Declarations
```C++
ShoppingRec recs[MAX_NO_OF_RECS]
int noOfRecs
```
### File module
#### Functions
```Text
openFileForRead
openFileForOverwrite
closeFile
freadShoppingRec
fwriteShoppintRec
```
#### Constant Value Declarations
```C++
const char* const SHOPPING_DATA_FILE
```
#### Global Variable Declarations
```C++
FILE* sfptr
```
-------------------------------
## Step 5: Testing
### Testing the Shopping List Application
#### Windows
To test that you have done this correctly, you can compile each module separately, by right-clicking on ***shoppingListApp.cpp**, **File.cpp**,  **ShoppingList.cpp**, **ShoppingRec.cpp** and **Utils.cpp** separately and select compile from the menu. If the compilation is successful, most likely you have done it correctly.

The equivalent of this on matrix is to add -c to the compile command:
```Bash
g++ File.cpp –Wall -std=c++11 –c<ENTER>
```
This example will only compile File.cpp and will not create an executable.

Now remove **w1p1.cpp** from the project. You can do this by right-clicking on the filename in solution explorer and selecting Remove in the menu (make sure you do not delete this file but only remove it).
Compile and run the project (as you did before in Step 1) and make sure everything works.
#### Matrix (Linux)
On Linux, in your matrix account, upload all the module files and the data file  **shoppinglist.csv** to your matrix account.

Modify **shoppingListApp.cpp** and set the APP_OS_WINDOWS constant value to false:
```C++
// set to false when compling on Linux
const bool APP_OS_WINDOWS = false;  
```
and compile the source code using the following command.

```Bash
g++ shoppingListApp.cpp File.cpp ShoppingList.cpp ShoppingRec.cpp Utils.cpp -Wall -std=c++11 -o ws<ENTER>
```
Run the program like before with the **shoppinglist.csv** file and make sure that everything still works properly. 

## LAB Submission (part 1)

To test and demonstrate the execution of your program use the same data as shown in the [LAB Execution example](#lab-execution-example) .

Upload your source code to your `matrix` account. Compile and run your code using the `g++` compiler as shown above and make sure that everything works properly.

Then, run the following command from your account
- replace `profname.proflastname` with your professor’s Seneca userid
- replace **??** with your subject code (2**00** or 2**44**)
```
~profname.proflastname/submit 2??/w1/p1
```
and follow the instructions.

> **:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.


# DIY (50%)


## cstring Module
Create a module called cstring (in files: **cstring.cpp** and **cstring.h**) that You will be using instead of the C string library throughout the semester. 

> **:warning:Important:** You are not allowed to use any C or CPP library functions in this module 
 
## Functions to implement
```C++
       // Copies the srouce character string into the destination
   void strCpy(char* des, const char* src);
      // Copies the source character string into the destination upto "len"
      // characters. The destination will be null terminated only if the number
      // of the characters copied is less than "len"
   void strnCpy(char* des, const char* src, int len);
     // Compares two C-strings 
     // returns 0 i thare the same
     // return > 0 if s1 > s2
     // return < 0 if s1 < s2
   int strCmp(const char* s1, const char* s2);
     // returns 0 i thare the same
     // return > 0 if s1 > s2
     // return < 0 if s1 < s2
   int strnCmp(const char* s1, const char* s2, int len);
     // returns the lenght of the C-string in characters
   int strLen(const char* s);
     // returns the address of first occurance of "str2" in "str1"
     // returns nullptr if no match is found
   const char* strStr(const char* str1, const char* str2);
     // Concantinates "src" C-string to the end of "des"
   void strCat(char* des, const char* src);
```

## Tester Program

```C++
// Workshop 1:
// Version: 0.9
// Date: 2021/10/16
// Author: Fardad Soleimanloo
// Description:
// This file tests the lab section of your workshop
///////////////////////////////////////////////////
#include <iostream>
#include "cstring.h"
using namespace sdds;
using namespace std;
int main() {
   char str1[80] = "abcdefghijklmnopqrstuvwxyz";
   char str2[80];
   const char* fadd;
   strCpy(str2, str1);
   cout << str2 << endl;
   strnCpy(str2, "@@@", 2);
   cout << str2 << endl;
   strnCpy(str2, "@@@", 3);
   cout << str2 << endl;
   strnCpy(str2, "@@@", 4);
   cout << str2 << endl;
   cout << strCmp("aab", "aaa") << endl;
   cout << strnCmp("aab", "aaa", 2) << endl;
   cout << strnCmp("aab", "aaa", 3) << endl;
   cout << strLen("") << endl;
   cout << strLen(str1) << endl;
   fadd = strStr(str1, "jkl");
   cout << fadd << endl;
   fadd = strStr(str1, "bbb");
   if (!fadd) cout << "Not found" << endl;
   strCpy(str2, "John ");
   strCat(str2, "Doe");
   cout << str2 << endl;
   return 0;
}
```

## DIY Execution example
```Text
abcdefghijklmnopqrstuvwxyz
@@cdefghijklmnopqrstuvwxyz
@@@defghijklmnopqrstuvwxyz
@@@
1
0
1
0
26
jklmnopqrstuvwxyz
Not found
John Doe

```

Files to submit:  
```Text
cstring.h
cstring.cpp
cstringTester.cpp
```

## Reflection

Study your final solutions for each deliverable of the workshop, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.  **This should take no less than 30 minutes of your time and the result is suggested to be at least 150 words in length.**

Create a file named `reflect.txt` that contains your detailed description of the topics that you have learned in completing this workshop and mention any issues that caused you difficulty.

You may be asked to talk about your reflection (as a presentation) in class.

## DIY Submission (part 2)

To test and demonstrate the execution of your program use the same data as shown in the [DIY Execution example](#diy-execution-example).

Upload your source code to your `matrix` account. Compile and run your code using the `g++` compiler as shown above and make sure that everything works properly.

Then, run the following command from your account
- replace `profname.proflastname` with your professor’s Seneca userid
- replace **??** with your subject code (2**00** or 2**44**)
```
~profname.proflastname/submit 2??/w1/p2
```
and follow the instructions.

> **:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Re-submissions will attract a penalty.

