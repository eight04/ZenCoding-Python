// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>



#include <tchar.h>
#include <Shlwapi.h>
#include "Notepad_plus_msgs.h"
#include "PluginInterface.h"
#include "NppPythonScript.h"
#include "keys.h"
#include <string>
#include <fstream>
#include <list>

typedef std::basic_string<TCHAR> tstring;