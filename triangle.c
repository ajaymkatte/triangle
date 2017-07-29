#include <cs50.h>          // if you need SANBOX to run code see   https://run.cs50.net/ 
#include <stdio.h>
                                                
bool valid_triangle(float a, float b, float c);

int main(void)
{
    printf("give me the sides of triangle: ");
    float a = get_float();
    float b = get_float();
    float c = get_float();
    //no need to assign a separate variable for bool function                   bool i = valid_triangle(a, b, c);
    
    // don't use condition as the function called is bool                       if(valid_triangle == true)
    //                                                                              printf("triangle side lengths are %i", valid_triangle);
    //  use else instead of if as the function called is bool                   if (valid_triangle == false)
    //                                                                              printf("triangle side lengths are %i", valid_triangle);
    
    if(valid_triangle(a,b,c))      
        printf("triangle side lengths are %f\t%f\t%f\n",a,b,c);
    else
        printf("not a valid triangle\n");
    return 0;
}

bool valid_triangle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <=0)
        return false;
    
    if ((a + b <= c) || (a + c <= b) || (c + b <= a))                            // bracket were missed
        return false;
    return true;
}
