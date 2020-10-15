#include "Basic Voice.h"
#include "Female Voice.h"
#include "Male Voice.h"

int main()
{
	BasicVoice* b1 = NULL;
	b1 = new MaleVoice;
	int choice;
	do
	{
		cout << "1 for Male\n2 for Female\n3 to end\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			b1 = new MaleVoice;
			b1->setSpeech();
			b1->outSpeech();
			delete b1;
			break;
		case 2:
			b1 = new FemaleVoice;
			b1->setSpeech();
			b1->outSpeech();
			delete b1;
			break;
		case 3:
			b1 = new FemaleVoice;
			b1->byeSpeech();
			b1->outSpeech();
			delete b1;
			break;
		}
	} while (choice != 3);
	system("pause");
	return 0;
}