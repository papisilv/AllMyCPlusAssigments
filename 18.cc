#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

ifstream ins("student.txt");
ofstream out("studentOut.txt");
const double TEST=0.2, LAB=0.15, FINAL = 0.30;

void displayTab();

int main(){
	string fname, lname, mname, name;
	double test1, test2, lab, quiz, finalGrade, score;
	int total;
	string grade;	
    displayTab();				  
	ins.close();
	out.close();
}

void displayTab(){
    cout<<left<<fixed<<setprecision(2);			
		cout<<"\n\n\n";
		cout<<setw(20) <<"Student Name"<<setw(8)<<"Test1"<<setw(8)<<"Test2"<<setw(8)
			<<"Lab"<<setw(8)<<"Quiz"<<setw(8)<<"Final"<<setw(8)<<"Total"<<"Grade"<<endl;
		cout<<setw(20) <<"============"<<setw(8)<<"====="<<setw(8)<<"===="<<setw(8)
			<<"==="<<setw(8)<<"===="<<setw(8)<<"====="<<setw(8)<<"====="<<"====="<<endl;	    		
		// Table heading for output file named studentOut.txt
		out<<left<<fixed<<setprecision(2);
		out<<"\n\n\n";
		out<<setw(20) <<"Student Name"<<setw(8)<<"Test1"<<setw(8)<<"Test2"<<setw(8)
			<<"Lab"<<setw(8)<<"Quiz"<<setw(8)<<"Final"<<setw(8)<<"Total"<<"Grade"<<endl;
		out<<setw(20) <<"============"<<setw(8)<<"====="<<setw(8)<<"===="<<setw(8)
			<<"==="<<setw(8)<<"===="<<setw(8)<<"====="<<setw(8)<<"====="<<"====="<<endl;
}

void loopStatement(
    string fname, string lname, string mname, string name, 
    double test1, double test2, double lab, double quiz, double finalGrade, double score,
	int total,
	string grade){
    for(int i = 0; i < 5;i++){
		// Reading data from input file student.txt
		ins >> fname >> mname >> lname >> test1 >> test2 >> lab >> quiz >> finalGrade;
		// Compute Total Score
		
		// Finding letter grade using if then else statements
		if(total >= 90)
		   grade = " A "; 
		  else if(total >= 80)
			grade =" B "; 
			   else if(total>= 70)
				grade =" C ";
				else if(total >= 60)
					grade =" D "; 
					else
						grade =" F "; 			  
		// Display student information on Monitor	
		cout<<setw(20) <<name<<setw(8)<<test1<<setw(8)<<test2<<setw(8)
			<<lab<<setw(8)<<quiz<<setw(8)<<finalGrade<<setw(8)<<score<<grade<<endl<<endl;
		// Display student information in the output file named studentOut.txt
		out<<setw(20) <<name<<setw(8)<<test1<<setw(8)<<test2<<setw(8)
			<<lab<<setw(8)<<quiz<<setw(8)<<finalGrade<<setw(8)<<score<<grade<<endl<<endl;			
	}
}

void computeScore(string fname, string lname, string mname, string name, 
    double test1, double test2, double lab, double quiz, double finalGrade, double score,
	int total,
	string grade ){
    name = fname + " "+ mname+" "+ lname;
	score = (test1 + test2)*TEST + (lab+quiz)*LAB  + finalGrade* FINAL;
	total = static_cast<int>(score);
}