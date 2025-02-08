/*
If we want to call the Base Class Function then there are two Method :- 
1. Calling the function Explicitly
2. Creating the Base Class Object

*/


#include<bits/stdc++.h>
using namespace std;
// 1. Calling the function Explicitly

class Vehicle {
public:
    void makeSound() {
        cout << "Vehicle makes a sound" << endl;
    }
};

class Car : public Vehicle {
public:
    void makeSound() {
        cout << "Car honks" << endl;
        Vehicle::makeSound();  // Calling the base class function explicitly
    }
};

int main() {
    Car obj;
    obj.makeSound();  // This will call the derived class method, which also calls the base class method
    return 0;
}

/*
// 2. Creating the Base Class Object
class Vehicle{
    public:
      void makeSound() {
        cout << "Vehicle makes a sound" << endl;
    }
};

class Car : public Vehicle {
public:
    void makeSound() {
        cout << "Car honks" << endl;
    }
};

int main() {
    Vehicle obj;
    obj.makeSound();  // This will call the base class method
    return 0;
}

*/