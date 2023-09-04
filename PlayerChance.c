
#ifndef
_PLAYERCHANCE_H
#define
_PLAYERCHANCE_H
#include <iostream>
using namespace std;
class PlayerChance
{
private:
int row;
int column;
int choice;
public:
char turn;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void Player_turn()
{
if(turn == 'X')
{
cout<<"\n\tPlayer - 1 [X]'s turn : ";
}
else if(turn == 'O')
{
cout<<"\n\tPlayer - 2 [O]'s turn : ";
}
}
void Choice()
{
cin>> choice;
switch(choice)
{
case 1: row=0; column=0; break;
case 2: row=0; column=1; break;
case 3: row=0; column=2; break;
case 4: row=1; column=0; break;
case 5: row=1; column=1; break;
case 6: row=1; column=2; break;
case 7: row=2; column=0; break;
case 8: row=2; column=1; break;
case 9: row=2; column=2; break;
default:
cout<<"Invalid Move\n";
}
}
void Validate_Move()
{
if(turn == 'X' && board[row][column] != 'X' &&
board[row][column] != 'O')
{
board[row][column] = 'X';
turn = 'O';
}
else if(turn == 'O' && board[row][column] != 'X' &&
board[row][column] != 'O')
{
board[row][column] = 'O';
turn = 'X';
}
else
{
one!!\n\n";
}
}
};
int main()
{
cout<<"Box is already filled!\nPlease choose another
Player_turn();
PlayerChance
c1,c2,c3;
c1.Player_turn
();
c2.Choice();
c3.Validate_M
ove(); return
0;
}
#endif //_PLAYERCHANCE_H
