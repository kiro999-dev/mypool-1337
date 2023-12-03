#include <unistd.h>

void ft_putnbr(int nb) 
{
        int flage=1;
        int arr_nbr[11];
        int i=0;
        char c;

        if (nb==0)
        {
                write(1,"0",1);
                return;
        }
        
        if(nb==-2147483648)
        {
                  write(1,"-2147483648",11);
                return;
        }
              

        if(nb<0)
        {   
                 flage=0;
                 nb=nb*-1;
        }   


        while(nb>0)
        {   
                
                arr_nbr[i]=nb%10;
                nb=nb/10;
                i++;
            
        }   
            i--;
        while(i>=0)
        {   
                if(flage==0)
                {       flage=1;
                        write(1,"-",1);
                        
                }   
                c=arr_nbr[i]+48;
                write(1,&c,1);
                i--;        
      }
}      
