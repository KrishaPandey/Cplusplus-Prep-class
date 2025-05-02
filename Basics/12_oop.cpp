#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int x=0;

public:
    void getName(string name, int roll) {
    	 this->name=name;
    	 this->roll=roll;
    	 x++;
       
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout<<"x"<<x;
    }
};

int main() {
    Student st; 
    st.getName("k",1); 
    st.display(); 
    
    cout<<endl;
Student ST1; 
    ST1.getName("R",2); 
    ST1.display(); 
   


    return 0;
}

