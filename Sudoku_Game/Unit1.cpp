//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------

bool TForm1::isValidSudoku(std::vector<std::vector<String>>& board) {

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
			String element = board[i][j];
			if(element != "."){
				if(element.Length() != 1){// to make sure it is one digit
                    return false;
				}
				try {
					int num = std::stoi(element.c_str());
					if(num < 1 || num > 9) {
						return false;
					}
				} catch(const std::invalid_argument& e) {
					// If stoi throws an exception, it means the string is not a number
					return false;
				}
			}
        }
	}

    for (int y = 0; y < 9; y++) {
		std::unordered_set<int> set;
		for (int x = 0; x < 9; x++) {
			if (board[x][y] != ".") {
				int tempNum = std::stoi(board[x][y].c_str());
				if (!set.count(tempNum)) {
					set.insert(tempNum);
				} else {
                    return false;
                }
			}
        }
    }

    for (int y = 0; y < 9; y++) {
		std::unordered_set<int> set;
        for (int x = 0; x < 9; x++) {
			if (board[y][x] != ".") {
				int tempNum = std::stoi(board[y][x].c_str());
				if (!set.count(tempNum)) {
					set.insert(tempNum);
				} else {
					return false;
				}
			}
		}
	}

	for (int y = 0; y < 9; y += 3) {
		for (int x = 0; x < 9; x += 3) {
			std::unordered_set<int> set;
			for (int i = x; i < 3 + x; i++) {
				for (int j = y; j < 3 + y; j++) {
					if (board[i][j] != ".") {
					int tempNum = std::stoi(board[i][j].c_str());
						if (!set.count(tempNum)) {
							set.insert(tempNum);
						} else {
							return false;
                        }
                    }
                }
            }
        }
    }

    return true;
}

bool TForm1::isPossible(std::vector<std::vector<String>>& board, String num, int r, int c) {
	if (board[r][c] != ".")
		return false;
	for (int i = 0; i < 9; i++) {
		if (board[i][c] == num) {
			return false;
        }
    }
    for (int i = 0; i < 9; i++) {
        if (board[r][i] == num) {
            return false;
        }
    }
    int cStart = (c / 3) * 3, rStart = (r / 3) * 3;
    int cEnd = ((c / 3) * 3) + 3, rEnd = ((r / 3) * 3) + 3;
    for (int i = cStart; i < cEnd; i++) {
        for (int j = rStart; j < rEnd; j++) {
            if (board[j][i] == num) {
                return false;
            }
        }
    }
    return true;
}

bool TForm1::solveSudokuRec(std::vector<std::vector<String>>& board) {
	for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            if (board[r][c] == ".") {
                String tempString = "-";
                for (int i = 1; i < 10; i++) {
                    if (isPossible(board, String(i), r, c)) {
                        tempString = String(i);
                        board[r][c] = tempString;
                        if (solveSudokuRec(board)) {
                            return true;
                        }
                        else {
                            board[r][c] = ".";
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    // to begin with reseted Grid.
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			grid[i][j]->Text = ".";
		}
	}

    msg->Text = "Reset !";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::resetButtonClick(TObject *Sender)
{
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			grid[i][j]->Text = ".";
		}
	}

    msg->Text = "Reset !";
} 
//---------------------------------------------------------------------------



void __fastcall TForm1::SolveButtonClick(TObject *Sender)
{

	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			strGrid[i][j] = grid[i][j]->Text;
		}
	}

	if(isValidSudoku(strGrid)){
		if(solveSudokuRec(strGrid)){
			msg->Text = "Successfully Solved :)";
		}
	}
	else{
		msg->Text = "Not solvable :(";
	}

	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			grid[i][j]->Text = strGrid[i][j];
		}
	}

}

//---------------------------------------------------------------------------


