#pragma once
#include "ofMain.h"
#include "GameManager.h"
#include "Button.h"
#include "Trigger.h"
#include "HUD.h"
#include "Objetivo.h"
#include "Transicao.h"

#define DIALOGUES 3 //numero de dialogos

class GamePlay
{
public:
	/*-- vari�veis --*/
	ofImage wall1;  //imagem que cont�m a cama, porta e duto de ar
	ofImage wall2;  //imagem que cont�m vaso sanit�rio
	ofImage m_noteText; //imagem com texto do bilhete
	ofImage crack1; //rachadura no lado A
	ofImage crack2; //rachadura no lado B

	//Button *bed;  //cama
	//Button *note;  //bilhete
	//Button *toilet;  //vaso sanit�rio
	//Button *door;  //porta
	//Button *changeSide;  //bot�o que troca as cenas

	bool m_showingNote; //mostrando texto do bilhete
	bool m_fimdodia;

	/*-- m�todos --*/
	GamePlay(GameManager *game);
	~GamePlay();

	void reset(GameManager *game);
	void update(GameManager *game);
	void draw(GameManager *game);

	/*-- Dialogos --*/
	void MousePressed(int x, int y, int button, GameManager *game); // Testa se o objeto foi pressionado
	void CheckIndex();
	bool TriggerCheck(int object); // Checa os triggers caso um objeto for trancado por trigger
	void LockCheck(); // Testa se todos os objetos est�o trancados

private:
	HUD *hud;
	Button *m_illuminati;
	Button *Bed;
	Button *Door;
	Button *Toilet;
	Button *changeSide;
	Trigger *Note;
	Objetivo *objetivo;
	Transicao *trans;

	int index;
	bool
		triggerLock,
		free,
		dialogueActive;
};