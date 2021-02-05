#include <iostream>
using namespace std;


class complex_number{
    
    private:
        int real1
        int imaginary1;
    
    public:
    
    complex_number(int real1, int imaginary1){
        
        this->real1=real1;
        this->imaginary1=imaginary1;
    }
    
    void display(){
        
        cout<<this->real1<<"+"<<imaginary1<<"i";
    }
    
    void add(complex_number n2){
        this->real1=this->real1 + n2.real1;
        this->imaginary1=this->imaginary1+ n2.imaginary1;
    
    }
    
    void multiply(complex_number n2){
        
        int first=(this->real1)*(n2.real1)+(this->imaginary1)*(n2.imaginary1);
        int second= (this->real1)*(n2.imaginary1)+(this->imaginary1)*(n2.real1);
        
        this->real1=first;
        this->imaginary1=second;
        
    }
    
};


    
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
