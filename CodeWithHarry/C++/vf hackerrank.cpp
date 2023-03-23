#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>
int cur_id=0 ,cur_id1=0;
class Person{
    protected:
    string name;
    int age;  
    public:
    virtual void getdata(){}    
    virtual void putdata(){}  
};

class Professor: public Person{
        int publications;
        public:
        void getdata(){
            cin>>name>>age>>publications;
            
        }
        void putdata(){
            cur_id++;
            cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
        }
};
class Student: public Person{
    int m[6],sum=0,i;
    public:
        void getdata(){
            cin>>name>>age;
            for(i=0;i<6;i++){
                cin>>m[i];
            }
            
        }
        void putdata(){
            cur_id1++;
            for(i=0;i<6;i++){
                sum=sum+m[i];
            }
            cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id1<<endl;
        
        }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
