/* What is wrong in this code fragment?
*  
*  The i < 4 and j < 5 values need to be swapped or i will miss one element and j will go out
*  of bounds.
* 
*  WARNING! Do not run array may go out of bounds.
*
*/

int main()
{
    unsigned short SomeArray[5][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            SomeArray[i][j] = i + j;
        }
    }
}