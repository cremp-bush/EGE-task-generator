#include <iostream>

const int minPasswordLen = 10, maxPasswordLen = 20; //Ограничения по длине пароля
const int minSimbols = 5, maxSimbols = 20;  //Ограничение по количеству символов
const int minFind = 50, maxFind = 500;  //Ограничение по общему кол-ву паролей
const int minInfoSize = 10, maxInfoSize = 100;  //Ограничение по размеру доп. информации (в битах)

using namespace std;

void type1(int passwordLen, int simbolCount, int passwordCount)
{
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
    cout << "1 тип." << endl
    << "Для регистрации на сайте некоторой страны пользователю требуется придумать пароль. Длина пароля— ровно " << passwordLen
    << " символов. В качестве символов могут быть использованы десятичные цифры и " << (simbolCount-10)/2
    << " различные буквы местного алфавита, причём все буквы используются в двух начертаниях: как строчные, так и прописные (регистр буквы имеет значение!). Под хранение каждого такого пароля на компьютере отводится одинаковое и минимально возможное целое количество байтов. При этом используется посимвольное кодирование, и все символы кодируются одинаковым и минимально возможным количеством битов. Определите объём памяти, который используется для хранения " << passwordCount
    << " паролей. (Ответ дайте в байтах.)" << endl;

    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += passwordLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer *= passwordCount;    //Вес всех паролей в байтах

    while(!(cin >> userAnswer))
    {
        puts("Неверный ввод!");
        cin.clear();
        cin.ignore();
    }
    
    if(answer == userAnswer) puts("Верный ответ.");
    else cout << "Неверный ответ." << endl
    << "Правильный ответ был: " << answer << endl;
}

void type2(int passwordLen, int simbolCount, int passwordCount)
{
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
    cout << "2 тип." << endl
    << "При регистрации в компьютерной системе каждому объекту присваивается идентификатор, состоящий из " << passwordLen
    << " символов и содержащий только десятичные цифры и символы из " << simbolCount-10
    << "-символьного специального алфавита. В базе данных для хранения каждого идентификатора отведено одинаковое и минимально возможное целое число байт. При этом используют посимвольное кодирование идентификаторов, все символы кодируют одинаковым и минимально возможным количеством бит. Определите объём памяти (в Кбайт), необходимый для хранения " << passwordCount
    << " идентификаторов. В ответе запишите только целое число— количество Кбайт." << endl;

    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += passwordLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer *= passwordCount; //Вес всех паролей в байтах
    answer = ceil(answer/1024.0); //Вес всех паролей в Кбайтах

    while(!(cin >> userAnswer))
    {
        puts("Неверный ввод!");
        cin.clear();
        cin.ignore();
    }
    
    if(answer == userAnswer) puts("Верный ответ.");
    else cout << "Неверный ответ." << endl
    << "Правильный ответ был: " << answer << endl;
}

void type3(int passwordLen, int simbolCount, int passwordCount, int infoSize)
{
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
   cout << "3 тип." << endl
    << "При регистрации в компьютерной системе каждому пользователю выдаётся пароль, состоящий из " << passwordLen
    << " символов. В качестве символов используются буквы из " << simbolCount
    << "-символьного алфавита. В базе данных для хранения сведений о каждом пользователе отведено одинаковое и минимально возможное целое число байт. При этом используется посимвольное кодирование паролей, все символы кодируются одинаковым и минимально возможным количеством бит. Кроме собственно пароля в системе хранятся дополнительные сведения о каждом пользователе, для чего выделено целое число байт; это число одно и то же для всех пользователей. Для хранения сведений о " << passwordCount
    << " пользователях потребовалось " << infoSize
    << " байт. Сколько байт выделено для хранения дополнительных сведений об одном пользователе? В ответе запишите только целое число— количество байт." << endl;

    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += passwordLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer = infoSize/passwordCount-answer;   //Вес одного доп сведения в байтах
    
    while(!(cin >> userAnswer))
    {
        puts("Неверный ввод!");
        cin.clear();
        cin.ignore();
    }
    
    if(answer == userAnswer) puts("Верный ответ.");
    else cout << "Неверный ответ." << endl
    << "Правильный ответ был: " << answer << endl;
}

void type4(int passwordLen, int simbolCount, int passwordCount)
{
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
    cout << "4 тип." << endl
    << "При регистрации в компьютерной системе каждому объекту присваивается идентификатор, состоящий из " << passwordLen
    << " символов и содержащий только десятичные цифры и символы из " << simbolCount-10
    << "-символьного специального алфавита. В базе данных для хранения сведений о каждом идентификаторе отведено одинаковое и минимально возможное целое число байт. При этом используется посимвольное кодирование идентификаторов, все символы кодируются одинаковым и минимально возможным количеством бит. Определите объём памяти (в Кбайт), необходимый для хранения сведений о " << passwordCount
    << " объектах. В ответе запишите только целое число— количество Кбайт." << endl;
    
    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += passwordLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer *= passwordCount; //Вес всех паролей в байтах
    answer = ceil(answer/1024.0); //Вес всех паролей в Кбайтах
    
    while(!(cin >> userAnswer))
    {
        puts("Неверный ввод!");
        cin.clear();
        cin.ignore();
    }
    
    if(answer == userAnswer) puts("Верный ответ.");
    else cout << "Неверный ответ." << endl
    << "Правильный ответ был: " << answer << endl;
}

void generator()
{
    int passwordLen = minPasswordLen + rand() % (maxPasswordLen - minPasswordLen);
    int simbolCount = minSimbols + rand() % (maxSimbols - minSimbols);
    int passwordCount = minFind + rand() % (maxFind - minFind);
    int infoSize = (minInfoSize + rand() % (maxInfoSize - minInfoSize)) * passwordCount;
    
    switch(int type = rand()%4)
    {
        case 0: type1(passwordLen, simbolCount*2+10, passwordCount); break;
        case 1: type2(passwordLen, simbolCount+10, passwordCount); break;
        case 2: type3(passwordLen, simbolCount, passwordCount, infoSize); break;
        case 3: type4(passwordLen, simbolCount+10, passwordCount); break;
    }
}

int main()
{
    char input;
    srand(time(NULL));
    
    setlocale(LC_ALL, "Ru");
    puts("Из 43 вариантов с РЕШУ ЕГЭ выделены 4 основных типов задач");

    do
    {
        generator();
        cin.ignore();
        puts("");
        puts("Нажмите Enter для генерации новой задачи.");
        getchar();
        system("CLS");
    }
    while(true);
}