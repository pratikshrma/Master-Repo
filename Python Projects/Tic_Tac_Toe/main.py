# Global Variables
board=["_","_","_",
        "_","_","_",
        "_","_","_",]

# if game is still going
game_still_going=True

# who Won
winner=None

# whose turn is it
current_player="X"

def display_board():
    print(board[0]+' | '+board[1]+' | '+board[2])
    print(board[3]+' | '+board[4]+' | '+board[5])
    print(board[6]+' | '+board[7]+' | '+board[8])

def playGame():
    # display iniatial board
    display_board()
    while game_still_going:
        handle_turn(current_player)
        check_if_game_over()
        # flip player
        flip_player()

    # game has ended
    if winner=='X' or winner=="O":
        print(winner+ " Won")
    elif winner==None:
        print("Tie")

def handle_turn(player):
    position=input("Chooes a position from 1 to 9: ")
    
    if position not in ["1","2","3","4","5","6","7","8","9"]:
        print("Invalid Choice")
        handle_turn(player)
    # while position not in ["1","2","3","4","5","6","7","8","9"]:
    #     position=input("iNVALID CHOICE Chooes a position from 1 to 9: ")

    position=int(position)-1
    if board[position]!="_":
        print("you cannot go there")
        handle_turn(player)
    board[position]=player
    display_board()

def check_if_game_over():
    check_for_winner()
    check_if_tie()

def check_for_winner():
    # set up global variable
    global winner
    #check rows
    row_winner=check_rows()
    # check columns
    column_winner=check_columns()
    # check diagonals
    diagonal_winner=check_diagonals()

    if row_winner:
        # there is a winner
        winner=row_winner
    elif column_winner:
        # there is a winner
        winner=column_winner
    elif diagonal_winner:
        # there is a winner
        winner=diagonal_winner
    else:
        winner = None
        
    return

def check_rows():
    # set a global variable
    global game_still_going
    # check if any of the rows have same value
    row_1=board[0]==board[1]==board[2]!="_"
    row_2=board[3]==board[4]==board[5]!="_"
    row_3=board[6]==board[7]==board[8]!="_"
    # if 
    if row_1 or row_2 or row_3:
        game_still_going=False
        # return the winner
    if row_1:
        return board[0]
    if row_2:
        return board[3]
    if row_3:
        return board[6]


def check_columns():
    # set a global variable
    global game_still_going
    # check if any of the rows have same value
    column_1=board[0]==board[3]==board[6]!="_"
    column_2=board[1]==board[4]==board[7]!="_"
    column_3=board[2]==board[5]==board[8]!="_"
    # if 
    if column_1 or column_2 or column_3:
        game_still_going=False
        # return the winner
    if column_1:
        return board[0]
    if column_2:
        return board[1]
    if column_3:
        return board[2]


def check_diagonals():
        # set a global variable
    global game_still_going
    # check if any of the rows have same value
    diagonal_1=board[0]==board[4]==board[8]!="_"
    diagonal_2=board[6]==board[4]==board[2]!="_"
     # if 
    if diagonal_1 or diagonal_2:
        game_still_going=False
        # return the winner
    if diagonal_1:
        return board[0]
    if diagonal_2:
        return board[6]


def check_if_tie():
    global game_still_going
    if "_" not in board:
        game_still_going=False
        


def flip_player():
    # global player
    global current_player
    # this just switches the player1
    if current_player=="X":
        current_player="O"
    elif current_player=="O":
        current_player="X"
    # return

playGame()

# board
 #display board
# play game
# handles turn
# check win
    # check rows
    # check columns
    # check digonals
# check tie
# flip player