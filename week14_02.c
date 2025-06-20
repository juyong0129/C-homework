#include <stdio.h>
#include <windows.h>

int main() {
	char arr[] = "안녕하세요.";

	for (int i = 0; i < sizeof(arr); i += 2) {
		printf("%c%c", arr[i], arr[i + 1]);
		Sleep(1000);
	}
}