#include "includes.h"
#include <iostream>
#include "xorstr.hpp"
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <string>
#include <random>
#include <iostream>
#include <tlhelp32.h>
#include <tchar.h>
#include <fstream>
#include <filesystem>
#include "log.h"


auto main ( ) -> int
{
   
   
    Inject* inject = new Inject();
    skar_text->skar_log("open Fortnite.");
    Sleep(10000);
    inject->inject_module_from_path_to_process_by_name(xor_w(L"internal.dll"), xor_w(L"FortniteClient-Win64-Shipping.exe"));
}


