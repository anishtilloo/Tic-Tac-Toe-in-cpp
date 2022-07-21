#include <iostream>
using namespace std;


char player = 'X';
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkWin(){
    // For X rows
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
    {
        return 'X';
    }
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X'){
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X'){
        return 'X';
    }
    

    // For X columns
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
    {
        return 'X';
    }
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X'){
        return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X'){
        return 'X';
    }

    // For X diagonals
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
    {
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X'){
        return 'X';
    }

// ------------------------------------------------------------------------------------------------


    // For O rows
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
    {
        return 'O';
    }
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
    {
        return 'O';
    }
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
    {
        return 'O';
    }
   

    // For O columns
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
    {
        return 'O';
    }
    if (matrix[0][1] == 'O' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
    {
        return 'O';
    }
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
    {
        return 'O';
    }
 

    // For O diagonals
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
    {
        return 'O';
    }
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
    {
        return 'O';
    }

    return '/';
}
void board(){
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

void input(){
    int a;
    cout << "Press the number of the field you want to enter: ";
    cin >> a;

    if (a==1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] = player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] = player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] = player;
}

void togglePlayer(){
    if (player == 'X'){
        player = 'O';
    }
    else{
        player = 'X';
    }
    
}

int main(){
    board();
    while (1){
        input();
        board();
        if (checkWin() ==  'X'){
            cout << "X Wins!"<< endl;
            break;
        }
        else if (checkWin() == 'O'){
            cout << "O Wins!" << endl;
            break;
        }
        togglePlayer();
    }

    return 0;
}
