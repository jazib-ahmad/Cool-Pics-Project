/**
 * pics.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183, Fall 2020
 * Project 4: CoolPics
 *
 * <#Name(s)#> Jazib Ahmad, Guanghan Ma
 * <#uniqname(s)#> jaziba, maguangh
 *
 * <#Description#>hecks the input, if you stop inputting after the third type, ins enters fail state and it sets all the other colors to that color, else, it just assigns the corresponding color with the input
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Graphics.h"

/**
 * Requires: Nothing.
 * Modifies: cout.
 * Effects:  Prints an opening message.
 */
void printOpener();

/**
 * Requires: Nothing.
 * Modifies: cout.
 * Effects:  Prints a closing message.
 */
void printCloser();

/**
 * Requires: Nothing.
 * Modifies: cout.
 * Effects:  Prints a menu.
 */
void printMenu();

/**
 * Requires: ins is in good state.
 * Modifies: cin, ins.
 * Effects:  Closes ins if it is open. Keeps reading filename from the user
 *           (and appends .txt) until the file is successfully opened.
 *           Returns the name of the file that was opened.
 */
string openFile(ifstream& ins);

/**
 * Requires: Nothing.
 * Modifies: Nothing.
 * Effects:  Returns str with all of its alphabetical characters lowercased.
 */
string tolower(string str);

/**
 * Requires: Nothing.
 * Modifies: cin, drawer.
 * Effects:
 *     Opens a file
 *     Start with a blank canvas (drawer)
 *     Start reading from file.  For each line....
 *        Read the 1st character to determine shape
 *        Read the shape:  L reads a line, C reads a circle, T read a triangle
 *            R reads a rectangle.
 *            For any other character, clears drawer and prints
 *            "Error in input file: " << [character already read]
 *            << [all chars remaining on the line] << endl;
 *        Draw shape on canvas
 *     Close file
 *     Print "[Loaded filename]"
 */
void loadFile(Graphics& drawer);

/**
 * Requires: Nothing.
 * Modifies: cin, cout, drawer.
 * Effects:
 *     Read filename from user
 *     concatenate filename with .bmp
 *     Write image to file.
 *     Print "[Wrote filename]"
 */
void writeFile(const Graphics& drawer);

void coolPics()
{
    Graphics drawer;
    string command;
    printOpener();
    printMenu();

    // read first command from user
    cin >> command;
    cout << endl;
    command = tolower(command);

    // read user's input until he or she quits
    while (command != "quit")
    {
        if (command == "load")
        {
            loadFile(drawer);
        }
        else if (command == "write")
        {
            writeFile(drawer);
        }
        else
        {
            cout << "Invalid command" << endl << endl;
        }

        printMenu();

        // read next command
        cin >> command;
        cout << endl;
        command = tolower(command);
    }

    printCloser();
    
    return;
}

void writeFile(const Graphics& drawer)
{
    
    //Reads filename ,adds string .bmp and writes image to file
    string fileName;
    cin >> fileName;
    drawer.writeFile(fileName + ".bmp");
    cout << "[Wrote " << fileName << ".bmp]" << endl;
    
}

void loadFile(Graphics& drawer)
{
    
    //Reads  fileName from user and opens file
    ifstream inFS;
    char c;
    string s = openFile(inFS);
    
    //Draws the correct shape given character read
    while (inFS >> c)
    {
        
        if (c == 'R')
        {
            Rectangle r;
            r.read(inFS);
            r.draw(drawer);
            
        }
        else if (c == 'L')
        {
            Line l;
            l.read(inFS);
            l.draw(drawer);
        }
        else if (c == 'C')
        {
            Circle c;
            c.read(inFS);
            c.draw(drawer);
        }
        else if (c == 'T')
        {
            Triangle t;
            t.read(inFS);
            t.draw(drawer);
        }
        else
        {
            drawer.clear();
            cout << "Error in input file: " << c ;
            string store;
            getline(inFS, store);
            cout << store << endl;
            
        }
       }
   
    
    inFS.close();
    cout << "[Loaded " << s << "]" << endl;
    
    
}

string tolower(string str)
{
   //tranverses the string and changes characters to lowercase
    for (int i = 0 ; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    
    return str;
}


// Don't change the implementations below!

void printMenu()
{
    cout << "Command:            Description:" << endl
         << "--------            ------------" << endl
         << "load filename       Loads data from a txt file" << endl
         << "write filename      Creates a bmp image from data" << endl
         << "quit                Quits the program" << endl << endl;
}


void printOpener()
{
    cout << "=================================================" << endl
         << "               Welcome to CoolPics" << endl
         << "=================================================" << endl << endl;
}

void printCloser()
{
    cout << "=================================================" << endl
         << "            Thanks for using CoolPics!" << endl
         << "=================================================" << endl;
}

string openFile(ifstream& ins)
{
    string fileName;

    // close stream if open
    if (ins.is_open())
    {
        ins.clear();
        ins.close();
    }

    // get filename
    cin >> fileName;
    fileName = fileName + ".txt";
    ins.open(fileName);

    // keep retrying if failed to open
    while (ins.fail())
    {
        cout << "Error in opening " << fileName
             << ". Enter another file name: ";
        ins.clear();
        cin >> fileName;
        fileName = fileName + ".txt";
        ins.open(fileName);
    }

    return fileName;
}
