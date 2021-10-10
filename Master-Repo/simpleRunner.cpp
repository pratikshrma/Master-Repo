#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>

#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 18
#define WIN_WIDTH 70

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int posX;
int posY;

char player[3][3]={' ','*',' ',
                    '*','*','*',
                    '#','#','#',};


void gotoxy(int x,int y){
    CursorPosition.X=x;
    CursorPosition.Y=y;
    SetConsoleCursorPosition(console,CursorPosition);
}

void setcursor(bool visible,DWORD size){
    if(size==0){
        size=20;
    }
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.dwSize=size;
    lpCursor.bVisible=visible;
    SetConsoleCursorInfo(console,&lpCursor);
}

void drawBorder(){
    for(int i=0;i<SCREEN_WIDTH;i++){
        gotoxy(i,0);cout<<"x";
        gotoxy(i,SCREEN_HEIGHT);cout<<"x";
        gotoxy(i,SCREEN_HEIGHT+1);cout<<"x";
        gotoxy(i,SCREEN_HEIGHT+2);cout<<"x";
        gotoxy(i,SCREEN_HEIGHT+3);cout<<"x";
        
    }
    for(int j=0;j<SCREEN_HEIGHT;j++){
            gotoxy(SCREEN_WIDTH,j);cout<<"*";
            gotoxy(SCREEN_WIDTH-1,j);cout<<"*";
            gotoxy(SCREEN_WIDTH-2,j);cout<<"*";
            gotoxy(SCREEN_WIDTH-3,j);cout<<"*";
    }
}

int main(){
    setcursor(0,0);
    while(1){
       Sleep(50);

        system("cls");
        drawBorder();
    }

    return 0;
}