#pragma once
#include "Module.h"
#include "Globals.h"


class b2Vec2;
class b2World;

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:

	b2World* myWorld;
	b2Vec2* gravity;

	bool debug;
};