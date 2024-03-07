#include <stdio.h>


void fun( )
{
    static int num = 1;  // block scope 
    num++; 
    printf("num = %d\n",num); 
}

int main( void )
{
    //printf("num = %d",num); //NOT OK 
    fun( ); //2 
    fun( ); //3
    fun( ); //4 
    return 0;
}

// int num = 1; 
// void fun( )
// {
//     num++; 
//     printf("num = %d\n",num); 
// }

// int main( void )
// {
//     //printf("num = %d",num); // OK 
//     fun( ); //2 
//     fun( ); //3
//     fun( ); //4 
//     return 0;
// }
// void fun( )
// {
//     int num = 1; 
//     num++; 
//     printf("num = %d\n",num); 
// }

// int main( void )
// {
//     //printf("num = %d",num); // NOT OK 
//     fun( ); //2 
//     fun( ); //2 
//     fun( ); //2
//     return 0;
// }