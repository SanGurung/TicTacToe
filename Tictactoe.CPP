//This program is coded by santos gurung 
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include <stdlib.h>

#define ENTER   0x0D
#define ESC	0x1b
#define ARROWS  0x00
static int firstselect,player,gameover;
static int box1,box2,box3,box4,box5,box6,box7,box8,box9;
void win();
void Anim_circles();
void appalau();
class myneeds
{
public:
mychoicecircle(int l)
{
       int mycolor=15,myback=1,choice,myx,myy;  choice=l;
       if(player==1){ mycolor=12; myback=4; }else if(player==2){ mycolor=9; myback=1; }
       if(choice=='7'){ myx=235; myy=155; box7=player; }  if(choice=='8'){ myx=310; myy=155; box8=player; } if(choice=='9'){ myx=386; myy=155; box9=player; }
       if(choice=='4'){ myx=235; myy=230; box4=player; }  if(choice=='5'){ myx=310; myy=230; box5=player; } if(choice=='6'){ myx=386; myy=230; box6=player; }
       if(choice=='1'){ myx=235; myy=300; box1=player; }  if(choice=='2'){ myx=310; myy=300; box2=player; } if(choice=='3'){ myx=386; myy=300; box3=player; }

       setcolor(LIGHTGRAY); setfillstyle(SOLID_FILL,myback);   pieslice(myx,myy,0,360,20);
       pieslice(15,450,45,325,12);
       setcolor(mycolor); setfillstyle(SOLID_FILL,BLACK);  pieslice(myx,myy,0,360,10);
       gameover=gameover+1;
       return(0);
}

makealine(int xx,int yy,int xz,int yz)
{
line(xx,yy,xz,yz);
win(); getch();
return(0);
}
} //Class Ends Here ::.::.
main()
{
myneeds callit;
int gdriver,gmode;
gdriver=DETECT;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
   Anim_circles();  win();
   mount:
   int i=200,c=4,l,xx,yy,xz,yz;  cleardevice();
   setcolor(LIGHTGRAY);
   outtextxy(10,470,"Programmers: Santos Gurung");
   outtextxy(10,460,"Copyright (c)2005 Tictactoe Group."); outtextxy(10,10,"Tictactoe 2005#"); outtextxy(550,10,"ESC-(Exit)");
   setfillstyle(SOLID_FILL,RED);      setcolor(LIGHTRED);
   while(i<=230){
   bar3d(230,i,390,i+20,1,2);
   if(i>=230){ goto nexter;} i=230; c=12;} nexter: i=15,c=7;
   loopme:
   setcolor(i); outtextxy(240,207,"Computer Vs Human");
   setcolor(c); outtextxy(250,237,"Human Vs Human");
   l=getch();
   if(l==ARROWS) {
   if(i==15)
   {i=7; c=15;  goto loopme;}
   else{i=15; c=7;  goto loopme;}
   }
   else if(l==ENTER)
   {
   if(i==15){ cleardevice();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t      For Future Progress.";
   getch(); clrscr(); cleardevice(); goto mount;}
   else if(c==15){ goto play;  }
   else {goto play;}
   }
   else if(l==ESC){ exit(0);  }
   else{ goto loopme; }
   play:      appalau();
   cleardevice();   settextstyle(DEFAULT_FONT, VERT_DIR, 1);
   setcolor(LIGHTGRAY); outtextxy(630,130,"Copyright (c) 2005 Tictactoe Group.");
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1); outtextxy(10,10,"Tictactoe 2005::.::.");
   outtextxy(350,10,"Message:"); outtextxy(50,440,"Game Keys: 1 to 9 & ESC-(Exit) & N-(New)");
   outtextxy(50,450,"Think Before Every Move,Player 1 is resembled by red & second by Blue.");
   outtextxy(50,460,"Programmer: Santos Gurung");
   setcolor(WHITE ); outtextxy(200,130,"7         8         9");
		     outtextxy(200,200,"4         5         6");
		     outtextxy(200,270,"1         2         3");
   line(275,125,275,330); line(351,125,351,330); line(200,194,430,194); line(200,264,430,264);
   player=1; box1=21;box2=23;box3=12;box4=40;box5=15;box6=36;box7=17;box8=18;box9=29; gameover=0;
   player=1; //Games Starts From Here
   againl:
   setcolor(BLACK); outtextxy(220,10,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
   if(player==1){ setcolor(LIGHTRED); setfillstyle(SOLID_FILL,RED); outtextxy(230,10,"Turn:Player 1"); outtextxy(0,426,"Turn::."); }
   else{ setcolor(LIGHTBLUE); setfillstyle(SOLID_FILL,BLUE);  outtextxy(230,10,"Turn:Player 2"); outtextxy(0,426,"Turn::.");}
   pieslice(15,450,45,325,12);
   l=getch();
   setcolor(BLACK);
   if(l=='n'||l=='N'){ goto play; }
   else if(l==ESC){ goto mount;}
   outtextxy(415,10,"ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
   setcolor(WHITE);
   switch(l){ //I could have re written this repeated code pattern (I was started to programming). 
   case '1': if(box1==1||box1==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   case '2': if(box2==1||box2==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   case '3': if(box3==1||box3==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   case '4': if(box4==1||box4==2) { outtextxy(415,10,"Sorry,already pressed ::."); goto againl; } break;
   case '5': if(box5==1||box5==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   case '6': if(box6==1||box6==2) { outtextxy(415,10,"Sorry,already pressed ::."); goto againl; } break;
   case '7': if(box7==1||box7==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   case '8': if(box8==1||box8==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   case '9': if(box9==1||box9==2) { outtextxy(415,10,"Sorry,already pressed::."); goto againl; } break;
   default: outtextxy(415,10,"You have pressed Wrong key::.");  goto againl; }
    setcolor(WHITE);   callit.mychoicecircle(l);
   if(player==1){player=2;}else{player=1;} 
   if(box7==box8&&box8==box9) { xx=200;yy=155;xz=430;yz=155; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box4==box5&&box5==box6) { xx=200;yy=230;xz=430;yz=230; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box1==box2&&box2==box3) { xx=200;yy=300;xz=430;yz=300; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box7==box4&&box4==box1) { xx=235;yy=125;xz=235;yz=330; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box8==box5&&box5==box2) { xx=310;yy=125;xz=310;yz=330; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box9==box6&&box6==box3) { xx=386;yy=125;xz=386;yz=330; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box7==box5&&box5==box3) { xx=205;yy=125;xz=420;yz=330; callit.makealine(xx,yy,xz,yz); goto play;}
   if(box9==box5&&box5==box1) { xx=420;yy=125;xz=205;yz=330; callit.makealine(xx,yy,xz,yz); goto play;}
   if(gameover<9) { }
   else{ outtextxy(415,10,"Game,Finished.No One Wins::."); getche(); goto play; }
   goto againl;

}
//An animated circles, just a good one::.
void Anim_circles()
{  int i=271;
 setcolor(LIGHTGRAY);
 outtextxy(30,10,"Tictac Game 2005e."); outtextxy(30,390,"Copyright(c)2005-2006");
 outtextxy(30,405,"Tictac Group.");     outtextxy(470,390,"Splash screeni2..");
 outtextxy(470,405,"By Santos grg");
 i=4;  int jk=1;
 while(!kbhit()){
 setcolor(LIGHTGRAY); setfillstyle(SOLID_FILL,jk);   pieslice(290,180,0,360,30);
 setcolor(LIGHTBLUE); setfillstyle(SOLID_FILL,BLACK);  pieslice(290,180,0,360,15);
 setcolor(LIGHTGRAY); setfillstyle(SOLID_FILL,i);    pieslice(350,200,0,360,40);
 setfillstyle(SOLID_FILL,BLACK);    pieslice(350,200,0,360,20);
  if(i==4){ i=1; jk=4;}
  else{ i=4; jk=1;}
    settextstyle(0, HORIZ_DIR, 0); settextstyle(3, HORIZ_DIR, 2);  setcolor(WHITE);
 outtextxy(260,220,"Tictac Game.");
   delay(300);
 }
    settextstyle(0, HORIZ_DIR, 0);
    getche();
}

void appalau()
{ int e=0;
  while(e<1100) {
  sound(210+e); delay(20);
  e=e+50; }
   nosound();
}
void win()
{  //Really a good sound here::.
 sound(1000); delay(200);   nosound();
 sound(800); delay(100);   nosound();
  sound(1000); delay(100);   nosound();
  sound(1200); delay(200);   nosound();
  sound(1600); delay(500);   nosound();
}

