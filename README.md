# TIC TAC TOE
![image](https://github.com/JusDooEt/TicTacToeGUI/assets/152052216/be422a8f-3958-464d-84e6-c58314a51c37)
![image](https://github.com/JusDooEt/TicTacToeGUI/assets/152052216/3fe38562-5d56-4e28-aaf8-70098bfc89f0)
![image](https://github.com/JusDooEt/TicTacToeGUI/assets/152052216/49f191fa-e6ab-4ad5-b4b0-b9423b1d291d)
![image](https://github.com/JusDooEt/TicTacToeGUI/assets/152052216/7f9649d1-fc75-494f-b647-7e8ff6b92623)

## About
This program is a classic game of tic tac toe. This program can support a single player game or a two player game of tic tac toe. When running the program the user will be prompted with the menu below. If the user chooses to set the player's names the program will prompt the user for the new players names and will return to the menu after. If the user chooses a two player game, the program will use the stored user's names and have each player take turns. If the names are not changed, the program will default the names to 'X' and 'O'. If the user chooses a single player game, the program will use an algorithm to determine the computer's play after the user has played their turn.

## Functionality 
- Main Menu
  - Game mode combo box
    - This combo box will be set to single player as default and changing the value to two player will stop the computer from playing and allow to a mulitplayer game.
  - Play Button
    - This button will start a new instance of a game of TIC-TAC-TOE and load the game board widget.
  - Change Player Name Button
    - This button will open a dialog box for the user to enter new names for a two player game mode.
    - If the game mode is set to single player then player1's name will be the set name by the user or the default "X", and player2's name will be set to "computer".
  - Quit Button
    - This button will exit the entire application.
- Game Board
  - Button Grid
    - The game board uses a 3 X 3 grid of push buttons in order for the user to interact with the application.
    - When a user presses a button or a computer chooses a button, it will be disabled until the board is reinitialized.
    - The button text will be initialized as a blank space and will change to the corresponding 'X' or 'O' if choosen
  - Retry Button
    - This button will reinitialize the button grid and start a new game.
  - Quit Button
    - This button will close the game board and return the user to the main menu.
  - Game Over Dialog
    - If a win condition is met then a dialog will be shown
      - The correct player name will be displayed as "<playername> Wins!!!".
    - If a win condition is not met and all the spaces on the board are filled, the dialog will announce a tie game.
    - Retry Button
      - This button will reinitialize the button grid and start a new game.
      - Closes the game over dialog.
    - Quit Button
      - This button will close the game board and return the user to the main menu.
      - Closes the game over dialog.
- GetCompPlay
  - This function is the logic that determines the spot on the board the "computer" will select.
  - The logic consists of if statements to check the state of the board.
  - The computer will prioritize and win, a defensive play and a random play in that order.
  - The if statements check to see what values are contained in two adjacent spots on the board and will command the computer to react accordingly.
  - If none of the conditions are met in the if statements, the function will generate random spots on the board until one is found to be empty and is therefore selected.


