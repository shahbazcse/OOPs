// OOPs Miscellaneous Topics
#include<iostream>
#include<cstring>
using namespace std;

// Friend Function
// class Test{
//     private:
//     int a = 2; 
//     int b = 4; 
    
//     public:// friend function friend 
//         int mul(Test k){ 
//             return (k.a * k.b); 
//         }
// };

// int main(){
//     Test obj; 
//     int res;
//     res = mul(obj); 
//     cout << res << endl;
//     return 0;
// }

// Virtual Function
// class base { 
//     public:
//         // virtualfunction (re-defined in the derived class) 
//         virtual void print(){ 
//             cout << "print base class" << endl; 
//         }
        
//         virtual void show(){ 
//             cout << "show base class" << endl; 
//         }
// };

// class derived : public base { 
//     public:
//         void print(){
//         cout << "print derived class" << endl; 
//         }
        
//         void show(){ 
//             cout << "show derived class" << endl; 
//         }
// }; 

// int main(){ 
//     base* bptr; 
//     derived d;
//     bptr = &d; 
//     // virtualfunction, binded at runtime 
//     bptr->print(); 
    
//     // Non-virtualfunction, binded at compile time 
//     bptr->show();
// }

// PureVirtual Function
// class Base{ 
//     public: 
//         virtual void show() = 0; 
// }; 

// class Derived : public Base { 
//     public: 
//         void show() { 
//         cout << "You can see me !" << endl;
//     }
// }; 

// int main(){ 
//     Base *bptr;
//     Derived d;
//     bptr = &d;
//     bptr->show();
//     return 0; 
// }

// Abstract Classes
// abstract class Shape
// class Shape{ 
//     public:
//         virtual void draw()=0;
// };

// class Rectangle : public Shape{
//     public:
//         void draw(){  
//             cout << "Rectangle" << endl;
//     }
// };

// class Square : public Shape{
//     public: 
//         void draw(){ 
//             cout << "Square" << endl;
//         }
// };

// int main(){ 
//     Rectangle rec;
//     Square sq; 
//     rec.draw(); 
//     sq.draw(); 
//     return 0;
// }

// Virtual Inheritance
// class Person{
//     public:
//         virtual void speak(){
//             cout<<"Speaking.."<<endl;
//         }
// };

// class Student: virtual  public Person{
//     virtual void learn(){
//         cout<<"Learning.."<<endl;
//     }
// };

// class Worker: virtual  public Person{
//     virtual void work(){
//         cout<<"Working.."<<endl;
//     }
// };

// class TeachingAssistant: public Student, public Worker{};

// int main(){
//     TeachingAssistant ta;
//     Person& a = ta;
//     ta.Student::speak();
//     ta.Worker::speak();
//     ta.TeachingAssistant::speak();
//     return 0;
// }