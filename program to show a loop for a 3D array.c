// program to show a loop for a 3D array
#include <stdio.h>
int main() {
	int a [3][3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int i,r,c;
for (i=0;i<3;i++)
{
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf ("%d\n", a[i][r][c]);
        }
    }
}
    return 0;
}
