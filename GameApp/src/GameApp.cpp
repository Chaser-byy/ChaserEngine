#include<Chaser.h>

class GameApp : public Chaser::Application
{
public:
	GameApp() {

	}

	~GameApp() {

	}

};

Chaser::Application* Chaser::createApplication() {
	return new GameApp();
}
