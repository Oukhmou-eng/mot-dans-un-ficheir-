
#include <iostream>

#include <string>

using namespace std ;



 void compare(  const string & mot1 , const string & motch ){

   int y = 0 ; 



    for ( int i = 0 ; i < mot1.size() ; i++ ){
        if ( mot1[i] == motch[y] ) 
         {y++ ; } 
    }
    

    if(y == motch.size()  ) cout << "true" << endl ;

    else cout << "false" << endl ;  





}




int main(){

     string mot2 = "ouane" ; 
     cout << "mot a comparer : " << mot2 << endl ; 

    FILE *f = fopen("fichier.txt", "r");

    if (f == NULL) {
        cout << "Erreur lors de l'ouverture du fichier." << endl;
        return 1;
    }


    char mot[100];
    

    


while (fscanf(f, "%99s", mot) == 1) {
    cout << mot << "    " ;
    compare(mot, mot2) ;
}




 

    fclose(f);

    return 0;
 
 


}