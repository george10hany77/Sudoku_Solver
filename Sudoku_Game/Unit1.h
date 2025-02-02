//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Types.hpp>
#include <System.Rtti.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <unordered_set>
#include <string>



//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
	TEdit *Edit11;
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *Edit14;
	TEdit *Edit15;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TEdit *Edit19;
	TEdit *Edit20;
	TEdit *Edit21;
	TEdit *Edit22;
	TEdit *Edit23;
	TEdit *Edit24;
	TEdit *Edit25;
	TEdit *Edit26;
	TEdit *Edit27;
	TEdit *Edit28;
	TEdit *Edit29;
	TEdit *Edit30;
	TEdit *Edit31;
	TEdit *Edit32;
	TEdit *Edit33;
	TEdit *Edit34;
	TEdit *Edit35;
	TEdit *Edit36;
	TEdit *Edit37;
	TEdit *Edit38;
	TEdit *Edit39;
	TEdit *Edit40;
	TEdit *Edit41;
	TEdit *Edit42;
	TEdit *Edit43;
	TEdit *Edit44;
	TEdit *Edit45;
	TEdit *Edit46;
	TEdit *Edit47;
	TEdit *Edit48;
	TEdit *Edit49;
	TEdit *Edit50;
	TEdit *Edit51;
	TEdit *Edit52;
	TEdit *Edit53;
	TEdit *Edit54;
	TEdit *Edit55;
	TEdit *Edit56;
	TEdit *Edit57;
	TEdit *Edit58;
	TEdit *Edit59;
	TEdit *Edit60;
	TEdit *Edit61;
	TEdit *Edit62;
	TEdit *Edit63;
	TEdit *Edit64;
	TEdit *Edit65;
	TEdit *Edit66;
	TEdit *Edit67;
	TEdit *Edit68;
	TEdit *Edit69;
	TEdit *Edit70;
	TEdit *Edit71;
	TEdit *Edit72;
	TEdit *Edit73;
	TEdit *Edit74;
	TEdit *Edit75;
	TEdit *Edit76;
	TEdit *Edit77;
	TEdit *Edit78;
	TEdit *Edit79;
	TEdit *Edit80;
	TEdit *Edit81;
	TButton *SolveButton;
	TButton *resetButton;
	TLabel *msg;
	void __fastcall resetButtonClick(TObject *Sender);
	void __fastcall SolveButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations

	std::vector<std::vector<TEdit*>> grid = {
		{Edit1, Edit2, Edit3, Edit4, Edit5, Edit6, Edit7, Edit8, Edit9},
		{Edit10, Edit11, Edit12, Edit13, Edit14, Edit15, Edit16, Edit17, Edit18},
		{Edit19, Edit20, Edit21, Edit22, Edit23, Edit24, Edit25, Edit26, Edit27},
		{Edit28, Edit29, Edit30, Edit31, Edit32, Edit33, Edit34, Edit35, Edit36},
		{Edit37, Edit38, Edit39, Edit40, Edit41, Edit42, Edit43, Edit44, Edit45},
		{Edit46, Edit47, Edit48, Edit49, Edit50, Edit51, Edit52, Edit53, Edit54},
		{Edit55, Edit56, Edit57, Edit58, Edit59, Edit60, Edit61, Edit62, Edit63},
		{Edit64, Edit65, Edit66, Edit67, Edit68, Edit69, Edit70, Edit71, Edit72},
		{Edit73, Edit74, Edit75, Edit76, Edit77, Edit78, Edit79, Edit80, Edit81}
	};

	std::vector<std::vector<String>> strGrid = {
		{Edit1->Text, Edit2->Text, Edit3->Text, Edit4->Text, Edit5->Text, Edit6->Text, Edit7->Text, Edit8->Text, Edit9->Text},
		{Edit10->Text, Edit11->Text, Edit12->Text, Edit13->Text, Edit14->Text, Edit15->Text, Edit16->Text, Edit17->Text, Edit18->Text},
		{Edit19->Text, Edit20->Text, Edit21->Text, Edit22->Text, Edit23->Text, Edit24->Text, Edit25->Text, Edit26->Text, Edit27->Text},
		{Edit28->Text, Edit29->Text, Edit30->Text, Edit31->Text, Edit32->Text, Edit33->Text, Edit34->Text, Edit35->Text, Edit36->Text},
		{Edit37->Text, Edit38->Text, Edit39->Text, Edit40->Text, Edit41->Text, Edit42->Text, Edit43->Text, Edit44->Text, Edit45->Text},
		{Edit46->Text, Edit47->Text, Edit48->Text, Edit49->Text, Edit50->Text, Edit51->Text, Edit52->Text, Edit53->Text, Edit54->Text},
		{Edit55->Text, Edit56->Text, Edit57->Text, Edit58->Text, Edit59->Text, Edit60->Text, Edit61->Text, Edit62->Text, Edit63->Text},
		{Edit64->Text, Edit65->Text, Edit66->Text, Edit67->Text, Edit68->Text, Edit69->Text, Edit70->Text, Edit71->Text, Edit72->Text},
		{Edit73->Text, Edit74->Text, Edit75->Text, Edit76->Text, Edit77->Text, Edit78->Text, Edit79->Text, Edit80->Text, Edit81->Text}
	};

	bool TForm1::isValidSudoku(std::vector<std::vector<String>>& board);
	bool TForm1::isPossible(std::vector<std::vector<String>>& board, String num, int r, int c);
	bool TForm1::solveSudokuRec(std::vector<std::vector<String>>& board);
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
