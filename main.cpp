//
//  main.cpp
//  WoeHW7
//recursive

#include <cctype>     // Provides toupper
#include <cstdlib>    // Provides EXIT_SUCCESS
#include <iostream>
using namespace std;


int ways(int amount, int* denomination, int n, int* p )
{

    
    if (amount < 0 || (amount > 0 && n <=0))   //if the amount is less than zero or (amount more than 0 and n is less than equal to 0), return 0
        return 0;
    if (amount == 0) //return values
    {
        string s = "";
    
        int format = 0;

        if (p[0] > 0)  //quarters
        {
            format = 1;
            cout << p[0] << " quarters,";   //how many quarters
        }
    
        if (p[1] > 0)   //dimes
        {
            format = 1;
            cout << p[1] << " dimes,";   //how many dimes
        }
        
    
        if (p[2] > 0)  //nickels
        {
            format = 1;
            cout << p[2] << " nickels,";   //how many nickels
        }
    
        if (p[3] > 0)   //pennies
        {
            if(format == 1)
                cout << " and " << p[3] << " pennies " << endl;   //how many pennies
            else cout << p[3] << " pennies ";
        }
        cout << endl;
        return 1;
    }
    
    //output all the possible combinations
    int* temp = new int[4];   //temporary
    for (int i = 0; i < 4; i++)
        temp[i] = p[i]; //set the temporary and the p
    int x = ways(amount,denomination,n-1,temp);  //set x to ways (parameters modified)
    temp[n-1] += 1;
    int y = ways(amount-denomination[n-1],denomination,n,temp); //set y to ways (parameters modified)
    return x+y;   //return y in addition of x
    
    
    
}

int optimal_way(int amount,int* denomination,int n)
{
    if (amount < 0 || (amount > 0 && n <= 0)) //return max
        return INT_MAX;
    if (amount == 0) return 0;
    int x = optimal_way(amount,denomination, n-1);
    int y = optimal_way(amount-denomination[n-1],denomination,n);
    if (y != INT_MAX)
        return min(x,y+1);
    return min(x,y);
}

int main()
{
    int amount;
    cout << "Please enter the amount: " << endl;  //to ask user to enter amount
    cin >> amount; //amount entered by the user
    
    
    
    int* denomination = new int[4];
    denomination[0] = 25; denomination[1] = 10; denomination[2] = 5; denomination[3] = 1;
    
    int *p = new int[4];
    p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
    cout << endl << "Change options are: " << endl;
    cout << ways(amount, denomination, 4, p) << " total " << endl;  //total number of options
    
    //minimal number of coins
    cout << endl << "Optimal way (minimum of coin out): " << optimal_way(amount, denomination, 4) << " coins " << endl;
    
    
      return 0;
    
}


