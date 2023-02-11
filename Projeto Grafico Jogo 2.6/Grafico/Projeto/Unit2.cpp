//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Personagens P1;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	int atk, df, agi, resis, peso, life, classe;

	atk = 90;
	df = 60;
	agi = 40;
	resis = 30;
	peso = 70;
	life = 100;
	classe = 1; // Guerreiro
	P1.EntraDados(atk,df,agi,resis,peso,life,classe);

	this->Hide();
	Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	int atk, df, agi, resis, peso, life, classe;

	atk = 60;
	df = 20;
	agi = 100;
	resis = 35;
	peso = 35;
	life = 70;
	classe = 2; // Ladino
	P1.EntraDados(atk,df,agi,resis,peso,life,classe);

	this->Hide();
	Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
	int atk, df, agi, resis, peso, life, classe;

	atk = 50;
	df = 70;
	agi = 30;
	resis = 60;
	peso = 90;
	life = 150;
	classe = 3; // Paladino
	P1.EntraDados(atk,df,agi,resis,peso,life,classe);

	this->Hide();
	Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
	int atk, df, agi, resis, peso, life, classe;

	atk = 40;
	df = 30;
	agi = 50;
	resis = 80;
	peso = 50;
	life = 80;
	classe = 4; // Mago
	P1.EntraDados(atk,df,agi,resis,peso,life,classe);

	this->Hide();
	Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
	int atk, df, agi, resis, peso, life, classe;

	atk = 80;
	df = 40;
	agi = 100;
	resis = 40;
	peso = 45;
	life = 90;
	classe = 5; // Caçador
	P1.EntraDados(atk,df,agi,resis,peso,life,classe);
	this->Hide();
	Form3->Show();
}

void Personagens::EntraDados(int ataque, int defesa, int agilid, int resis, int peso, int vida, int classe)
{
  this->attack = ataque;
  this->defense = defesa;
  this->agilidade = agilid;
  this->resistencia_magia = resis;
  this->peso = peso;
  this->life = vida;
  this->Classe = classe;
}

void Personagens::Leitura()
{
  Form3->Memo1->Lines->Add(Classe);
  Form3->Memo1->Lines->Add(life);
  Form3->Memo1->Lines->Add(agilidade);
  Form3->Memo1->Lines->Add(peso);
}

//---------------------------------------------------------------------------
