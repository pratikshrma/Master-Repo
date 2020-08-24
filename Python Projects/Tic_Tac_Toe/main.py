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
        print(winner+ "Won")
    elif winner==None:
        print("Tie")

def handle_turn(player):
    position=input("Chooes a position from 1 to 9: ")
    
    position=int(position)-1

    board[position]="X"
    display_board()

def check_if_game_over():
    check_for_winner()
    check_if_tie()

def check_for_winner():
    #check rows
    row_winner=check_rows()
    # check columns
    column_winner=check_columns()
    # check diagonals
    diagonal_winner=check_diagonals()

    if row_winner:
        # there is a winner
    elif column_winner:
        # there is a winner
    elif diagonal_winner:
        # there is a winner
    else:
        winner = None
        
    return

def check_rows():
    return
def check_columns():
    return
def check_diagonals():
    return

def check_if_tie():
    return

def flip_player():
    return


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