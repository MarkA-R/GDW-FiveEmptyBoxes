#pragma once
#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class StudyLevel :
    public Scene
{
public:
	StudyLevel(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	int ChangeScene() override;

	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	PhysicsPlaygroundListener listener;

	int ghost1 = 0;
	int ghost2 = 0; //ghost 1 physics body
	int flashlight = 0;
	int vacuum = 0;
	bool ghost_1;
	
};

