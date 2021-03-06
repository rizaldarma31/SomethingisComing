#ifndef DEMO_H
#define DEMO_H


#include <SOIL/SOIL.h>

#include <GLM/glm.hpp>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtc/type_ptr.hpp>
#include <string>
#include <SDL/SDL.h>

#include "GraphicObject.h"
#include "GameStateManager.h"
#include "PlayState.h"
#include "LoadingState.h"
#include "MainMenuState.h"
#include "AudioHandling.h"

using namespace glm;

class Demo  :
	public Engine::Game
{
public:
	Demo();
	~Demo();

	//GraphicObject * graphicObject;
	AudioHandling audioMusic;

	virtual void Init();
	virtual void Update(float deltaTime);
	virtual void Render();
private:
	GameStateManager gsm;
};
#endif

