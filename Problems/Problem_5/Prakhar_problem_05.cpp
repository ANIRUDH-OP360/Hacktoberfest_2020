#include <iostream>

int main()
 {
   for (int i = 1 ; i <=12 ; i++)
    {
      std::cout<<"multiplication table for "<<i<<std::endl;
      for (int j = 1; j <= 10 ; j++ )
      {
        
        std::cout<< i << "*"<< j <<" =" << i*j <<std::endl;

      }
    }
 
}
