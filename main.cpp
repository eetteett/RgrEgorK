#include "programInMain.h"

//Main func
int main()
{
   system("chcp 65001");

    passwordCheck();

    int funkType = 0;
    int cryptoType = 0;
    while (true)
    {
        inputStrToTxt();

        funkType = principleOfOperation();
        cryptoType = cryptoTypeSelect(funkType);

        encryptionStart(cryptoType, funkType);

        encryptionCheck(cryptoType, funkType);
    }
    return 0;
}
