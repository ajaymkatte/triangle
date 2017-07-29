#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    printf("give me the sides of triangle: ");
    float a = get_float();
    float b = get_float();
    float c = get_float();
    bool i = valid_triangle(a, b, c);
    
    if (valid_triangle == true)
        {
            printf("triangle side lengths are %i", valid_triangle);
        }

    if (valid_triangle == false)
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
    





