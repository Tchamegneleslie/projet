#include <iostream>
int main ( int argc , char**argv ) {

    int a,s ;
    std::cout <<"entrer un nombre"<< std::endl ;
    std::cin >>a ;
    s= 1;
    do { 
        s= s*a;
        a=a-1;
        
    }  
    while (a > 1 );
    std::cout <<"le factoriel du nombre est:"<< s << std::endl ;


   return 0; 

}
