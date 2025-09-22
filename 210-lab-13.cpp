//COMSC-210 | Lab 13 | Kristofer King
//IDE Used: VSC
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    //declares a STD::vector to track hourlywage from a file input
    vector<double> hourlyWage;
    
    //opens and reads the file as long as the file can be found
    ifstream inputFile("inputFile.txt");
    if (inputFile.good())
    {
        //for loop that retrieves the hourly wage from the file and sets that value to equal the value of that element within the vector
        double wage;
        while(inputFile >> wage)
            hourlyWage.push_back(wage);

        //closes the file as we no longer need to collect information from it
        inputFile.close();

        //finds and displays the size of the vector
        cout << "1. Size: " << hourlyWage.size() << endl;
        
        //displays the values of the given vector
        cout << "2. Values: ";
        for (double val : hourlyWage) 
            cout << val << " ";

        cout << endl;
        
        //displays the value of the element at position 4 of the vector
        cout << "3. Element 4: " << hourlyWage[4] << endl;
        
        //displays the value of the element at the front of the vector
        cout << "4. Front: " << hourlyWage.front() << endl;
        
        //displays the value of the element at the back of the vector
        cout << "5. Back: " << hourlyWage.back() << endl;

        //determines if the vector is empty and returns false if it is not and true if it is
        cout << "6. Empty? " << (hourlyWage.empty() == 0? "False" : "True") << endl;

        //determines the address of the vector itself
        cout << "7. Address: " << hourlyWage.data() << endl;

        //function that sorts the vector from smallest to largest
        sort(hourlyWage.begin(), hourlyWage.end());
        cout << "8. Sorted: ";
        for (double val : hourlyWage) 
            cout << val << " ";
            
        cout << endl;

        //function that reverses the sorted list so that it displays the values in the opposite order of the normal list
        sort(hourlyWage.rbegin(), hourlyWage.rend());
        cout << "9. Reverse Sorted: ";
        for (double val : hourlyWage) 
            cout << val << " ";
            
        cout << endl;

        //function that finds the largest element within the vector
        cout << "10. Max: " << *max_element(hourlyWage.begin(), hourlyWage.end()) << endl;

        //function that finds the smallest element within the vector
        cout << "11. Min: " << *min_element(hourlyWage.begin(), hourlyWage.end()) << endl;
        
        //adds all of the values of the vector together to find the total sum of the vector
        cout << "12. Sum: " << accumulate(hourlyWage.begin(), hourlyWage.end(), 0) << endl;
    }
    //if no file is found then it will display this error message
    else
        cout << "File not found.\n";

    return 0;
}