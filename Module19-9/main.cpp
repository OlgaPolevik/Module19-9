//
//  main.cpp
//  Module19-9
//
//  Created by Ольга Полевик on 07.10.2021.
//

#include<unistd.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <sys/utsname.h> // Для uname()


using namespace std;

/*struct utsname
{
  char sysname[];  // имя операционной системы
  char nodename[]; // имя узла сети
  char release[];  // номер выпуска операционной системы
  char version[];  // номер версии этого выпуска
  char machine[];  // тип аппаратной архитектуры
};*/

int main() {

    
    // Информация о текущего процесса
    cout << "Process PID = " << getpid() << endl;

    system("ls");
    
    system("date > file.txt");
    
    system("cat file.txt");
    
    utsname utsname; // объект для структуры типа utsname

    uname(&utsname); // передаем объект по ссылке

            // распечатаем на экране информацию об операционной системе
            // эту информацию нам вернуло ядро Linux в объекте utsname
    cout << "OS name: " << utsname.sysname << endl;
    cout << "Host name: " << utsname.nodename << endl;
    cout << "OS release: " << utsname.release << endl;
    cout << "OS version: " << utsname.version << endl;
    cout << "Architecture: " << utsname.machine << endl;
    
    
    /*OSVERSIONINFO osvi;
    ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&osvi);

*/
    
    return 0;
}
