#include <iostream>

using namespace std;

int main()
{
    int startHeight = 100;
    int dailyGrowth = 50;
    int nightFade = 20;
    char answerUser;

    cout << "Данная програма считает рост бамбука к середине 3 дня.\n";
    cout << "--------------\n";
    cout << "Стартовая высота бамбука: " << startHeight << endl;
    cout << "Рост за день: " << dailyGrowth << endl;
    cout << "Сколько вредители съедают за ночь: " << nightFade << endl;
    cout << "--------------\n";
    cout << "Желаете изменить параметры? (Y/N) ";
    cin >> answerUser;
    

    if (answerUser == 89) {
        cout << "--------------\n";
        cout << "Введите стратовую высоту бамбука: ";
        cin >> startHeight;
        cout << "Введите рост за день: ";
        cin >> dailyGrowth;
        cout << "Введите сколько вредители съедают за ночь: ";
        cin >> nightFade;
    }

    startHeight += startHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

    if (startHeight <= 0) { //проверка, что высота не отрицательное значение
        startHeight = 0;
        cout << "--------------\n";
        cout << "К середине третьего дня вредители всё съедят, высота бамбука будет: " << startHeight << endl;
    }

    else {
        cout << "--------------\n";
        cout << "В середине третьего дня высота бамбука будет: " << startHeight << endl;
    }
         
    return 0;
}
