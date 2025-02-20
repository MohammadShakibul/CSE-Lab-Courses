#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    cout<<"Enter x1,y1:"<<endl;

    int x1,y1;
    cin>>x1>>y1;

    cout<<"Enter r:"<<endl;

    int r;
    cin>>r;

    int x11=x1;
    int y11=y1;
     int p=3-2*r;
void Draw_circle(int x1,int y1,int x11,int y11){
        putpixel(x1+x,y1+y,white);
        putpixel(x1-x,y1+y,white);
        putpixel(x1-x,y1-y,white);
        putpixel(x1+x,y1-y,white);
        putpixel(x1+y,y1+x,white);
        putpixel(x1-y,y1+x,white);
        putpixel(x1-y,y1-x,white);
        putpixel(x1+y,y1-x,white);

        }

    while( x1<y1 )
    {

        if(p<0)
        {

            x1=x1+1;
            p=p+(4*x1)+6;
        }
        else
        {
            x1+=1;
            y1+=1;
            p=p+4*(x1-y1)+10;
        }

        Draw_circle(x1,y1,x11,y11);

    }

    Circle(x1,y1,r);

    getch();
    closegraph();
    return 0;
}

