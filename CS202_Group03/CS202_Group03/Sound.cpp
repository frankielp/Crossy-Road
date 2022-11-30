#include "header/header.h"

const double playSoundTimeInterval = 1.0;
double timePlaySound = 0;
std::chrono::high_resolution_clock::time_point lastTimePlaySound = std::chrono::high_resolution_clock::now();

void BackGround()
{
	if (checkSound)
		PlaySound(TEXT("DummyUndertaleOST-TobyFox.wav"), NULL, SND_LOOP | SND_ASYNC);
}
void Enter()
{
	if (checkSound)
		PlaySound(TEXT("enter.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Tap()
{
	if (checkSound)
		PlaySound(TEXT("tap.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
}
void WinMusic()
{
	if (checkSound)
		PlaySound(TEXT("Undertale OST_ 046 - Spear of Justice.wav"), NULL, SND_LOOP | SND_ASYNC);
}
void LoseMusic()
{
	if (checkSound)
		PlaySound(TEXT("Undertale OST_ 011 - Determination.wav"), NULL, SND_LOOP | SND_ASYNC);
}
void Dinosaur() {
	if (checkSound)
		PlaySound(TEXT("dinosaur.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Duck() {
	if (checkSound)
		PlaySound(TEXT("duck.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Car() {
	if (checkSound)
		PlaySound(TEXT("car.wav"), NULL, SND_FILENAME | SND_ASYNC);
}
void Bird() {
	if (checkSound)
		PlaySound(TEXT("bird.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

//main
