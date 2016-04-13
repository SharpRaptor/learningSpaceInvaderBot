#pragma once
#include "PlayerAgent.hpp"

class TJSLearningAgent : public PlayerAgent
{
public:
	TJSLearningAgent(OSystem * _osystem, RomSettings * _settings);
	~TJSLearningAgent();

protected:
	Action act();

	void episode_end(void);

	Action episode_start(void);
};

