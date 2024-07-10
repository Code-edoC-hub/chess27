#pragma once
#include<iostream>
#include<cmath>
#include<cstring>
#include<string.h>
#include<vector>
#include<cstdlib>
#include<conio.h>
using namespace std;
#define DEBUG 
void FigureStart();

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Base class																								//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
char 		  ChessDesk[8][8] = { {'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'},
								{'_','_','_','_','_','_','_','_'}, };
class figure {
public:
	int MoveCoordinates[2];
	int life;
	int coordinateRow;
	int coordinateColumn;
	string Color;
	// int MoveCoordinates[2];

	figure() {
		life = 1;
		// cout<<"Class figure created"<<endl;
	}

	inline int getlife();
	void setlife(int a);
	inline int GetCoordinateRow();
	inline int GetCoordinateColumn();
	inline string GetColor();
	void SetCoordinateColumn(int a);
	void SetCoordinateRow(int a);



	virtual void move() {
	}
	~figure() { // cout<<"class figure destructed "<<endl;
	}
};



inline int figure::getlife()
{
	return life;
}
void figure::setlife(int a) {
	life = a;
}
void figure::SetCoordinateRow(int a) {
	coordinateRow = a;
}


void figure::SetCoordinateColumn(int a) {
	coordinateColumn = a;
}
inline int figure::GetCoordinateRow()
{
	return coordinateRow;
}

inline int figure::GetCoordinateColumn()
{
	return coordinateColumn;
}

inline string figure::GetColor()
{
	return Color;
}

void SchreibenPositionFurMove(int MoveCoordinates[]);
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//					KonigLeben     																						//			
//																														//	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
class KonigLebenStatus {
public:
	enum KonigLeben {
		BlackDied,
		WhiteDied,
		BeideLeben,
	};
};

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//					Bauer        																						//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

class bauer :public figure {
private:


public:
	int SuperSchritt;

};

class WhiteBauer :public bauer {
private:

public:

	void MoveWhiteBauer();
	void move() override {
		MoveWhiteBauer();
	}

	WhiteBauer() {
		Color = "white";
	}
	~WhiteBauer() {
		//	cout<<"bauer White destructed"<<endl;
	}
};

class BlackBauer : public bauer {
private:

public:

	void MoveBlackBauer();
	void move() override {
		MoveBlackBauer();
	}

	BlackBauer() {
		Color = "black";
	}
	~BlackBauer() {
		//	cout<<"bauer Black destructed"<<endl;
	}
};
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Konig																									//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

class konig :public figure {
private:

public:

};

class WhiteKonig :public konig {

private:

public:

	void MoveWhiteKonig();

	void move() override {

		MoveWhiteKonig();
	}



	WhiteKonig() {
		Color = "white";
	}


	~WhiteKonig() {
		//	cout<<"White Konig desructed"<<endl;
	}
};

class BlackKonig :public konig {
private:

public:

	void MoveBlackKonig();

	void move() override {

		MoveBlackKonig();
	}



	BlackKonig() {
		Color = "black";
	}
	~BlackKonig() {
		//	cout<<"Black Konig desructed"<<endl;
	}
};
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Laufer																									//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
class laufer :public figure {
private:

public:
};

class WhiteLaufer :public laufer {
private:

public:

	void MoveWhiteLaufer();
	void move() override {
		MoveWhiteLaufer();
	}

	WhiteLaufer() {
		Color = "white";
	}
	~WhiteLaufer() {
		///	cout<<"White Laufer desructed"<<endl;
	}
};

class BlackLaufer :public laufer {
private:

public:

	void MoveBlackLaufer();
	void move() override {
		MoveBlackLaufer();
	}

	BlackLaufer() {
		Color = "black";
	}
	~BlackLaufer() {
		//	cout<<"Black Laufer desructed"<<endl;
	}
};
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//					Pferd																								//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

class pferd :public figure {
private:

public:


};

class WhitePferd :public pferd {
private:

public:

	void MoveWhitePferd();
	void move() override {
		MoveWhitePferd();
	}

	WhitePferd() {
		Color = "white";
	}
	~WhitePferd() {
		//	cout<<"White Pferd desructed"<<endl;
	}
};

class BlackPferd :public pferd {
private:

public:

	void MoveBlackPferd();
	void move() override {
		MoveBlackPferd();
	}

	BlackPferd() {
		Color = "black";
	}
	~BlackPferd() {
		//	cout<<"Black Pferd desructed"<<endl;
	}
};
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//									Turm																				//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
class turm :public figure {
private:

public:
};

class WhiteTurm :public turm {
private:

public:

	void MoveWhiteTurm();
	void move() override {
		MoveWhiteTurm();
	}

	WhiteTurm() {
		Color = "white";
	}
	~WhiteTurm() {
		// cout<<"White Turm desructed"<<endl;
	}
};

class BlackTurm :public turm {
private:

public:
	void MoveBlackTurm();
	void move() override {
		MoveBlackTurm();
	}

	BlackTurm() {
		Color = "black";
	}
	~BlackTurm() {
		//	cout<<"Black Turm desructed"<<endl;
	}
};

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//					Dame																								//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

class dame :public figure {
private:

public:
};

class WhiteDame :public dame {
private:

public:
	void MoveWhiteDame();
	void move() override {
		MoveWhiteDame();
	}

	WhiteDame() {
		Color = "white";
	}
	~WhiteDame() {
		//	cout<<"White Dame desructed"<<endl;
	}
};

class BlackDame :public dame {
private:

public:
	void MoveBlackDame();
	void move() override {
		MoveBlackDame();
	}
	BlackDame() {
		Color = "black";
	}
	~BlackDame() {
		//	cout<<"Black Dame desructed"<<endl;
	}
};
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//							Massiv Figure + Desk				    													//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
// 82 figures now
figure* figures[82];

WhiteKonig WhiteKonig[1];
BlackKonig BlackKonig[1];

WhiteDame WhiteDame[8];
BlackDame BlackDame[8];

WhiteTurm WhiteTurm[8];
BlackTurm BlackTurm[8];

WhitePferd WhitePferd[8];
BlackPferd BlackPferd[8];

WhiteLaufer WhiteLaufer[8];
BlackLaufer BlackLaufer[8];

WhiteBauer WhiteBauer[8];
BlackBauer BlackBauer[8];


/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Set Figures in Arr  																					//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
void SamelnFigures() {

	for (int i = 0; i < 82; i++) {
		if (i == 0) { figures[i] = &WhiteKonig[0]; } //1
		else	if (i == 1) { figures[i] = &BlackKonig[0]; }//2

		else	if (i < 10) figures[i] = &WhiteDame[i - 2];// 10

		else	if (i < 18) figures[i] = &BlackDame[i - 10];// 18

		else	if (i < 26) figures[i] = &WhiteTurm[i - 18];// 26

		else	if (i < 34) figures[i] = &BlackTurm[i - 26];// 34

		else	if (i < 42) figures[i] = &WhitePferd[i - 34];// 42

		else	if (i < 50) figures[i] = &BlackPferd[i - 42];// 50

		else	if (i < 58) figures[i] = &WhiteLaufer[i - 50];// 58

		else	if (i < 66) figures[i] = &BlackLaufer[i - 58];// 66

		else	if (i < 74) figures[i] = &WhiteBauer[i - 66];// 74

		else	if (i < 82) figures[i] = &BlackBauer[i - 74];// 82
	}
}
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Desk funk																								//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
void massivcall()
{
	for (int i = 0; i < 10; i++) cout << endl;
	cout << "\t" << "  a " << "b " << "c " << "d " << "e " << "f " << "g " << "h " << endl;
	cout << "\t " << (char)201;
	for (int i = 0; i < 15; i++) cout << (char)205;
	cout << (char)187;
	cout << endl;	for (int i = 0; i < 8; i++) {
		cout << "\t" << i + 1 << (char)186;
		for (int j = 0; j < 8; j++) {
			if (j == 7)
			{
				cout << ChessDesk[i][j] << (char)186;
			}
			else
			{
				cout << ChessDesk[i][j] << (char)179;
			}

		}
		cout << endl;
	}
	cout << "\t " << (char)200;
	for (int i = 0; i < 15; i++) cout << (char)205;
	cout << (char)188;
}

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Funk    																								//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
void SetWhiteBauer()
{
	for (int i = 0; i < 8; i++)
	{
		if (WhiteBauer[i].getlife() != 0)
		{
			ChessDesk[WhiteBauer[i].GetCoordinateRow()][WhiteBauer[i].GetCoordinateColumn()] = 'B';
		}

	}
}

void SetBlackBauer()
{
	for (int i = 0; i < 8; i++)
	{
		if (BlackBauer[i].getlife() != 0)
		{
			ChessDesk[BlackBauer[i].GetCoordinateRow()][BlackBauer[i].GetCoordinateColumn()] = 'b';
		}

	}
}

void SetBlackPferd()
{
	for (int i = 0; i < 8; i++)
	{
		if (BlackPferd[i].getlife() != 0)
		{
			ChessDesk[BlackPferd[i].GetCoordinateRow()][BlackPferd[i].GetCoordinateColumn()] = 'p';
		}

	}
}

void SetWhitePferd()
{
	for (int i = 0; i < 8; i++)
	{
		if (WhitePferd[i].getlife() != 0)
		{
			ChessDesk[WhitePferd[i].GetCoordinateRow()][WhitePferd[i].GetCoordinateColumn()] = 'P';
		}

	}
}

void SetWhiteLaufer()
{
	for (int i = 0; i < 8; i++)
	{
		if (WhiteLaufer[i].getlife() != 0)
		{
			ChessDesk[WhiteLaufer[i].GetCoordinateRow()][WhiteLaufer[i].GetCoordinateColumn()] = 'L';
		}

	}
}
void SetBlackLaufer()
{
	for (int i = 0; i < 8; i++)
	{
		if (BlackLaufer[i].getlife() != 0)
		{
			ChessDesk[BlackLaufer[i].GetCoordinateRow()][BlackLaufer[i].GetCoordinateColumn()] = 'l';
		}

	}
}

void SetWhiteTurm()
{
	for (int i = 0; i < 8; i++)
	{
		if (WhiteTurm[i].getlife() != 0)
		{
			ChessDesk[WhiteTurm[i].GetCoordinateRow()][WhiteTurm[i].GetCoordinateColumn()] = 'T';
		}

	}
}
void SetBlackTurm()
{
	for (int i = 0; i < 8; i++)
	{
		if (BlackTurm[i].getlife() != 0)
		{
			ChessDesk[BlackTurm[i].GetCoordinateRow()][BlackTurm[i].GetCoordinateColumn()] = 't';
		}

	}
}

void SetWhiteDame()
{
	for (int i = 0; i < 8; i++)
	{
		if (WhiteDame[i].getlife() != 0)
		{
			ChessDesk[WhiteDame[i].GetCoordinateRow()][WhiteDame[i].GetCoordinateColumn()] = 'D';
		}

	}
}
void SetBlackDame()
{
	for (int i = 0; i < 8; i++)
	{
		if (BlackDame[i].getlife() != 0)
		{
			ChessDesk[BlackDame[i].GetCoordinateRow()][BlackDame[i].GetCoordinateColumn()] = 'd';
		}

	}
}

void SetWhiteKonig()
{
	ChessDesk[WhiteKonig[0].GetCoordinateRow()][WhiteKonig[0].GetCoordinateColumn()] = 'K';
}

void SetBlackKonig()
{
	ChessDesk[BlackKonig[0].GetCoordinateRow()][BlackKonig[0].GetCoordinateColumn()] = 'k';
}






void SetGameFigure() {

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			ChessDesk[i][j] = '_';
		}
	}

	for (int i = 0; i < 82; i++)
	{
		if (i == 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'K'; } //1
		else	if (i == 1) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'k'; }//2

		else	if (i < 10) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'D'; } }// 10

		else	if (i < 18) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'd'; } }// 18

		else	if (i < 26) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'T'; } }// 26

		else	if (i < 34) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 't'; } }// 34

		else	if (i < 42) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'P'; } }// 42

		else	if (i < 50) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'p'; } }// 50

		else	if (i < 58) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'L'; } }// 58

		else	if (i < 66) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'l'; } }// 66

		else	if (i < 74) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'B'; } }// 74

		else	if (i < 82) { if (figures[i]->getlife() != 0) { ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()] = 'b'; } }// 82
	}
	//	for(int i=66;i<82;i++){
	//		cout<<"w";
	//		if(i<74){  cout<<endl<< "B"<<i; if(figures[i]->getlife()!=0)     {ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()]='B';	cout<< "B=White";} }// 74
	//else	if(i<82){ cout<<endl<< "b"<<i; if(figures[i]->getlife()!=0)     {ChessDesk[figures[i]->GetCoordinateRow()][figures[i]->GetCoordinateColumn()]='b';cout<< " b=black"; 	} }// 82
	//	}

	/*
	SetWhiteBauer();
	SetBlackBauer();
	SetBlackPferd();
	SetWhitePferd();
	SetBlackLaufer();
	SetWhiteLaufer();
	SetBlackTurm();
	SetWhiteTurm();
	SetBlackDame();
	SetWhiteDame();
	SetWhiteKonig();
	SetBlackKonig();
	*/
}

void FigureStart()
{
	SamelnFigures();

	//////////////////////////////////////////////////////////////////////////////////////// White Bauer
	for (int i = 0; i < 8; i++)
	{
		WhiteBauer[i].setlife(1);
		WhiteBauer[i].SetCoordinateRow(1);
		WhiteBauer[i].SetCoordinateColumn(i);
		WhiteBauer[i].SuperSchritt = 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////// Black Bauer
	for (int i = 0; i < 8; i++)
	{
		BlackBauer[i].setlife(1);
		BlackBauer[i].SetCoordinateRow(6);
		BlackBauer[i].SetCoordinateColumn(i);
		BlackBauer[i].SuperSchritt = 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////// Black Pferd
	for (int i = 0; i < 8; i++)
	{
		if (i < 2) { BlackPferd[i].setlife(1); }
		else { BlackPferd[i].setlife(0); }

		if (i == 0) {
			BlackPferd[i].SetCoordinateRow(7);
			BlackPferd[i].SetCoordinateColumn(2);
		}
		else if (i == 1) {
			BlackPferd[i].SetCoordinateRow(7);
			BlackPferd[i].SetCoordinateColumn(5);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// White Pferd

	for (int i = 0; i < 8; i++)
	{
		if (i < 2) { WhitePferd[i].setlife(1); }
		else { WhitePferd[i].setlife(0); }

		if (i == 0) {
			WhitePferd[i].SetCoordinateRow(0);
			WhitePferd[i].SetCoordinateColumn(2);
		}
		else if (i == 1) {
			WhitePferd[i].SetCoordinateRow(0);
			WhitePferd[i].SetCoordinateColumn(5);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// White Dame
	for (int i = 0; i < 8; i++)
	{
		if (i < 1) { WhiteDame[i].setlife(1); }
		else { WhiteDame[i].setlife(0); }

		if (i == 0) {
			WhiteDame[i].SetCoordinateRow(0);
			WhiteDame[i].SetCoordinateColumn(3);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// Black Dame
	for (int i = 0; i < 8; i++)
	{
		if (i < 1) { BlackDame[i].setlife(1); }
		else { BlackDame[i].setlife(0); }

		if (i == 0) {
			BlackDame[i].SetCoordinateRow(7);
			BlackDame[i].SetCoordinateColumn(3);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// White Laufer 
	for (int i = 0; i < 8; i++)
	{
		if (i < 2) { WhiteLaufer[i].setlife(1); }
		else { WhiteLaufer[i].setlife(0); }

		if (i == 0) {
			WhiteLaufer[i].SetCoordinateRow(0);
			WhiteLaufer[i].SetCoordinateColumn(1);
		}
		else if (i == 1) {
			WhiteLaufer[i].SetCoordinateRow(0);
			WhiteLaufer[i].SetCoordinateColumn(6);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// Black 	Laufer
	for (int i = 0; i < 8; i++)
	{
		if (i < 2) { BlackLaufer[i].setlife(1); }
		else { BlackLaufer[i].setlife(0); }

		if (i == 0) {
			BlackLaufer[i].SetCoordinateRow(7);
			BlackLaufer[i].SetCoordinateColumn(1);
		}
		else if (i == 1) {
			BlackLaufer[i].SetCoordinateRow(7);
			BlackLaufer[i].SetCoordinateColumn(6);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// White Turm 
	for (int i = 0; i < 8; i++)
	{
		if (i < 2) { WhiteTurm[i].setlife(1); }
		else { WhiteTurm[i].setlife(0); }

		if (i == 0) {
			WhiteTurm[i].SetCoordinateRow(0);
			WhiteTurm[i].SetCoordinateColumn(0);
		}
		else if (i == 1) {
			WhiteTurm[i].SetCoordinateRow(0);
			WhiteTurm[i].SetCoordinateColumn(7);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// Black Turm
	for (int i = 0; i < 8; i++)
	{
		if (i < 2) { BlackTurm[i].setlife(1); }
		else { BlackTurm[i].setlife(0); }

		if (i == 0) {
			BlackTurm[i].SetCoordinateRow(7);
			BlackTurm[i].SetCoordinateColumn(0);
		}
		else if (i == 1) {
			BlackTurm[i].SetCoordinateRow(7);
			BlackTurm[i].SetCoordinateColumn(7);
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////// White Konig 

	figures[0]->setlife(1);
	figures[0]->SetCoordinateRow(0);
	figures[0]->SetCoordinateColumn(4);


	//////////////////////////////////////////////////////////////////////////////////////// Black Konig

	BlackKonig[0].setlife(1);
	BlackKonig[0].SetCoordinateRow(7);
	BlackKonig[0].SetCoordinateColumn(4);

	/////////////////////////////////////////////////////////////////////////////////////// Function to set Figures on the desk

	SetGameFigure();
}

int GameLife() {
	int ZuruckendZahl;
	if (BlackKonig[0].getlife() == 0) {
		ZuruckendZahl = KonigLebenStatus::BlackDied;
		return ZuruckendZahl;
	}
	else if (WhiteKonig[0].getlife() == 0) {
		ZuruckendZahl = KonigLebenStatus::WhiteDied;
		return ZuruckendZahl;
	}
	else {
		ZuruckendZahl = KonigLebenStatus::BeideLeben;
		return ZuruckendZahl;
	}
}
//
//
//
//      error here
//
//
//
//
void SchreibenPosition(int BeschribendePosition[]) {

	char WhiteCoordinates[5] = { '!','!','!','!','!' };
	int korrektheitzahl = 0;
	int korrektheitBuchstabe = 0;
	int DeskCoordinates[2];
	//cout<<"Step White"<<endl;
	do {
		//	cout<<"================================================================"<<endl;
		//	cout<<"do 1"<<endl;
		if ((korrektheitBuchstabe != 0) || (korrektheitzahl != 0)) cout << " Write correctly!!" << endl;

		do {
			for (int i = 0; i < 5; i++) WhiteCoordinates[i] = '!';
			//		cout<<"do 22"<<endl;
			korrektheitzahl = 0;
			korrektheitBuchstabe = 0;
			cout << "Write coordinates=";
			cin >> WhiteCoordinates;
			if (WhiteCoordinates[2] != '\0') cout << "Too many !!" << endl;
			//	 cout<<WhiteCoordinates[0]<<WhiteCoordinates[1]<<WhiteCoordinates[2]<<WhiteCoordinates[3]<<endl;	
		} while (WhiteCoordinates[2] != '\0');
		//	cout<<"start if"<<endl;
		if ((WhiteCoordinates[0] == '1') || (WhiteCoordinates[1] == '1')) { DeskCoordinates[0] = 0; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '2') || (WhiteCoordinates[1] == '2')) { DeskCoordinates[0] = 1; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '3') || (WhiteCoordinates[1] == '3')) { DeskCoordinates[0] = 2; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '4') || (WhiteCoordinates[1] == '4')) { DeskCoordinates[0] = 3; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '5') || (WhiteCoordinates[1] == '5')) { DeskCoordinates[0] = 4; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '6') || (WhiteCoordinates[1] == '6')) { DeskCoordinates[0] = 5; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '7') || (WhiteCoordinates[1] == '7')) { DeskCoordinates[0] = 6; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '8') || (WhiteCoordinates[1] == '8')) { DeskCoordinates[0] = 7; korrektheitzahl++; }

		if ((WhiteCoordinates[0] == 'a') || (WhiteCoordinates[1] == 'a') || (WhiteCoordinates[0] == 'A') || (WhiteCoordinates[1] == 'A')) { DeskCoordinates[1] = 0; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'b') || (WhiteCoordinates[1] == 'b') || (WhiteCoordinates[0] == 'B') || (WhiteCoordinates[1] == 'B')) { DeskCoordinates[1] = 1; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'c') || (WhiteCoordinates[1] == 'c') || (WhiteCoordinates[0] == 'C') || (WhiteCoordinates[1] == 'C')) { DeskCoordinates[1] = 2; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'd') || (WhiteCoordinates[1] == 'd') || (WhiteCoordinates[0] == 'D') || (WhiteCoordinates[1] == 'D')) { DeskCoordinates[1] = 3; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'e') || (WhiteCoordinates[1] == 'e') || (WhiteCoordinates[0] == 'E') || (WhiteCoordinates[1] == 'E')) { DeskCoordinates[1] = 4; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'f') || (WhiteCoordinates[1] == 'f') || (WhiteCoordinates[0] == 'F') || (WhiteCoordinates[1] == 'F')) { DeskCoordinates[1] = 5; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'g') || (WhiteCoordinates[1] == 'g') || (WhiteCoordinates[0] == 'G') || (WhiteCoordinates[1] == 'G')) { DeskCoordinates[1] = 6; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'h') || (WhiteCoordinates[1] == 'h') || (WhiteCoordinates[0] == 'H') || (WhiteCoordinates[1] == 'H')) { DeskCoordinates[1] = 7; korrektheitBuchstabe++; }
		// 	cout<<"\nbefore end korrektheitzahl="<<korrektheitzahl<<" korrektheitBuchstabe=" <<korrektheitBuchstabe<<endl;
	} while ((korrektheitzahl != 1) || (korrektheitBuchstabe != 1));
	BeschribendePosition[0] = DeskCoordinates[0];
	BeschribendePosition[1] = DeskCoordinates[1];
	DeskCoordinates[0] = 100;
	DeskCoordinates[1] = 100;
}


void StepWhite() {
	TryAgainStepWhite:
					#ifdef DEBUG
						cout << "Step White funk" << endl;
					#endif // DEBUG
	
	int BeschribendePosition[2];
	SchreibenPosition(BeschribendePosition);


	///////////////////////////////////////////////////
	//     change this  part to add new figures      //
	///////////////////////////////////////////////////
	string SelectorClassFigure;
	int SelectorNumber;
	SelectorNumber = 0;
	for (int i = 0; i < 8; i++) {
		if ((WhiteKonig[0].GetCoordinateRow() == BeschribendePosition[0]) && (WhiteKonig[0].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "WhiteKonig";  SelectorNumber = i; }
		if (WhiteDame[i].getlife() == 1)	if ((WhiteDame[i].GetCoordinateRow() == BeschribendePosition[0]) && (WhiteDame[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "WhiteDame";   SelectorNumber = i; }
		if (WhiteTurm[i].getlife() == 1)	if ((WhiteTurm[i].GetCoordinateRow() == BeschribendePosition[0]) && (WhiteTurm[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "WhiteTurm";   SelectorNumber = i; }
		if (WhitePferd[i].getlife() == 1)	if ((WhitePferd[i].GetCoordinateRow() == BeschribendePosition[0]) && (WhitePferd[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "WhitePferd";  SelectorNumber = i; }
		if (WhiteLaufer[i].getlife() == 1)	if ((WhiteLaufer[i].GetCoordinateRow() == BeschribendePosition[0]) && (WhiteLaufer[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "WhiteLaufer"; SelectorNumber = i; }
		if (WhiteBauer[i].getlife() == 1)	if ((WhiteBauer[i].GetCoordinateRow() == BeschribendePosition[0]) && (WhiteBauer[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "WhiteBauer";  SelectorNumber = i; }
	}
	if (SelectorClassFigure == "WhiteKonig") {

		WhiteKonig[0].move();
	}
	else if (SelectorClassFigure == "WhiteDame") {
		WhiteDame[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "WhiteTurm") {
		WhiteTurm[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "WhitePferd") {
		WhitePferd[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "WhiteLaufer") {
		WhiteLaufer[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "WhiteBauer") {
		WhiteBauer[SelectorNumber].move();
	}
	else {
		cout << "It is not your figure" << endl;
		goto TryAgainStepWhite;
	}
	BeschribendePosition[0] = 100;
	BeschribendePosition[1] = 100;
}

void StepBlack() {
TryAgainStepBlack:
		#ifdef DEBUG
			cout << "Step Black funk" << endl;
		#endif // DEBUG
	
	int BeschribendePosition[2];
	SchreibenPosition(BeschribendePosition);

	///////////////////////////////////////////////////
	//     change this  part to add new figures      //
	///////////////////////////////////////////////////
	string SelectorClassFigure;
	int SelectorNumber;
	SelectorNumber = 0;
	for (int i = 0; i < 8; i++) {
		if ((BlackKonig[0].GetCoordinateRow() == BeschribendePosition[0]) && (BlackKonig[0].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "BlackKonig";  SelectorNumber = i; }
		if (BlackDame[i].getlife() == 1)	if ((BlackDame[i].GetCoordinateRow() == BeschribendePosition[0]) && (BlackDame[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "BlackDame";   SelectorNumber = i; }
		if (BlackTurm[i].getlife() == 1)	if ((BlackTurm[i].GetCoordinateRow() == BeschribendePosition[0]) && (BlackTurm[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "BlackTurm";   SelectorNumber = i; }
		if (BlackPferd[i].getlife() == 1)	if ((BlackPferd[i].GetCoordinateRow() == BeschribendePosition[0]) && (BlackPferd[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "BlackPferd";  SelectorNumber = i; }
		if (BlackLaufer[i].getlife() == 1)	if ((BlackLaufer[i].GetCoordinateRow() == BeschribendePosition[0]) && (BlackLaufer[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "BlackLaufer"; SelectorNumber = i; }
		if (BlackBauer[i].getlife() == 1)	if ((BlackBauer[i].GetCoordinateRow() == BeschribendePosition[0]) && (BlackBauer[i].GetCoordinateColumn() == BeschribendePosition[1])) { SelectorClassFigure = "BlackBauer";  SelectorNumber = i; }
	}
	if (SelectorClassFigure == "BlackKonig") {
		BlackKonig[0].move();
	}
	else if (SelectorClassFigure == "BlackDame") {
		BlackDame[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "BlackTurm") {
		BlackTurm[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "BlackPferd") {
		BlackPferd[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "BlackLaufer") {
		BlackLaufer[SelectorNumber].move();
	}
	else if (SelectorClassFigure == "BlackBauer") {
		BlackBauer[SelectorNumber].move();
	}
	else {
		cout << "It is not your figure" << endl;
		goto TryAgainStepBlack;
	}
	BeschribendePosition[0] = 100;
	BeschribendePosition[1] = 100;
}

void Step() {
			#ifdef DEBUG
				cout << endl << "step->step white" << endl;
			#endif // DEBUG
	StepWhite();
	SetGameFigure();
	massivcall();
			#ifdef DEBUG
				cout << endl << "step->step black" << endl;
			#endif // DEBUG
	StepBlack();
	SetGameFigure();
	massivcall();
			#ifdef DEBUG
				cout << endl << "end of step" << endl;
			#endif // DEBUG
}

void GameEnd() {

	if (GameLife() == KonigLebenStatus::BlackDied) {
		cout << "Black King died. White won" << endl;
	}
	else if (GameLife() == KonigLebenStatus::WhiteDied) {
		cout << "White King died. Black won" << endl;
	}
	else if (GameLife() == KonigLebenStatus::BeideLeben) {
		cout << "Oh!! You find secret error. Both of kings are alive" << endl;
	}
	else {
		cout << "How you did it? Both of kings are died" << endl;
	}
}


void SchreibenPositionFurMove(int MoveCoordinates[],int PositionCheck[]) {

	TryAgainSchreibenPosition:
	char WhiteCoordinates[5] = { '!','!','!','!','!' };
	int korrektheitzahl = 0;
	int korrektheitBuchstabe = 0;
	int DeskCoordinates[2];
	//cout<<"Step White"<<endl;
	do {
		//	cout<<"================================================================"<<endl;
		//	cout<<"do 1"<<endl;
		if ((korrektheitBuchstabe != 0) || (korrektheitzahl != 0)) cout << " Write correctly!!" << endl;

		do {
			for (int i = 0; i < 5; i++) WhiteCoordinates[i] = '!';
			//		cout<<"do 22"<<endl;
			korrektheitzahl = 0;
			korrektheitBuchstabe = 0;
			cout << "\nWrite coordinates to change position=";
			cin >> WhiteCoordinates;

			if (WhiteCoordinates[2] != '\0') cout << "Too many !!" << endl;
			//	 cout<<WhiteCoordinates[0]<<WhiteCoordinates[1]<<WhiteCoordinates[2]<<WhiteCoordinates[3]<<endl;	
		} while (WhiteCoordinates[2] != '\0');
		//	cout<<"start if"<<endl;
		if ((WhiteCoordinates[0] == '1') || (WhiteCoordinates[1] == '1')) { DeskCoordinates[0] = 0; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '2') || (WhiteCoordinates[1] == '2')) { DeskCoordinates[0] = 1; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '3') || (WhiteCoordinates[1] == '3')) { DeskCoordinates[0] = 2; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '4') || (WhiteCoordinates[1] == '4')) { DeskCoordinates[0] = 3; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '5') || (WhiteCoordinates[1] == '5')) { DeskCoordinates[0] = 4; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '6') || (WhiteCoordinates[1] == '6')) { DeskCoordinates[0] = 5; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '7') || (WhiteCoordinates[1] == '7')) { DeskCoordinates[0] = 6; korrektheitzahl++; }
		if ((WhiteCoordinates[0] == '8') || (WhiteCoordinates[1] == '8')) { DeskCoordinates[0] = 7; korrektheitzahl++; }

		if ((WhiteCoordinates[0] == 'a') || (WhiteCoordinates[1] == 'a') || (WhiteCoordinates[0] == 'A') || (WhiteCoordinates[1] == 'A')) { DeskCoordinates[1] = 0; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'b') || (WhiteCoordinates[1] == 'b') || (WhiteCoordinates[0] == 'B') || (WhiteCoordinates[1] == 'B')) { DeskCoordinates[1] = 1; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'c') || (WhiteCoordinates[1] == 'c') || (WhiteCoordinates[0] == 'C') || (WhiteCoordinates[1] == 'C')) { DeskCoordinates[1] = 2; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'd') || (WhiteCoordinates[1] == 'd') || (WhiteCoordinates[0] == 'D') || (WhiteCoordinates[1] == 'D')) { DeskCoordinates[1] = 3; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'e') || (WhiteCoordinates[1] == 'e') || (WhiteCoordinates[0] == 'E') || (WhiteCoordinates[1] == 'E')) { DeskCoordinates[1] = 4; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'f') || (WhiteCoordinates[1] == 'f') || (WhiteCoordinates[0] == 'F') || (WhiteCoordinates[1] == 'F')) { DeskCoordinates[1] = 5; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'g') || (WhiteCoordinates[1] == 'g') || (WhiteCoordinates[0] == 'G') || (WhiteCoordinates[1] == 'G')) { DeskCoordinates[1] = 6; korrektheitBuchstabe++; }
		if ((WhiteCoordinates[0] == 'h') || (WhiteCoordinates[1] == 'h') || (WhiteCoordinates[0] == 'H') || (WhiteCoordinates[1] == 'H')) { DeskCoordinates[1] = 7; korrektheitBuchstabe++; }
		// 	cout<<"\nbefore end korrektheitzahl="<<korrektheitzahl<<" korrektheitBuchstabe=" <<korrektheitBuchstabe<<endl;
	} while ((korrektheitzahl != 1) || (korrektheitBuchstabe != 1));

#ifdef DEBUG
	cout << endl << "PositionCheck[0]=" << PositionCheck[0] << "	PositionCheck[1]" << PositionCheck[1] << endl;
	cout << " DeskCoordinates[0]" << DeskCoordinates[0] << "	DeskCoordinates[1]" << DeskCoordinates[1] << endl;
#endif // DEBUG
	if ((PositionCheck[0] == DeskCoordinates[0] && PositionCheck[1] == DeskCoordinates[1]) || (PositionCheck[0] == DeskCoordinates[1] && PositionCheck[1] == DeskCoordinates[0])) {
		cout << "You choose same place" << endl;
		goto TryAgainSchreibenPosition;
	}


	MoveCoordinates[0] = DeskCoordinates[0];
	MoveCoordinates[1] = DeskCoordinates[1];
	DeskCoordinates[0] = 100;
	DeskCoordinates[1] = 100;
}


/*
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																														//
//				Move Funk    																							//
//																														//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
void WhiteKonig::MoveWhiteKonig() {
	int Wiederholer = 1;
AnfangdesWhiteKonig:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n"; 	Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteKonig; }
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellWhiteKonig:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "white")
				{

					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesWhiteKonig;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void BlackKonig::MoveBlackKonig() {

	int Wiederholer = 1;
AnfangdesBlackKonig:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";	 	Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackKonig; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackKonig; }
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellBlackKonig:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "black")
				{
					cout << "You cant do it" << endl;
					goto AnfangdesBlackKonig;
					break;
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}


void WhiteLaufer::MoveWhiteLaufer() {
	int Wiederholer=1;
AnfangdesWhiteLaufer:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn()};
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteLaufer; } //1
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhiteLaufer; } //2
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellWhiteLaufer; } //3
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellWhiteLaufer; } //4
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellWhiteLaufer; } //5
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellWhiteLaufer; } //6
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellWhiteLaufer; } //7

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteLaufer; } //8
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhiteLaufer; } //9
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellWhiteLaufer; } //10
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellWhiteLaufer; } //11
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellWhiteLaufer; } //12
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellWhiteLaufer; } //13
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellWhiteLaufer; } //14

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteLaufer; } //15
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhiteLaufer; } //16
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellWhiteLaufer; } //17
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellWhiteLaufer; } //18
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellWhiteLaufer; } //19
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellWhiteLaufer; } //20
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellWhiteLaufer; } //21

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteLaufer; } //22
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhiteLaufer; } //23
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellWhiteLaufer; } //24
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellWhiteLaufer; } //25
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellWhiteLaufer; } //26
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellWhiteLaufer; } //27
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellWhiteLaufer; } //28

		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellWhiteLaufer:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "white")
				{
					cout << "You cant do it" << endl;
					goto AnfangdesWhiteLaufer;
					break;
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void BlackLaufer::MoveBlackLaufer() {
	int Wiederholer=1;
AnfangdesBlackLaufer:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackLaufer; } //1
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackLaufer; } //2
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellBlackLaufer; } //3
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellBlackLaufer; } //4
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellBlackLaufer; } //5
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellBlackLaufer; } //6
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellBlackLaufer; } //7

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackLaufer; } //8
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackLaufer; } //9
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellBlackLaufer; } //10
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellBlackLaufer; } //11
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellBlackLaufer; } //12
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellBlackLaufer; } //13
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellBlackLaufer; } //14

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackLaufer; } //15
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackLaufer; } //16
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellBlackLaufer; } //17
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellBlackLaufer; } //18
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellBlackLaufer; } //19
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellBlackLaufer; } //20
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellBlackLaufer; } //21

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackLaufer; } //22
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackLaufer; } //23
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellBlackLaufer; } //24
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellBlackLaufer; } //25
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellBlackLaufer; } //26
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellBlackLaufer; } //27
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellBlackLaufer; } //28

		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellBlackLaufer:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "black")
				{
					cout << "You cant do it" << endl;
					goto AnfangdesBlackLaufer;
					break;
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void WhitePferd::MoveWhitePferd() {
	int Wiederholer=1;
AnfangdesWhitePferd:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };

		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";
		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhitePferd; } //1
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhitePferd; } //2
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhitePferd; } //3
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhitePferd; } //4
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhitePferd; } //5
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhitePferd; } //6
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhitePferd; } //7
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhitePferd; } //8
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellWhitePferd:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesWhitePferd;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void BlackPferd::MoveBlackPferd() {
	int Wiederholer=1;
AnfangdesBlackPferd:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";
		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackPferd; } //1
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackPferd; } //2
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackPferd; } //3
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackPferd; } //4
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackPferd; } //5
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackPferd; } //6
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackPferd; } //7
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackPferd; } //8
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellBlackPferd:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesBlackPferd;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void WhiteTurm::MoveWhiteTurm() {

	int Wiederholer=1;
AnfangdesWhiteTurm:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";
		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteTurm; } //1
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhiteTurm; } //2
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellWhiteTurm; } //3
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellWhiteTurm; } //4
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellWhiteTurm; } //5
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellWhiteTurm; } //6
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellWhiteTurm; } //7

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //8
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //9
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //10
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //11
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //12
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //13
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //14

		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteTurm; } //15
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhiteTurm; } //16
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellWhiteTurm; } //17
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellWhiteTurm; } //18
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellWhiteTurm; } //19
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellWhiteTurm; } //20
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellWhiteTurm; } //21

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //22
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //23
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //24
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //25
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //26
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //27
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteTurm; } //28
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellWhiteTurm:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesWhiteTurm;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void BlackTurm::MoveBlackTurm() {
	int Wiederholer=1;
AnfangdesBlackTurm:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";
		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackTurm; } //1
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackTurm; } //2
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellBlackTurm; } //3
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellBlackTurm; } //4
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellBlackTurm; } //5
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellBlackTurm; } //6
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellBlackTurm; } //7

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //8
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //9
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //10
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //11
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //12
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //13
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //14

		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackTurm; } //15
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackTurm; } //16
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellBlackTurm; } //17
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellBlackTurm; } //18
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellBlackTurm; } //19
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellBlackTurm; } //20
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellBlackTurm; } //21

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //22
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //23
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //24
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //25
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //26
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //27
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackTurm; } //28
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellBlackTurm:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesBlackTurm;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void WhiteDame::MoveWhiteDame() {
	int Wiederholer=1;
AnfangdesWhiteDame:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";
		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteDame; } //1
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhiteDame; } //2
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellWhiteDame; } //3
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellWhiteDame; } //4
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellWhiteDame; } //5
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellWhiteDame; } //6
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellWhiteDame; } //7

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //8
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //9
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //10
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //11
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //12
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //13
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //14

		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteDame; } //15
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhiteDame; } //16
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellWhiteDame; } //17
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellWhiteDame; } //18
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellWhiteDame; } //19
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellWhiteDame; } //20
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellWhiteDame; } //21

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //22
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //23
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //24
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //25
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //26
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //27
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellWhiteDame; } //28


		else    if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteDame; } //29
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhiteDame; } //30
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellWhiteDame; } //31
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellWhiteDame; } //32
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellWhiteDame; } //33
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellWhiteDame; } //34
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellWhiteDame; } //35

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteDame; } //36
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhiteDame; } //37
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellWhiteDame; } //38
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellWhiteDame; } //39
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellWhiteDame; } //40
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellWhiteDame; } //41
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellWhiteDame; } //42

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellWhiteDame; } //43
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellWhiteDame; } //44
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellWhiteDame; } //45
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellWhiteDame; } //46
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellWhiteDame; } //47
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellWhiteDame; } //48
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellWhiteDame; } //49

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellWhiteDame; } //50
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellWhiteDame; } //51
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellWhiteDame; } //52
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellWhiteDame; } //53
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellWhiteDame; } //54
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellWhiteDame; } //55
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellWhiteDame; } //56
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellWhiteDame:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesWhiteDame;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void BlackDame::MoveBlackDame() {
	int Wiederholer=1;
AnfangdesBlackDame:
	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n";
		Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackDame; } //1
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackDame; } //2
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellBlackDame; } //3
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellBlackDame; } //4
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellBlackDame; } //5
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellBlackDame; } //6
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellBlackDame; } //7

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //8
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //9
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //10
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //11
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //12
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //13
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //14

		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackDame; } //15
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackDame; } //16
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellBlackDame; } //17
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellBlackDame; } //18
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellBlackDame; } //19
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellBlackDame; } //20
		else	if ((coordinateRow == (MoveCoordinates[0])) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellBlackDame; } //21

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //22
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //23
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //24
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //25
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //26
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //27
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1]))) { goto CheckCellBlackDame; } //28


		else    if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackDame; } //29
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackDame; } //30
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellBlackDame; } //31
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellBlackDame; } //32
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellBlackDame; } //33
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellBlackDame; } //34
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellBlackDame; } //35

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackDame; } //36
		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackDame; } //37
		else	if ((coordinateRow == (MoveCoordinates[0] + 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellBlackDame; } //38
		else	if ((coordinateRow == (MoveCoordinates[0] + 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellBlackDame; } //39
		else	if ((coordinateRow == (MoveCoordinates[0] + 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellBlackDame; } //40
		else	if ((coordinateRow == (MoveCoordinates[0] + 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellBlackDame; } //41
		else	if ((coordinateRow == (MoveCoordinates[0] + 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellBlackDame; } //42

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { goto CheckCellBlackDame; } //43
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] - 2))) { goto CheckCellBlackDame; } //44
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] - 3))) { goto CheckCellBlackDame; } //45
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] - 4))) { goto CheckCellBlackDame; } //46
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] - 5))) { goto CheckCellBlackDame; } //47
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] - 6))) { goto CheckCellBlackDame; } //48
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] - 7))) { goto CheckCellBlackDame; } //49

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { goto CheckCellBlackDame; } //50
		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1] + 2))) { goto CheckCellBlackDame; } //51
		else	if ((coordinateRow == (MoveCoordinates[0] - 3)) && (coordinateColumn == (MoveCoordinates[1] + 3))) { goto CheckCellBlackDame; } //52
		else	if ((coordinateRow == (MoveCoordinates[0] - 4)) && (coordinateColumn == (MoveCoordinates[1] + 4))) { goto CheckCellBlackDame; } //53
		else	if ((coordinateRow == (MoveCoordinates[0] - 5)) && (coordinateColumn == (MoveCoordinates[1] + 5))) { goto CheckCellBlackDame; } //54
		else	if ((coordinateRow == (MoveCoordinates[0] - 6)) && (coordinateColumn == (MoveCoordinates[1] + 6))) { goto CheckCellBlackDame; } //55
		else	if ((coordinateRow == (MoveCoordinates[0] - 7)) && (coordinateColumn == (MoveCoordinates[1] + 7))) { goto CheckCellBlackDame; } //56
		else { Wiederholer = 0; }
	} while (Wiederholer == 0);

	if (100 == 20)
	{
	CheckCellBlackDame:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesBlackDame;
						break;
					}
				}
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}

		}
	}
}

void WhiteBauer::MoveWhiteBauer() {
	int Wiederholer=1;
AnfangdesWhiteBauer:

	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n"; 	Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1]))) { SuperSchritt = 100; goto CheckCellWhiteBauerStep; }

		else	if ((coordinateRow == (MoveCoordinates[0] - 2)) && (coordinateColumn == (MoveCoordinates[1]))) if (SuperSchritt == 0) { SuperSchritt = 100; goto CheckCellWhiteBauerStep; }

		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { SuperSchritt = 100; goto CheckCellWhiteBauerEat; }
		else	if ((coordinateRow == (MoveCoordinates[0] - 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { SuperSchritt = 100; goto CheckCellWhiteBauerEat; }

		else { Wiederholer = 0; }
	} while (Wiederholer == 0);


	if (2 == 20) {
	CheckCellWhiteBauerStep:
		for (int i = 0; i < 83; i++)
		{
			if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
			{
				cout << "Not Empty Position" << endl;
				goto AnfangdesWhiteBauer;
				break;
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}
		}
	}

	if (1 == 20)
	{
	CheckCellWhiteBauerEat:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "black")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "white")
				{

					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesWhiteBauer;
						break;
					}
				}
			}
			if (i == 82)
			{
				cout << "This Position is empty, write another coordinates" << endl;
				goto AnfangdesWhiteBauer;
			}

		}
	}
}

void BlackBauer::MoveBlackBauer() {
	int Wiederholer=1;
AnfangdesBlackBauer:

	do {
		int PositionCheck[2] = { this->GetCoordinateRow(),this->GetCoordinateColumn() };
		if (Wiederholer == 0) cout << "You Write incorrect coordinates \n"; 	Wiederholer = 20;
		SchreibenPositionFurMove(MoveCoordinates,PositionCheck);

		if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1]))) { SuperSchritt = 100; goto CheckCellBlackBauerStep; }

		else	if ((coordinateRow == (MoveCoordinates[0] + 2)) && (coordinateColumn == (MoveCoordinates[1]))) if (SuperSchritt == 0) { SuperSchritt = 100; goto CheckCellBlackBauerStep; }

		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] + 1))) { SuperSchritt = 100; goto CheckCellBlackBauerEat; }
		else	if ((coordinateRow == (MoveCoordinates[0] + 1)) && (coordinateColumn == (MoveCoordinates[1] - 1))) { SuperSchritt = 100; goto CheckCellBlackBauerEat; }

		else { Wiederholer = 0; }
	} while (Wiederholer == 0);


	if (2 == 20) {
	CheckCellBlackBauerStep:
		for (int i = 0; i < 83; i++)
		{
			if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
			{
				cout << "Not Empty Position" << endl;
				goto AnfangdesBlackBauer;
				break;
			}
			if (i == 82)
			{
				coordinateRow = MoveCoordinates[0];
				coordinateColumn = MoveCoordinates[1];
				break;
			}
		}
	}

	if (1 == 20)
	{
	CheckCellBlackBauerEat:
		for (int i = 0; i < 83; i++)
		{
			if (i < 82)
			{
				if (figures[i]->GetColor() == "white")
				{
					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						figures[i]->setlife(0);
						figures[i]->SetCoordinateRow(100);
						figures[i]->SetCoordinateColumn(100);
						coordinateRow = MoveCoordinates[0];
						coordinateColumn = MoveCoordinates[1];
						break;
					}
				}
				else if (figures[i]->GetColor() == "black")
				{

					if ((figures[i]->GetCoordinateRow() == MoveCoordinates[0]) && (figures[i]->GetCoordinateColumn() == MoveCoordinates[1]))
					{
						cout << "You cant do it" << endl;
						goto AnfangdesBlackBauer;
						break;
					}
				}
			}
			if (i == 82)
			{
				cout << "This Position is empty, write another coordinates" << endl;
				goto AnfangdesBlackBauer;
			}

		}
	}
}

































































































//
// change void start to make game modes
//
// void set game figures used to write letters in compiler
//
//if you add figure change step both colors (change selector) , change funk SamelnFigure  ,change funk Set gamefigure 
//
//
//

