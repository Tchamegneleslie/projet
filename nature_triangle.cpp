#include<iostream>
#include<cmath>
int main( int argc, char**argv ) {
    float EF, FG, EG ; 
std::cout <<"entrer les distances des cotes du triangle , EF FG EG" <<std::endl ;
std::cin >> EF >> FG >> EG ;
if ( EF==0 || FG==0 || EG==0 )  {
    std::cout <<"calcul impossible" <<std::endl;  
} 
else if ( EF==FG && FG==EG ) {
    std::cout <<"le triangle en question est equilateral" <<std::endl ;
}
else if ( EF==FG || EF==EG || FG==EG ) {
     std::cout <<"le triangle en question est isocele" <<std::endl ;
}
else if ( EF>FG && EF>EG && EF==sqrt( FG*FG + EG*EG )){
 std::cout <<"il s'agit d'un triangle rectangle en G " <<std::endl ; }
 else if ( FG>EF && FG>EG && FG==sqrt( EF*EF + EG*EG )){
  std::cout <<"le triangle est rectangle en E " <<std::endl ;}
  else if( EG>EF && EG>FG && EG==sqrt( FG*FG + EF*EF ) ){
   std::cout <<"le triangle est rectangle en F " <<std::endl ; }
   return 0 ;
}
