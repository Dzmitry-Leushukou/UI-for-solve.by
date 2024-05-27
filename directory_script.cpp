#include "directory_script.h"


void create_directory(std::string startDir)
{

    for (int i = 0; i < startDir.size(); i++)
    {
        if (startDir[i] == '\\' || startDir[i] == '/')
        {
        if (!fs::exists(startDir.substr(0, i + 1)))
            fs::create_directory(startDir.substr(0, i + 1));
        }
    }

    if (!fs::exists(startDir))
        fs::create_directory(startDir);

    string dir;

    dir = startDir + '\\' + "tests";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statement-sections";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statement-sections/russian";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statement-sections/english";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statements";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statements/.pdf";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statements/.pdf/russian";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statements/.pdf/english";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statements/russian";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "statements/english";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "solutions";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "files";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "files/tests";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "files/tests/validator-tests";
    if (!fs::exists(dir))
        fs::create_directory(dir);

    dir = startDir + '\\' + "scripts";
    if (!fs::exists(dir))
        fs::create_directory(dir);

}
