#include "HUD.h"


HUD::HUD()
{
	Reset();
}

void HUD::Reset()
{
	m_x = 20;
	m_y = 610;
	m_w = 980;
	m_h = 90;
}

void HUD::Update(Button *b)
{
	m_dialogue = b->GetDialogue();
}

void HUD::Update()
{
	m_dialogue = "Talvez eu deva explorar mais o quarto..";
}

void HUD::Draw()
{
	ofSetColor(0, 0, 0);
	ofDrawRectRounded(m_x, m_y, m_w, m_h, 5);
	DrawDialogue();
}

void HUD::DrawDialogue()
{
	ofSetColor(255, 255, 255);
	ofDrawBitmapString(m_dialogue, 40, 640);
}


HUD::~HUD()
{
}