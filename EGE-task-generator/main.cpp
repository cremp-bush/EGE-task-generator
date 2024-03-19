#include <iostream>

const int maxPassword = 20;
const int maxSimbols = 20;
const int maxFind = 500;
const int maxIndentificator = 20;
const int maxSize = 100;

using namespace std;

void type1()
{
    int passwordLen = rand()%maxPassword+1;
    int simbolCount = (rand()%maxSimbols+1)*2+10;
    int passwordCount = rand()%maxFind+1;
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
    cout << "1 тип." << "\n" << "Для регистрации на сайте некоторой страны пользователю требуется придумать пароль. Длина пароля— ровно " << passwordLen << " символов. В качестве символов могут быть использованы десятичные цифры и " << (simbolCount-10)/2 << " различные буквы местного алфавита, причём все буквы используются в двух начертаниях: как строчные, так и прописные (регистр буквы имеет значение!). Под хранение каждого такого пароля на компьютере отводится одинаковое и минимально возможное целое количество байтов. При этом используется посимвольное кодирование, и все символы кодируются одинаковым и минимально возможным количеством битов. Определите объём памяти, который используется для хранения " << passwordCount << " паролей. (Ответ дайте в байтах.)" << "\n";

    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += passwordLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer *= passwordCount;    //Вес всех паролей в байтах

    cin >> userAnswer;
    
    if(answer == int(userAnswer)) puts("Верный ответ");
    else cout << "Неверный ответ" << "\n" << "Правильный ответ был: " << answer << "\n";
}

void type2()
{
    int identificatorLen = rand()%maxIndentificator+1;
    int simbolCount = (rand()%maxSimbols+1)+10;
    int identificatorCount = rand()%maxFind+1;
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
    cout << "2 тип." << "\n" << "При регистрации в компьютерной системе каждому объекту присваивается идентификатор, состоящий из " << identificatorLen << " символов и содержащий только десятичные цифры и символы из " << simbolCount-10 << "-символьного специального алфавита. В базе данных для хранения каждого идентификатора отведено одинаковое и минимально возможное целое число байт. При этом используют посимвольное кодирование идентификаторов, все символы кодируют одинаковым и минимально возможным количеством бит. Определите объём памяти (в Кбайт), необходимый для хранения " << identificatorCount  << " идентификаторов. В ответе запишите только целое число— количество Кбайт." << "\n";

    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += identificatorLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer *= identificatorCount; //Вес всех паролей в байтах
    answer = ceil(answer/1024.0); //Вес всех паролей в Кбайтах
    
    cin >> userAnswer;
    
    if(answer == int(userAnswer)) puts("Верный ответ");
    else cout << "Неверный ответ" << "\n" << "Правильный ответ был: " << answer << "\n";
}

void type3()
{
    int passwordLen = rand()%maxPassword+1;
    int identificatorSimbols = rand()%maxIndentificator+1;
    int simbolCount = rand()%maxSimbols+1;
    int usersCount = rand()%maxFind+1;
    int usersSize = (rand()%maxSize+1)*usersCount;
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
   cout << "3 тип." << "\n" << "При регистрации в компьютерной системе каждому пользователю выдаётся пароль, состоящий из " << passwordLen << " символов. В качестве символов используются буквы из " << simbolCount << "-символьного алфавита. В базе данных для хранения сведений о каждом пользователе отведено одинаковое и минимально возможное целое число байт. При этом используется посимвольное кодирование паролей, все символы кодируются одинаковым и минимально возможным количеством бит. Кроме собственно пароля в системе хранятся дополнительные сведения о каждом пользователе, для чего выделено целое число байт; это число одно и то же для всех пользователей. Для хранения сведений о " << usersCount << " пользователях потребовалось " << usersSize << " байт. Сколько байт выделено для хранения дополнительных сведений об одном пользователе? В ответе запишите только целое число— количество байт." << "\n";

    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += passwordLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer = usersSize/usersCount-answer;   //Вес одного доп сведения в байтах
    
    cin >> userAnswer;
    
    if(answer == int(userAnswer)) puts("Верный ответ");
    else cout << "Неверный ответ" << "\n" << "Правильный ответ был: " << answer << "\n";
}

void type4()
{
    int identificatorLen = rand()%maxPassword+1;
    int simbolCount = (rand()%maxSimbols+1)+10;
    int identificatorCount = rand()%maxFind+1;
    int answer = 0;
    int userAnswer;
    double s = simbolCount;
    
    cout << "4 тип." << "\n" << "При регистрации в компьютерной системе каждому объекту присваивается идентификатор, состоящий из " << identificatorLen << " символов и содержащий только десятичные цифры и символы из " << simbolCount-10 << "-символьного специального алфавита. В базе данных для хранения сведений о каждом идентификаторе отведено одинаковое и минимально возможное целое число байт. При этом используется посимвольное кодирование идентификаторов, все символы кодируются одинаковым и минимально возможным количеством бит. Определите объём памяти (в Кбайт), необходимый для хранения сведений о " << identificatorCount << " объектах. В ответе запишите только целое число— количество Кбайт." << "\n";
    
    //Вес одного пароля в битах
    do
    {
        s /= 2;
        answer += identificatorLen;
    }
    while(s > 1);
    answer = ceil(answer/8.0); //Вес одного пароля в байтах
    answer *= identificatorCount; //Вес всех паролей в байтах
    answer = ceil(answer/1024.0); //Вес всех паролей в Кбайтах
    
    cin >> userAnswer;
    
    if(answer == int(userAnswer)) puts("Верный ответ");
    else cout << "Неверный ответ" << "\n" << "Правильный ответ был: " << answer << "\n";
}


void main()
{
    char check;
    srand(time(NULL));
    
    setlocale(LC_ALL, "Ru");
    puts("Из 43 вариантов с РЕШУ ЕГЭ выделены 4 основных типов задач");

    do
    {
        puts("");
        switch(int type = rand()%4)
        {
            case 0: type1(); break;
            case 1: type2(); break;
            case 2: type3(); break;
            case 3: type4(); break;
        }
    }
    while(true);
}