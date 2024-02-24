#include<iostream>
#include "animal.hpp"

class Carnivoro: public Animal{
    public: 
        void alimentarse (){
            std:: cout<< "Los animales carnivoros se alimentan de carne"<< std:: endl;  
        }
}; 