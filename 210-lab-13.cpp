#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<double> hourlyWage;
    
    ifstream fin;
    fin.open("inputFile.txt");
    if (fin.good())
    {
        for (int i = 0; i < SIZE; i++)
        {
            fin >> hourlyWage[i];
        }

        fin.close();

        cout << "1. Max Size: " << hourlyWage.size() << endl;
        
        cout << "2. Values: ";
        for (double val : hourlyWage) 
            cout << val << " ";

        cout << endl;
        
        cout << "3. Element 4: " << hourlyWage.at(4) << endl;
        
        cout << "4. Front: " << hourlyWage.front() << endl;
        
        cout << "5. Back: " << hourlyWage.back() << endl;

        cout << "6. Empty? " << (hourlyWage.empty() == 0? "False" : "True") << endl;

        cout << "7. Address: " << hourlyWage.data() << endl;

        sort(hourlyWage.begin(), hourlyWage.end());
        cout << "8. Sorted: ";
        for (double val : hourlyWage) 
            cout << val << " ";
            
        cout << endl;

        sort(hourlyWage.rbegin(), hourlyWage.rend());
        cout << "9. Reverse Sorted: ";
        for (double val : hourlyWage) 
            cout << val << " ";
            
        cout << endl;

        cout << "10. Max: " << *max_element(hourlyWage.begin(), hourlyWage.end()) << endl;

        cout << "11. Min: " << *min_element(hourlyWage.begin(), hourlyWage.end()) << endl;
    
        cout << "12. Sum: " << accumulate(hourlyWage.begin(), hourlyWage.end(), 0) << endl;
    }
    else
        cout << "File not found.\n";

    return 0;
}