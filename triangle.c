#include <cs50.h>          // if you need SANBOX to run code see   https://run.cs50.net/ 
#include <stdio.h>
                                                
bool valid_triangle(float a, float b, float c);

int main(void)
{
    printf("give me the sides of triangle: ");
    float a = get_float();
    float b = get_float();
    float c = get_float();
    bool i = valid_triangle(a, b, c);
    
    if (valid_triangle(a,b,c) == true)   //     <-- added & removed -->: if (valid_triangle == true)
        {
            printf("triangle side lengths are %i", valid_triangle);
        }

    if (valid_triangle(a,b,c) == false)  //     <-- added & removed -->: if (valid_triangle == false)
        {
            printf("triangle side lengths are %i", valid_triangle);
        }

}

bool valid_triangle(float a, float b, float c)

{
if (a <= 0 || b <= 0 || c <=0)                // check for all positive sides
    {
        return false;
    }

if (a + b <= c) || (a + c <= b) || (c + b <= a)  // check that sum of any two sides are greater than third side.
    {
        return false;
    }
        
    return true;         // if we passed both tests, result is true.
}
    
*/
#######################################################################################
Error message:
########################################################################################
triangle.c:14:24: error: comparison between pointer and integer ('bool
      (*)(float, float, float)' and 'int') [-Werror]
    if (valid_triangle == true)
        ~~~~~~~~~~~~~~ ^  ~~~~
triangle.c:16:52: error: format specifies type 'int' but the argument has
      type 'bool (*)(float, float, float)' [-Werror,-Wformat]
            printf("triangle side lengths are %i", valid_triangle);
                                              ~~   ^~~~~~~~~~~~~~
triangle.c:19:9: error: comparison of function 'valid_triangle' equal to a
      null pointer is always false [-Werror,-Wtautological-pointer-compare]
    if (valid_triangle == false)
        ^~~~~~~~~~~~~~    ~~~~~
triangle.c:19:9: note: prefix with the address-of operator to silence this
      warning
    if (valid_triangle == false)
        ^
        &
triangle.c:21:52: error: format specifies type 'int' but the argument has
      type 'bool (*)(float, float, float)' [-Werror,-Wformat]
            printf("triangle side lengths are %i", valid_triangle);
                                              ~~   ^~~~~~~~~~~~~~
triangle.c:12:10: error: unused variable 'i' [-Werror,-Wunused-variable]
    bool i = valid_triangle(a, b, c);
         ^
triangle.c:34:17: error: expected expression
if (a + b <= c) || (a + c <= b) || (c + b <= a)  // check that sum o...
                ^
6 errors generated.
make: *** [triangle] Error 1
~/workspace/ $ 

*/


