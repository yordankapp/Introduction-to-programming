#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
    Да се дефинира рекурсивна функция, която изчислява сумата:
    a + (a + 1) + (a + 2) + ... + b.
*/

int sum(int a, int b, int s, int i)
{
    // дъно на рекурсията
    if(i > b) return s;

    return sum(a, b, s + i, i + 1);
}

int sum(int a, int b)
{
    if(a > b) return 0;

    return a + sum(a + 1, b);
}

void testSum()
{
    if((15 == sum(1, 5, 0, 1)) && (15 == sum(1, 5)))
        cout << "OK!\n";
    else
        cout << "Something is WRONG!\n";
}

/*
    Задача 1

    Да се дефинира рекурсивна функция, която намира
    броя на цифрите в записа на дадено цяло неотрицателно число.
*/

unsigned countDigits(unsigned number)
{
    if(number < 10)
        return 1;

    return 1 + countDigits(number / 10);
}

void testCountDigits()
{
    unsigned number;

    cout << "Number: ";
    cin >> number;

    cout << "The count of the digits is: " << countDigits(number) << endl;
}

/*
    Задача 2

    Да се дефинира рекурсивна функция, която намира сумата от
    цифрите в десетичния запис на дадено цяло неотрицателно число.

*/

unsigned sumOfDigits(unsigned number)
{
    if(number < 10) return number;

    return number % 10 + sumOfDigits(number / 10);
}

void testSumOfDigits()
{
    unsigned number;

    cout << "Number: ";
    cin >> number;

    cout << "The sum of the digits is: " << sumOfDigits(number) << endl;
}

/*
    Задача 3

    Да се дефинира рекурсивна функция, която проверява дали в
    десетичния запис на дадено цяло неотрицателно число се съдържа цифрата k.
*/

bool isInNumber(unsigned number, unsigned k)
{
    if(number < 10)
        return number == k;

    return (number % 10 == k) || isInNumber(number / 10, k);
}

void testIsInNumber()
{
    unsigned number, digit;

    cout << "Number: "; cin >> number;
    cout << "Digit: "; cin >> digit;

    cout << "The digit " << digit << " is ";
    if( !isInNumber(number, digit) )
        cout << "NOT ";

    cout << "in the number " << number << "!\n";
}

/*
    Задача 4

    Да се дефинира рекурсивна функция, която заменя всяко срещане на
    цифрата k в записа на дадено цяло неотрицателно число с цифрата m.

*/

unsigned replace(unsigned number, unsigned k, unsigned m)
{
    if(number == 0) return 0;

    unsigned lastDigit = number % 10;

    return replace(number / 10, k, m)*10 + ((lastDigit == k)? m : lastDigit);
}

void testReplace()
{
    unsigned number, digit, newDigit;

    // без валидации
    cout << "Number: "; cin >> number;
    cout << "Digit: "; cin >> digit;
    cout << "New digit: "; cin >> newDigit;

    cout << "The new number is: " << replace(number, digit, newDigit) << endl;
}

/*
    Задача 5

    Да се дефинира рекурсивна функция, която намира максималния елемент
    в редицата от цели числа а0, а1, ..., аn-1 ( n e [1;100]).
*/

int maxElem(int* array, int size)
{
    if(size == 1) return array[0];

    int maxRest = maxElem(array + 1, size - 1);

    if(array[0] < maxRest)
        return maxRest;

    return array[0];
}

void testMaxElem()
{
    int same[] = {1, 1};
    if( 1 == maxElem(same, 2))
        cout << "OK!\n";
    else
        cout << "Something is WRONG!\n";

    int oneElem[] = {5};
    if( 5 == maxElem(oneElem, 1))
        cout << "OK!\n";
    else
        cout << "Something is WRONG!\n";

    int array[] = {3, 1, 2, 5, 6};
    if( 6 == maxElem(array, 5))
        cout << "OK!\n";
    else
        cout << "Something is WRONG!\n";
}

/*
    Задача 6

    Да се дефинира рекурсивна функция, която проверява дали елементът x
    се съдържа в редицата от цели числа а0, а1, ..., аn-1 (n e [1;100]).
*/

bool isIn(int* array, int size, int x)
{
    // ако масивът е от един елемент, х се съдържа в масива, ако
    // х съвпада с този единствен елемент
    if(size == 1)
        return x == array[0];

    // ако елементите са повече, х се съдържа в масива, ако х съвпада
    // с първия елемент или се съдържа в остатъка от масива, без първия
    return x == array[0] || isIn(array + 1, size - 1, x);
}

bool isInArrayCompWithLast(int* array, int size, int x)
{
    // ако масивът е от един елемент, х се съдържа в масива, ако
    // х съвпада с този единствен елемент
    if(size == 1)
        return x == array[0];

    // ако елементите са повече, х се съдържа в масива, ако х съвпада
    // с последния елемент или се съдържа в масива, без последния елемент
    return x == array[size - 1] || isInArrayCompWithLast(array, size - 1, x);
}

/*
    Задача 7

    Да се дефинира рекурсивна функция, която проверява дали редицата
    от цели числа а0, а1, ..., аn-1 ( n  [1;100]) е монотонно растяща.
*/

bool isMonotonous(int* array, int size)
{
    // ако масивът е от един елемент, то условието е изпълнено
    if(size == 1) return true;

    // редицата е монотонно растяща, ако първият елемент е <= от втория и
    // редицата от елементи, без първия е монотонно растяща
    return array[0] <= array[1] && isMonotonous(array + 1, size - 1);
}

/*
    Задача 8

    Да се дефинира рекурсивна функция, която проверява дали редицата от цели числа
    а0, а1, ..., аn-1 ( n е [1;100]) се състои от различни елементи.
*/

bool hasDifferentElems(int* array, int size)
{
    // ако масивът е от един елемент, то условието е изпълнено
    if(size == 1) return true;

    // редицата се състои от различни елементи, ако първият елемент не се съдържа
    // в опашката на редицата и всички елементи на редицата без първия елемент са разл.
    return !isIn(array + 1, size - 1, array[0]) && hasDifferentElems(array + 1, size - 1);
}

/*
    Задача 9

    Да се дефинира рекурсивна функция, която включва цяло число
    в сортирана във възходящ ред редица от цели числа, като запазва наредбата на елементите.
*/

// параметърът size се предава по псевдоним, тъй като
// ще бъде променен при изпълнение на функцията
void insertInSortedArray(int* array, int& size, int newElem)
{
    // ако няма елементи в масива...
    if(size == 0)
    {
        array[0] = newElem;
        ++size;
    }
    else
    {
        // започваме сравнението отзад напред
        if(newElem >= array[size - 1])
        {
            // ако елементът, който трябва да се добави е >= от последния елемент,
            // той трябва да се появи на последна позиция
            // може да се комбинира с първото условие
            ++size;
            array[size - 1] = newElem;
        }
        else
        {
            // елементът, който трябва да се добави е по-малък от последния елемент,
            // трябва да се намери точната позиция
            // изместваме последния елемент надясно с една позиция
            int withoutLast = size - 1;

            ++size;
            array[size - 1] = array[size - 2];

            // опитваме се да го добавим в редицата без последния елемент
            insertInSortedArray(array, withoutLast, newElem);
        }
    }
}

void readArray(int* array, int size)
{
    if(size >= 1)
    {
        int index = size - 1;

        // първо прочитаме всички, без последния
        readArray(array, index);

        // след това последния елемент
        cout << "array[" << index << "] = ";
        cin >> array[index];
    }
}

void printArray(int* array, int size)
{
    if(size >= 1)
    {
        int index = size - 1;

        // първо прочитаме всички останали
        printArray(array, index);

        // след това последния елемент
        cout << array[index] << ' ';
    }
}

void testInsertInSortedArray()
{
    const int SIZE = 100;

    int array[SIZE], size;

    // въвеждане на размера на масива
    do
    {
        cout << "Count elements: ";
        cin >> size;
    }
    while(size <= 0);

    readArray(array, size);

    int newElem;
    cout << "New element: ";
    cin >> newElem;

    insertInSortedArray(array, size, newElem);

    cout << "The result is: ";
    printArray(array, size);
}

int main()
{
//    testSum();
//    testCountDigits();
    testSumOfDigits();
//    testIsInNumber();
//    testReplace();
//    testMaxElem();
//    testInsertInSortedArray();
}
