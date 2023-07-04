#include <Windows.h>

// The main window procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
        case WM_DESTROY:
            // If the window is being destroyed, terminate the application
            PostQuitMessage(0);
            break;
        case WM_PAINT:
        {
            // Paint some text on the window
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            TextOut(hdc, 10, 10, "Hello, WinAPI!", 14);
            EndPaint(hwnd, &ps);
            break;
        }
        default:
            // Handle any other messages
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }

    return 0;
}

// The application entry point
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // Register the window class
    WNDCLASS wc = {};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.lpszClassName = "MyWindowClass";
    RegisterClass(&wc);

    // Create the window
    HWND hwnd = CreateWindow("MyWindowClass", "My Window", WS_OVERLAPPEDWINDOW, 100, 100, 400, 300, nullptr, nullptr, hInstance, nullptr);

    // Show the window
    ShowWindow(hwnd, nCmdShow);

    // Enter the message loop
    MSG msg = {};
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return static_cast<int>(msg.wParam);
}
