#include<iostream>
#include<math.h>
using namespace std;

/* 
* Algorithm: Creates a function with a parameter that will be given a grid size andit will print a grid with that many rows and columns.
* 1. Set up the function as void
* 2. initialize a int for row and column and set it to 0
* 3. set a restriction if whats given is a negative or 0 and output that it won't work
* 4. now create a while loop for that row is less than grid size * 2 + 1 and set column to 0 
* 5. now create a second while loop for that column is less than grid size * 2 + 1 
* 6. inside that while do an if and say if row is even and then inside that do an if and say if column is even you print a +
* 7. then do an else and print the --
* 8. then back inside the if create another else with an if inside that states if column is even print | and else print "  "
* 9. then inside the while add 1 to column 
* 10. then inside the first while add 1 to row and end line
*/

void printGrid(int gridSize)
{
    
    int row = 0;
    int column = 0;
    
    if (gridSize <= 0)
    {
        
    cout << "The grid can only have a positive number of rows and columns.";  
    return;
    
    }
    
    while (row < ( (gridSize * 2) + 1 ) ) // loop for row is less than gridSize * 2 + 1 
    {
        
    column = 0; // assign 0 to column 
    
    while ( column < ( (gridSize * 2) + 1 ) ) // another loop for column is less then gridSize * 2 + 1
    {
        
        if (row % 2 == 0) // if row is even 
        {
            
            if (column % 2 == 0) // if column is even 
            {
                
                cout << "+"; // print
                
            }
            else
            {
                
                cout << "--"; // print 
                
            }
            
        }    
        else
        {
            
            if (column % 2 == 0) // if column is even 
            {
                
                cout << "|"; // print
                
            }
            else 
            {
                
                cout << "  "; // print 
                
            }
            
        }
        
        column++; // add 1 to column after
        
    }
    
    row++; // add 1 to row after
    cout << endl;
    
    }
    
}
int main()
{
    // test case 1
    // expected outcome
    // +--+--+--+
    // |  |  |  |
    // +--+--+--+
    // |  |  |  |
    // +--+--+--+
    // |  |  |  |
    // +--+--+--+
    printGrid(3);
    cout << endl;
   
    // test case 2
    // expected outcome
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    // |  |  |  |  |  |  |  |  |
    // +--+--+--+--+--+--+--+--+
    printGrid(8);
    cout << endl;
    
    // test case 2
    // expected outcome
    // The grid can only have a positive number of rows and columns.
    printGrid(0);
    cout << endl;
   
    return 0;
}
