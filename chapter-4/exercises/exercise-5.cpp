/* Exercise 5 
*
* What is wrong with this code fragment?
* 
*  in the bounds for the i for loop the <= 5 should just be < 5 as this will cause the loop to go
* out of bounds of the array.
*
* WARNING: Dont run this code will go out of bounds!
*
*/

int main ()
{
    unsigned short SomeArray[5][4];

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            SomeArray[i][j] = 0;
        }
    }
}