#include<iostream>
#include "animal.hpp"

class Hervivoro: public Animal{
    public: 
        void alimentarse (){
            std:: cout<< "Los animales hervivoros se alimentan de plantas"<< std:: endl;  
        }
}; 