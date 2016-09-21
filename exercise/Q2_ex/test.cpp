#include <windows.h>
#include <iostream>
using namespace std ;

int main() {
    char ownPth[MAX_PATH];
    HMODULE hModule = GetModuleHandle(NULL);
    GetModuleFileName(hModule,ownPth, (sizeof(ownPth)));
    cout << ownPth << endl ;

    return 0;
}
