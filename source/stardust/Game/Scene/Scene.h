#pragma once

#include "stardust/Game/System/NerveExecutor.h"

class SceneObjHolder;

class Scene : public NerveExecutor {
public:
	Scene(const char *pName);

	virtual ~Scene();
	virtual void init();
	virtual void start();
	virtual void update();
	virtual void draw() const;
	virtual void calcAnim();

	void initNameObjListExecutor();
	void initSceneObjHolder();

	void* mNameObjListExecutor;      // _10
	int unk_0C; 					 // _18
	SceneObjHolder* mSceneObjHolder; // _20
};
static_assert(sizeof(Scene) == 0x28, "Scene Size");