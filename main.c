#include <stdio.h>
// DICKY IBROHIM
int main ()
{   int n, hasil;
    printf ("Input max Number to cek Prime or NOT= ");
    scanf ("%d", &n);
    hasil= prima(n);


   return 0;

}

// FUNGSI
int prima(int n){

    int loop1,loop2;
    int pasti1=1;
    if(pasti1==1){
        printf("Bil %d  = Bukan prima \n",pasti1);
    }
   for(loop1=2;loop1<=n;loop1++)
    {
      int flag = 0;


      if(loop1 %2!=0 )
        {

        //cek dari 3 saja, krena 1 sdh pasti faktor pembaginya
        for(loop2=2;loop2<=(int) ceil(sqrt(loop1));loop2++)
            {

             /*check apakah i habis dibagi loo2,
                jika ya maka flag++ artinya bkn prima*/
                  // Jika 1 Bukan Prima

             if(loop1 %loop2==0)
                {
                flag++;
                }
            }

       }
         // Jika 1 Bukan Prima

       else{

         if(loop1!=2)
         {
              flag++;
         }

       }
// PRINT OUT
       if(flag==0){
           printf("Bil %d  = prima \n",loop1);
       }

       else
       {
           printf("Bil %d  = Bukan Prima\n",loop1);
       }
   }
}
