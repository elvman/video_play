//
//  native_play
//

#include "Application.h"

void ouzelMain(std::vector<std::string> const& args)
{
    ouzel::Settings settings;
    settings.size = ouzel::Size2(800.0f, 600.0f);
    settings.resizable = true;

    ouzel::Engine::getInstance()->init(settings);

    std::shared_ptr<Application> application(new Application());
    ouzel::Engine::getInstance()->setApp(application);
}
