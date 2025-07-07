#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(){
    int gdriver = DETECT, gmode, errorcode
    initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
    
    /* int x,y,r,i;
       x=200; y=200; r=100;

       for(i=0;i<100;i++){
           setcolor(RED)
           circle(x+i,y+i,r);
           delay(30);
           setcolor(BLACK);
           circle(x+i,y+i,r);
           delay(30);
       
       for(){
         setcolor(RED);
         circle(x,y,i);
         delay(30);
         setcolor(BLacl);
         circle(x,y,i);
         deelay(30);
        }
    */



    setcolor(RED);
    line(0,0,getmaxx(),getmaxy());
    setcolor(BLUE);
    line(getmaxx(),0,0,getmaxy());
    
    midx = getmax()/2; midy = getmaxy()/2;

    //drawing circle//
    setcolor(YELLOW);
    circle(midx,midy,200);
    circle(midx,midy,150);
    outtexty(midx,midy,"Hello World");

    //drawing rectangle//
    setcolor(GREEN);
    rectangle( midx/2, midy/2, midx+midx/2, midy+midy/2);
    
    //drawing ellipse//
    setcolor(CYAN);
    ellipse(midx,midy,0,360,midx/2,midy/2);

    //drawing traingle//
    setcolor(MAGENTA);
    line(midx/2,midy,midx+midX/2,midy);
    line(midx,midy-midy/2,midx/2,midy);
    line(midx,midy-midy/2,midx+midx/2,midy);



    getch();
    closegraph();

    return 0;
}

