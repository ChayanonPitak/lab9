#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {}, studentcount = 1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << studentcount << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if ((grade >= 'A' && grade <= 'D') || grade == 'F')
		{
			count[(grade != 'F' ? grade - 'A' : 4)]++;
			studentcount++;
		}
		else if (grade == '0') break;
		else cout << "Wrong input. Please input again.\n";
	}while(true);
	
	
	cout << "In total "<< studentcount-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	return 0;
}
