#include<iostream>
using namespace std;

int main(){
	int i;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";
	do{
		++i;
		cout << "Student [" << i << "]: ";
		char grade;
		cin >> grade; 
		int score;
		if(grade == '0') {
			break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ // if grade is A
		score = count[0];
		++score;
		count[0] = score;
		}else if(grade == 'B'){ // if grade is B
		score = count[1];
		++score;
		count[1] = score;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){ // if grade is B
		score = count[2];
		++score;
		count[2] = score;
		}else if(grade == 'D'){ // if grade is B
		score = count[3];
		++score;
		count[3] = score;
		}else if(grade == 'F'){ // if grade is B
		score = count[4];
		++score;
		count[4] = score;
		}else{
			cout << "Wrong input. Please input again." << "\n";
			--i;
		} 
	}while(true);
	
	
	
	cout << "In total " << i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	
	return 0;
}