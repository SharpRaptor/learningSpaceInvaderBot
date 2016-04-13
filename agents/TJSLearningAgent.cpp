#include "TJSLearningAgent.h"
#include "random_tools.h"

TJSLearningAgent::TJSLearningAgent(OSystem * _osystem, RomSettings * _settings) 
	: PlayerAgent(_osystem, _settings)
{
}


TJSLearningAgent::~TJSLearningAgent()
{
}

Action TJSLearningAgent::act()
{
	cout << "Boo";
	return choice(&available_actions);
}


void episode_end()
{

}

Action episode_start()
{

}