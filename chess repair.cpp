#include "ChessClass.h"
#define key
int main(int argc, char** argv) {
	// setlocale (LC_ALL,"RUS");

	massivcall();
	FigureStart();
	massivcall();
	cout << endl << "Start zikl gamelife" << endl;
	while (GameLife() == KonigLebenStatus::BeideLeben) {
				#ifdef key
						cout << endl << "while step()"<<endl;
				#endif // DEBUG
		Step();
				#ifdef key
						cout << endl << "step() end"<<endl;
				#endif // DEBUG
	}

	GameEnd();



	return 0;
}

/*
#ifdef DEBUG

#endif // DEBUG

#ifdef DEBUG
	cout << endl << "" << endl;
#endif // DEBUG
*/