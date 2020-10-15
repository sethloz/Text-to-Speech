#pragma once
#include "Basic Voice.h"

class FemaleVoice :
	public BasicVoice
{
public:
	void setSpeech();
	void outSpeech();
	void byeSpeech();
};