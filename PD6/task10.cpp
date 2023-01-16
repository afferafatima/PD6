#include<iostream>
#include<windows.h>
using namespace std;
void clear(int x,int y,char previous);
void gotoxy(int x,int y);
void maze();
void erase(int x,int y);
void printpacman(int x,int y);
char getCharAtxy(short int x,short int y);
void printghost1(int x,int y);
void printghost2(int x,int y);
int score=0;
int scoreincrease();

main()
 {

    system("cls");
    maze();
    int x=3;
    int y=2;
    int gx=30;
    int gy=6;
    int ga=8;
    int gb=5;
    string direction = "right";
    string direction1 ="down";
    char previous = ' ';
    char previous1=' ';
    printpacman(x,y);
    printghost1(gx,gy);
    printghost2(ga,gb);

    bool gamerunning=true;
    while(gamerunning)
    {
        if(GetAsyncKeyState(VK_LEFT)) 
 {
 char nextlocation=getCharAtxy(x-1,y);
  if(nextlocation==' ')
  {
  	erase(x,y);
  	x=x-1; 
  	printpacman(x,y);
  }
   if (nextlocation == '.')
            {
                erase(x, y);
                x = x - 1;
                printpacman(x, y);
                scoreincrease();
            }
 }

if(GetAsyncKeyState(VK_RIGHT)) 
 {
 char nextlocation=getCharAtxy(x+1,y);
  if(nextlocation==' ')
  {
  	erase(x,y);
  	x=x+1; 
  	printpacman(x,y);
  }
  if (nextlocation == '.')
            {
                erase(x, y);
                x = x + 1;
                printpacman(x, y);
                scoreincrease();
            }
 }
if(GetAsyncKeyState(VK_UP)) 
 {
 char nextlocation=getCharAtxy(x,y-1);
  if(nextlocation==' ')
  {
  	erase(x,y);
  	y=y-1; 
  	printpacman(x,y);
  }
   if (nextlocation == '.')
            {
                erase(x, y);
                y = y - 1;
                printpacman(x, y);
                scoreincrease();
            }

 }
if(GetAsyncKeyState(VK_DOWN)) 
 {
 char nextlocation=getCharAtxy(x,y+1);
  if(nextlocation==' ')
  {
  	erase(x,y);
  	y=y+1; 
  	printpacman(x,y);
  }
  if (nextlocation == '.')
            {
                erase(x, y);
                y = y + 1;
                printpacman(x, y);
                scoreincrease();
            }
 }
if(GetAsyncKeyState(VK_ESCAPE))
	{
	gamerunning=false;
	}

    Sleep(200);
	
	if(direction == "right")
	{
	  char nextlocation =  getCharAtxy(gx + 1, gy);
	  if(nextlocation == '|'|| nextlocation == '%')
	  {
	       direction ="left";
	  }
	  else if(nextlocation == ' ' || nextlocation == '.')
	  {
		clear(gx , gy , previous);
		gx = gx + 1;
		previous = nextlocation;
		printghost1(gx , gy);
	  }

        }
	if(direction == "left")
	{
	  char nextlocation =  getCharAtxy(gx - 1, gy);
	  if(nextlocation == '|'|| nextlocation == '%')
	  {
	       direction ="right";
	  }
	  else if(nextlocation == ' ' || nextlocation == '.')
	  {
		clear(gx , gy , previous);
		gx = gx - 1;
		previous = nextlocation;
		printghost1(gx , gy);
	  }

         }
	if(direction1 == "down")
	{
	  char nextlocation =  getCharAtxy(ga, gb + 1);
	  if(nextlocation == '|' || nextlocation == '%' )
	  {
	       direction1 ="up";
	  }
	  else if(nextlocation == ' ' || nextlocation == '.')
	  {
		clear(ga , gb , previous1);
		gb = gb + 1;
		previous1 = nextlocation;
		printghost2(ga , gb);
	  }

        }
	if(direction1 == "up")
	{
	  char nextlocation =  getCharAtxy(ga, gb -1);
	  if(nextlocation == '|'|| nextlocation == '%')
	  {
	       direction1 ="down";
	  }
	  else if(nextlocation == ' ' || nextlocation == '.')
	  {
		clear(ga , gb , previous1);
		gb = gb - 1;
		previous1 = nextlocation;
		printghost2(ga , gb);
	  }

         }
     }
}



	 void gotoxy(int x,int y)
	 {
	 COORD coordinates;
	 coordinates.X = x;
	 coordinates.Y = y;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	 }

	void maze()
	{
	cout << "##########################################################################" << endl;
	cout << "||.. .......................................................  .....     ||" << endl;
	cout << "||.. %%%%%%%%%%%%%%%%       ...     %%%%%%%%%%%%%%%   |%|..   %%%%      ||" << endl;
	cout << "||..        |%|   |%|    |%|...     |%|         |%|   |%|..    |%|      ||" << endl; 
	cout << "||..        |%|   |%|    |%|...     |%|         |%|   |%|..    |%|      ||" << endl;
	cout << "||..        %%%%%%%% . . |%|...     %%%%%%%%%%%%%%%      ..   %%%%.     ||" << endl;
	cout << "||..        |%|      . . |%|                         |%| ..       .     ||" << endl;
	cout << "||..        %%%%%%%%%. . |%|...    %%%%%%%%%%%%%     |%| ..   %%%%.     ||" << endl;
	cout << "||..              |%|. .           |%|.......        |%| ..    |%|.     ||" << endl;
	cout << "||..     ........ |%|.             |%|.......|%|         ..    |%|.     ||" << endl;
	cout << "||..|%| |%|%%%|%|.|%|. |%|            .......|%|         ..|%| |%|.     ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%  .......|%|          .|%|.         ||" << endl;
	cout << "||..|%| |%|   |%|..           ...|%|      %%%%%%         . |%|.         ||" << endl;
	cout << "||..|%|           .           ...|%|                 |%| ..|%|.         ||" << endl;
	cout << "||..|%| %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%      |%| ..|%|%%%%%     ||" << endl;
	cout << "||...............................................    |%| ..........     ||" << endl;
	cout << "||   ............................................           .......     ||" << endl;
	cout << "||..|%| |%|   |%|..    %%%%%%%%%%%%%    ......|%|    |%| ..|%|.         ||" << endl;
	cout << "||..|%| |%|   |%|..           ...|%|       %%%%%%    |%| ..|%|.         ||" << endl;
	cout << "||..|%|           .           ...|%|                 |%| ..|%|.         ||" << endl;	
	cout << "||..    %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%%     |%| ..|%|%%%%%     ||" << endl;
	cout << "||..............................................     |%| ..........     ||" << endl;
	cout << "||  ............................................            .......     ||" << endl;
	cout << "||########################################################################" << endl;
         
	}
char getCharAtxy(short int x, short int y)
        {
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
        }	
void printpacman(int x,int y)
	{
	gotoxy(x,y);
	cout<< "P";
	}
void erase(int x,int y)
	{
        gotoxy(x,y);
	cout << " ";
	} 
void clear(int x,int y,char previous)
	{
        gotoxy(x,y);
	cout << " ";
	} 
void printghost1(int x,int y)
{
    gotoxy(x,y);
    cout<<"G";
}    
void printghost2(int x,int y)
{
    gotoxy(x,y);
    cout<<"V";
}   
int scoreincrease()
{
    score = score + 1;
    gotoxy(50,24);
    cout<<"SCORE: "<<score<<endl;
    return score;    
}