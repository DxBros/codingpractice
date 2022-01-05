#include<iostream>
using namespace std;

class Person{
    private:
       string name = "Adarsh Tiwari";
       int age = 20;
      
    public:
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        void setName(string name_){
            name = name_;
        }
        
        void setAge(int age_){
            age = age_;
        }
        // Person(){ //default constructor
        //     cout<<"Object Creation\n";
        //     name = "Unknown";
        //     age =0;
        // }
        
        Person(string name="Adarsh Tiwari",int age =20){
            setName(name),setAge(age);
        }
        
        Person(Person &personObj){
            cout<<"Copy constructor."<<endl;
            setAge(personObj.getAge());
            setName(personObj.getName());
        }
        
        void printData(){
                cout<<"Name: "<<getName()<<endl;
                cout<<"Age: "<<getAge()<<endl;
        }
};

int main(){
    Person person;
    cout<<"Default constructor :\n";
    person.printData();
    
    Person p("Sanjay",17);
    cout<<"\nParameterized Constructor:\n";
    p.printData();
    
    Person p2(p);
    cout<<"\nCopy Constructor: \n"<<endl;
    p2.printData();
    return 0;
}

