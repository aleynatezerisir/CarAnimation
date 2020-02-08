#include <graphics.h>



int main()
{
    int i;
    int gm=DETECT;
    int gd;
    initgraph(&gm,&gd,"C:\\TC\\BGI");

int maxX=getmaxx();




    for(i=0; i<maxX; ++i){

        setcolor(DARKGRAY);
        line(0,370,maxX,370);


        setcolor(YELLOW);
        circle(80+i,80,50);

        setcolor(WHITE);
        rectangle(525,250,535,370);
        rectangle(480,200,580,250);
        outtextxy(490,220,"VRC GAMES!");
if(i<=300){
        setcolor(RED);
        rectangle(100+i,300,200+i,350);
        setcolor(GREEN);
        circle(120+i,360,10);
        circle(180+i,360,10);

}
else{
     setcolor(RED);
        rectangle(400,300,500,350);
        setcolor(GREEN);
        circle(420,360,10);
        circle(480,360,10);
}

        setcolor(RED);
        rectangle(0+i*5,50,50+i*5,60);

        setcolor(GREEN);
        rectangle(100+i*5,70,50+i*5,80);

        setcolor(CYAN);
        rectangle(-400+i*5,30,-350+i*5,40);

        setcolor(GREEN);
        rectangle(-1000+i*5,70,-950+i*5,80);






        if(i==0){
            setcolor(WHITE);
            outtextxy(200,400,"Press any key to start");
            getch();
        }

    delay(20);
cleardevice();


    }
         getch();
        closegraph();
    return 0;
}
