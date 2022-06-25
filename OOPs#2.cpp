// OOPs by Love Babbar Lecture 2
#include<iostream>
#include<cstring>
using namespace std;

// class Student{
//     private:
//         string name;
//         int age;
//         int height;
//     public:
//         int getAge(){
//             return this->age;
//         }
// };

class Human{
    public:
        int height;
        int weight;
    private:
        int age;
    public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight=w;
        }
        void speak(){
            cout<<"Speaking!"<<endl;
        }
};

class Male : private Human{
    public:
        string color;
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};

class Student: public Male{

};

class Animal{
    public:
        int age;
        int weight;
    public:
        void speak(){
            cout<<"Speaking!"<<endl;
        }
};

class Hybrid: public Human, public Animal{

};

// class A{
//     void sayHello(){
//         cout<<"Hello World"<<endl;
//     }
//     void sayHello(){
//         cout<<"Hello World"<<endl;
//     }
// };

// // Hierarchical Inheritance
// class A{
//     public:
//     void func1(){
//         cout<<"Inside function 1"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void func2(){
//         cout<<"Inside function 2"<<endl;
//     }
// };

// class C: public A{
//     public:
//     void func3(){
//         cout<<"Inside function 3"<<endl;
//     }
// };

// class D{
//     public:
//     void func1(){
//         cout<<"Inside function 1"<<endl;
//     }
// };

// class test: public A, public D{

// };

class Dog: public Animal{
    public:
        void speak(){
            cout<<"Barking!"<<endl;
        }
};

class Test{
    public:
        int a;
        int b;
    public:
        int add(){
            return a+b;
        }
    Test operator+ (Test& score){
        Test val;
        int value1 = this->a;
        int value2 = score.a;
        val.a = value2-value1;
        cout<<"Output: "<<this->a<<endl;
        cout<<"Output: "<<score.a<<endl;
        return val;
    }
};

int main(){
    
    Dog obj;
    obj.speak();

    // Test score1, score2, total;
    // score1.a = 4;
    // score2.a = 7;
    // total = score1 + score2;
    // cout<<"Output: "<<total.a<<endl;

    // A obj1;
    // obj1.func1();
    // B obj2;
    // obj2.func1();
    // obj2.func2();
    // C obj3;
    // obj3.func1();
    // obj3.func3();

    // //Inheritance Ambiquity
    // test obj4;
    // obj4.A::func1();
    // obj4.D::func1();  

    // Male m1;
    // cout<<m1.getHeight()<<endl;
    // Student s1;
    // cout<<s1.getHeight()<<endl;
    // Hybrid h1;
    // h1.bark();
    // h1.speak();
    // h1.getAge();

    // Male object1;
    // cout<<object1.height<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.age<<endl;

    // cout<<object1.color<<endl;
    // object1.sleep();
    // object1.setWeight(20);
    // cout<<object1.weight<<endl;
    // // Student first;
    // // cout<<"Works fine!"<<endl;
    // // return 0;
}