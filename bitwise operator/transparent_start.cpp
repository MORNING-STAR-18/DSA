#include <windows.h>
#include <iostream>

enum ACCENT_STATE {
    ACCENT_DISABLED = 0,
    ACCENT_ENABLE_TRANSPARENTGRADIENT = 2,
    ACCENT_ENABLE_BLURBEHIND = 3,
    ACCENT_ENABLE_ACRYLICBLURBEHIND = 4
};

struct ACCENT_POLICY {
    ACCENT_STATE AccentState;
    DWORD AccentFlags;
    DWORD GradientColor;
    DWORD AnimationId;
};

struct WINDOWCOMPOSITIONATTRIBDATA {
    DWORD Attrib;
    PVOID pvData;
    SIZE_T cbData;
};

typedef BOOL(WINAPI* pSetWindowCompositionAttribute)(HWND, WINDOWCOMPOSITIONATTRIBDATA*);

void MakeWindowTransparent(HWND hwnd) {
    HMODULE hUser = GetModuleHandle(L"user32.dll");
    if (!hUser) return;

    pSetWindowCompositionAttribute SetWindowCompositionAttribute =
        (pSetWindowCompositionAttribute)GetProcAddress(hUser, "SetWindowCompositionAttribute");

    if (!SetWindowCompositionAttribute) return;

    ACCENT_POLICY accent = {ACCENT_ENABLE_ACRYLICBLURBEHIND, 0, 0x00FFFFFF, 0};
    WINDOWCOMPOSITIONATTRIBDATA data = {19, &accent, sizeof(accent)};

    SetWindowCompositionAttribute(hwnd, &data);
}

BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
    wchar_t className[256];
    GetClassName(hwnd, className, 256);

    if (wcscmp(className, L"Windows.UI.Core.CoreWindow") == 0 ||
        wcscmp(className, L"ApplicationFrameWindow") == 0 ||
        wcscmp(className, L"StartMenuExperienceHost") == 0) {
        MakeWindowTransparent(hwnd);
    }
    return TRUE;
}

int main() {
    std::cout << "Start Menu Transparent Tool - Running...\n";
    std::cout << "Windows key dabao Start Menu kholne ke liye!\n\n";

    while (true) {
        EnumWindows(EnumWindowsProc, 0);
        Sleep(500);
    }

    return 0;
}