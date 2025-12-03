#include <iostream>
#include <string>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#include <shellapi.h>
static bool open_url(const char* url) {
    auto r = (ULONG_PTR)ShellExecuteA(nullptr, "open", url, nullptr, nullptr, SW_SHOWNORMAL);
    return r > 32;
}
#else
static bool open_url(const char* url) {
#if defined(__APPLE__)
    std::string cmd = "open ";
#else
    std::string cmd = "xdg-open ";
#endif
    cmd += "'";
    cmd += url;
    cmd += "' >/dev/null 2>&1 &";
    return std::system(cmd.c_str()) == 0;
}
#endif

int main() {
    std::cout << "Hello! And welcome to FastWeb\n" << std::endl;
    std::cout << "1. Youtube\n";
    std::cout << "2. Google\n";
    std::cout << "3. Facebook\n";
    std::cout << "4. Twitter\n";
    std::cout << "5. Instagram\n";
    std::cout << "6. Reddit\n";
    std::cout << "7. Wikipedia\n";
    std::cout << "8. Github\n";
    std::cout << "9. StackOverflow\n";
    std::cout << "10. Exit\n";

    while (true) {
        std::cout << "Please enter a number (1-10): ";
        int input;
        std::cin >> input;

        if (input == 1) {
            open_url("https://youtube.com");
        } else if (input == 2) {
            open_url("https://google.com");
        } else if (input == 3) {
            open_url("https://facebook.com");
        } else if (input == 4) {
            open_url("https://twitter.com");
        } else if (input == 5) {
            open_url("https://instagram.com");
        } else if (input == 6) {
            open_url("https://reddit.com");
        } else if (input == 7) {
            open_url("https://wikipedia.org");
        } else if (input == 8) {
            open_url("https://github.com");
        } else if (input == 9) {
            open_url("https://stackoverflow.com");
        } else if (input == 10) {
            break;
        } else {
            std::cout << "Invalid input! Please enter a number between 1 and 10.\n";
        }
    }

    return 0;
}

