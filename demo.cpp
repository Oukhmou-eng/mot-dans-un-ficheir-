
#include <iostream>

#include <string>
#include <time.h> 
#include <iomanip>
using namespace std ;



 bool compare(  const string & mot1 , const string & motch ){

   int y = 0 ; 



    for ( int i = 0 ; i < mot1.size() ; i++ ){
        if ( mot1[i] == motch[y] ) 
         {y++ ; } 
    }
    

    if(y == motch.size()  ) return true  ;

   return false  ;  





}




int main(){

     string mot2 ; 
     bool res = false ; 

     cout <<" Saiser le mot a chercher : " << endl ; 
     cin >> mot2 ;  

      

    FILE *f = fopen("fichier.txt", "r");

    if (f == NULL) {
        cout << "Erreur lors de l'ouverture du fichier." << endl;
        return 1;
    }


    char mot[100];
    

    clock_t start = clock(); // Démarrer le chronomètre


while (fscanf(f, "%99s", mot) == 1) {
    
   if((res = compare(mot, mot2)) )  {cout << "le mot '" << mot2 << "' est trouver dans le ficheir " << endl ; break ;  } 
}
clock_t  end = clock ();
double tmpR = (double)(end - start) / CLOCKS_PER_SEC * 1000000;


if(!res) {cout << "le mot :  '" << mot2 << "'  n'est pas  trouver dans le ficheir "  << endl ; } 

  cout << fixed << setprecision(2);
 cout << "temps de recherche est  : " << tmpR <<  " microsecondes " << endl; 

 

    fclose(f);

    return 0;
 
 


}