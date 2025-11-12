#pragma once

#ifdef CHASER_PLATFORM_WINDOWS

extern Chaser::Application* Chaser::createApplication();

int main(int argc, char** argv) {
	auto app = Chaser::createApplication();
	app->run();
	delete app;
	return 0;
}

#endif
