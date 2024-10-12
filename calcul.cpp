#include<iostream>

int main( int argc, char**argv)
{
float airecercle,pericercle,airetriangle,peritriangle,airerectangle,perirectangle,ray,l,L,H,base,cote1,cote2 ;
const double pi=3.14 ;
std::cout << "calculons l'aire et le périmètre du cercle" << std::endl;
std::cout << "entrer le rayon du cercle" << std:: endl;
std::cin >> ray;
airecercle = pi*ray*ray ;
pericercle = 2*pi*ray ;
std::cout << "l'aire du cercle est:" << airecercle << std::endl;
std::cout << "le périmètre du cercle est:" << pericercle << std::endl;
std::cout << "nous allons maintenant calculer l'aire et le périmètre du rectangle" << std:: endl;
std::cout << "entrer la longueur et la largeur du rectangle" << std:: endl;
std::cin >> L >> l ; 
airerectangle = L*l ;
perirectangle = (L+l)*2 ;
std::cout << "l'aire du rectangle est:" << airerectangle << std::endl;
std::cout << "le périmètre du rectangle est:" << perirectangle << std::endl;
std::cout << "calculons l'aire et le périmètre du triangle" << std:: endl;
std::cout << "entrer la base suivie des 2 autres côtés du triangle" << std:: endl;
std::cin >> base >> cote1 >> cote2 ;
std::cout << "entrer la hauteur du triangle" << std:: endl;
std::cin >> H;
airetriangle = (base*H)/2 ;
peritriangle = base+cote1+cote2 ;
std::cout << "l'aire du triangle est:" << airetriangle << std::endl;
std::cout << "le périmètre du triangle est:" << peritriangle << std::endl;
    return 0;
}
