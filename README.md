# DiceMagicApp
## Czym jest ta aplikacja?
Aplikacja ta pozwala na symulowanie rzutów kostką lub kostkami w zależności od preferencji użytkownika.

## Po co jest ta aplikacja ?
Aplikacja ta może się przydać kiedy nie posiadamy w danym momencie kostki do gry, a chcemy z niej skorzystać
aby zgarać w kultowe gry takie jak np. Monopoly.



## Jak uruchomić aplikacje?

  1. Skopiuj zawartość tego katalogu
  2. Przejdź do tego katalogu
  3. W terminalu wpisz ./DiceMagicApp

## Jak korzystać ?
Po uruchomieniu aplikacji:
  1. Naciskamy przycisk "START". 
  2. Wpisujemy ile chcemy losować kostek jednocześnie, liczbę możemy wpisać lub skorzystać ze strzałek odpowiednio w dól i w górę do zmniejsza oraz do zwiększania liczby kostek
  3. Wpisujemy liczbę losujących
  4. Wpisujemy ich imiona (możemy to pominąć)
  5. Naciskamy przycisk "DRAW", aby wylosować nasze kostki
  6. Naciskami przycisk odpowiednio "NEXT PERSON" lub "RESULT" aby przejść do następnej osoby losującej albo przejść do wyników
  7. Sekcja "RESULT" pokazuje zsumowane wszystkie oczka dla konkretnego gracza, przycisk "REDRAW" pozwala na losowanie ponownie przy takich samych ustawieniach za to "RESTART" zestartuję nam wszystkie ustawienia.

## Dodatkowe funkcje:
Aplikacja umożliwia wpisanie imion graczy aby umożliwić płynna rozgrywkę, bez niepotrzebnego pamiętania
kto ile oczek na kostce wyrzuci.

## Działanie:
Aplikacja losując odpowiednie kostki korzysta z std::random_device które jest równomiernym generatorem liczb losowych całkowitych,
który wytwarza niedeterministyczne liczby losowe, oraz std::uniform_int_distribution które tworzy losowe wartości całkowite równomiernie rozłożone na zamkniętym 
przedziale [1,6]. 

Przez to nasza aplikacja gwarantuje wysoką losowość co do kostek.

## Dodatkowe informacje:
Do działania tej aplikacji zostały wykorzystane biblioteki QT.

## Screenshots:

## Menu główne
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.06.52.png)

## Wybieranie liczby kostek
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.07.04.png)

## Wybieranie liczby graczy
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.18.59.png)

## Wpisywanie nazwy graczy
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.07.19.png)

## Przed losowaniem
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.07.59.png)

## Po losowaniu
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.08.04.png)

## Score
![](https://github.com/arturgesiarz/Magic_Dice/blob/origin/sreenshots/Zrzut%20ekranu%202024-06-6%20o%2015.08.14.png)

## Autor:
Artur Gęsiarz
- Projekt został stworzony w ramach kursu AGH C++
