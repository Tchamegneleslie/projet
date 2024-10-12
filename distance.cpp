#include <iostream>
#include <cmath>
int main( int argc, char**argv ) {
float absE, absF, absG , ordE, ordF, ordG , EF, FG, EG ;
std::cout << "soient E,F,G trois points du plan" << std::endl;
std::cout << "entrer les abscisses des points E,F et G respectifs" << std::endl;
std::cin >> absE >> absF >> absG ;
std::cout << "entrer les ordonnées des points E,F et G respectifs" << std::endl;
std::cin >> ordE >> ordF >> ordG ;
EF= sqrt( (absF - absE)*(absF - absE) + (ordF - ordE)*(ordF - ordE) );
FG= sqrt( (absG - absF)*(absG - absF) + (ordG - ordF)*(ordG - ordF) );
EG= sqrt( (absG - absE)*(absG - absE) + (ordG - ordE)*(ordG - ordE) );
std::cout << "la distance du côté EF est de:" << EF << std::endl;
std::cout << "la distance du côté FG est de:" << FG << std::endl;
std::cout << "la distance du côté EG est de:" << EG << std::endl;


return 0 ;
}
