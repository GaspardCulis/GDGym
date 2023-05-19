#include "python_ipc.hpp"

void PythonIPC::hello()
{
    FLAlertLayer::create("Geode", "Hello from my custom mod!", "DAMN SON")->show();
}
