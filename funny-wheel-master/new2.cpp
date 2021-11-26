#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
    char arr[10][10]= {'*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*',
                       '*', '*', '*', '*', '*','*', '*', '*', '*', '*'
                      };
    int i,j,a,b,n;

    while(1)
    {
        {
            system("cls");
            for(i=0; i<10; i++)
            {
                printf("  ");
                for(j=0; j<10; j++)
                {
                    if(i==4)
                    {
                        printf(" %c",arr[i][j]);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            Sleep(100);
            system("cls");
            a = 0;
            b = 9;
            for(i=0; i<10; i++)
            {
                printf("\t");
                for(j=0; j<10; j++)
                {
                    if(i==a&&j==b)
                    {
                        printf("%c",arr[i][j]);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                a++;
                b--;
            }
            Sleep(100);
            system("cls");
            for(i=0; i<10; i++)
            {
                printf("\t");
                for(j=0; j<10; j++)
                {
                    if(j==4)
                    {
                        printf("%c",arr[i][j]);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            Sleep(100);
            system("cls");
            a = 0;
            b = 0;
            for(i=0; i<10; i++)
            {
                printf("\t");
                for(j=0; j<10; j++)
                {
                    if(i==a&&j==b)
                    {
                        printf("%c",arr[i][j]);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
                a++;
                b++;
            }
            Sleep(100);
        }
    }
    return 0;
}
