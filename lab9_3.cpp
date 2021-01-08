//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inputfile;
    string value;
    int count=0;
    double sum=0,sqsum=0;
    inputfile.open("score.txt");
    while (getline(inputfile, value))
    {
        count++;
        sum += atof(value.c_str());
        sqsum += pow(atof(value.c_str()), 2);
    }
    inputfile.close();

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt(sqsum/count-pow(sum/count,2));
    return 0;
}