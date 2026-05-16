#include<iostream>
using namespace std;

class Student{
private:
	int weight;
public:

	int marks;
	int rollno;


	void exam(){
		cout<<"exams completed"<<endl;
	}

	void playing(){
		cout<<"cricket playing"<<endl;
	}

	void setweight(int w){
		weight=w;
	}
	int getweight(){
		return weight;
	}

	Student(int marks){
		this->marks=marks;
		cout<<"constructor called"<<endl;
	}
	~Student(){
		cout<<"i am inside destructor"<<endl;
	}

};

int main()
{
	Student krishna(10);
	// krishna.marks=100;

	// krishna.rollno=29;
	// cout<<krishna.marks<<endl;

	// krishna.exam();
	// krishna.playing();

	// krishna.setweight(70);
	// cout<<krishna.getweight()<<endl;
	Student *vishnu= new Student(10);
	delete vishnu;


}