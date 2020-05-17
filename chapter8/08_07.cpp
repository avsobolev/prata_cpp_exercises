/* 08_07.cpp
	Занятия по книге Стивена Прата "Язык программирования С++" (2012, 6-е издание).
    Упражнения по программированию. Глава 8, страница 428, упражнение 7

    Измените программу из листинга 8.14 так, чтобы использовать две шаблонных
    функции по имени SumArray (), возвращающие сумму содержимого массива 
    вместо его отображения. Программа должна сообщать общее количество предметов
    и сумму всех задолженностей (debts).

    ЛИСТИНГ 8.14
    // tempover.cpp --- template overloading
    #include <iostream>

    template <typename T>            // template A
    void ShowArray(T arr[], int n);

    template <typename T>            // template B
    void ShowArray(T * arr[], int n);

    struct debts
    {
        char name[50];
        double amount;
    };

    int main()
    {
        using namespace std;
        int things[6] = {13, 31, 103, 301, 310, 130};
        struct debts mr_E[3] =
        {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}
        };

        double * pd[3]; 

    // set pointers to the amount members of the structures in mr_E
        for (int i = 0; i < 3; i++)
            pd[i] = &mr_E[i].amount;
        
        cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
        ShowArray(things, 6);  // uses template A
        cout << "Listing Mr. E's debts:\n";
    // pd is an array of pointers to double
        ShowArray(pd, 3);      // uses template B (more specialized)
        // cin.get();
        return 0;
    }

    template <typename T>
    void ShowArray(T arr[], int n)
    {
        using namespace std;
        cout << "template A\n";
        for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
        cout << endl;
    }

    template <typename T>
    void ShowArray(T * arr[], int n)
    {
        using namespace std;
        cout << "template B\n";
        for (int i = 0; i < n; i++)
            cout << *arr[i] << ' ';
        cout << endl; 
    }
*/

// tempover.cpp --- template overloading
#include <iostream>

template <typename T>            // template A
T SumArray(T arr[], int n);

template <typename T>            // template B
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3]; 

// set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    
// things is an array of int
    cout << "Total Things: " << SumArray(things, 6) << endl;  // uses template A
    
// pd is an array of pointers to double
    cout << "Total Debts: " << SumArray (pd, 3) << endl;      // uses template B (more specialized)
    // cin.get();
    return 0;
}

// template A
template <typename T>
T SumArray(T arr[], int n)
{
    T res = 0;
    using namespace std;
    for (int i = 0; i < n; i++)
        res += arr[i];
    return res;
}

// template B
template <typename T>
T SumArray(T * arr[], int n)
{
    T res = 0;
    using namespace std;
    for (int i = 0; i < n; i++)
        res += *arr[i];
    return res;
}