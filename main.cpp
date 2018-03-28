#include <iostream>
#include "integer_vector.hpp"


void Stack() {
    IntegerVector vector;
    IntegerVectorInit(vector);
    char ch;
    do
    {
        std::cout << "\n\n\n\tMAIN MENU";
        std::cout << "\n\n\t#1. FILL VECTOR";
        std::cout << "\n\n\t#2. ADD ONE ELEMENT IN VECTOR BACK";
        std::cout << "\n\n\t#3. PRINT VECTOR";
        std::cout << "\n\n\t#4. DELETE LAST ELEMENT";
        std::cout << "\n\n\t#8. EXIT";
        std::cout << "\n\n\t#";
        std::cin >> ch;
        switch (ch)
        {
            case '1':
                IntegerVectorReadTillZero(vector, std::cin);
                break;
            case '2':
                int k;
                std::cout << "Enter value : ";
                std::cin >> k;
                IntegerVectorPushBack(vector, k);
                break;
            case '3':
                IntegerVectorPrint(vector, std::cout);
                break;
            case '4':
                if (!IntegerVectorIsEmpty(vector))
                    IntegerVectorPopBack(vector);
                else
                    std::cout << "ERROR 404! ELEMENT NOT FOUND";
            case '8':
                break;
            default:std::cout << "\a";
        }
        std::cin.ignore();
        std::cin.get();
    } while (ch != '8');
    IntegerVectorDestroy(vector);
    return;
}

void Quere() {
    IntegerVector vector;
    IntegerVectorInit(vector);
    char ch;
    do
    {
        std::cout << "\n\n\n\tMAIN MENU";
        std::cout << "\n\n\t#1. FILL VECTOR";
        std::cout << "\n\n\t#2. ADD ONE ELEMENT IN VECTOR BACK";
        std::cout << "\n\n\t#3. PRINT VECTOR";
        std::cout << "\n\n\t#4. DELETE FIRST ELEMENT";
        std::cout << "\n\n\t#8. EXIT";
        std::cout << "\n\n\t#";
        std::cin >> ch;
        switch (ch)
        {
            case '1':
                IntegerVectorReadTillZero(vector, std::cin);
                break;
            case '2':
                int k;
                std::cout << "Enter value : ";
                std::cin >> k;
                IntegerVectorPushBack(vector, k);
                break;
            case '3':
                IntegerVectorPrint(vector, std::cout);
                break;
            case '4':
                if (!IntegerVectorIsEmpty(vector))
                    IntegerVectorPopFront(vector);
                else
                    std::cout << "ERROR 404! ELEMENT NOT FOUND";
                break;
            case '8':
                break;
            default:std::cout << "\a";
        }
        std::cin.ignore();
        std::cin.get();
    } while (ch != '8');
    IntegerVectorDestroy(vector);
}

void List() {
    IntegerVector vector;
    IntegerVectorInit(vector);
    char ch;
    do
    {
        std::cout << "\n\n\n\tMAIN MENU";
        std::cout << "\n\n\t#1. FILL VECTOR";
        std::cout << "\n\n\t#2. ADD ONE ELEMENT IN VECTOR BACK";
        std::cout << "\n\n\t#3. PRINT VECTOR";
        std::cout << "\n\n\t#4. DELETE FIRST ELEMENT";
        std::cout << "\n\n\t#5. DELETE LAST ELEMENT";
        std::cout << "\n\n\t#6. INSERT VALUE AT POS";
        std::cout << "\n\n\t#7. DELETE VALUE AT POS";
        std::cout << "\n\n\t#8. EXIT";
        std::cout << "\n\n\t#";
        std::cin >> ch;
        switch (ch)
        {
            case '1':
                IntegerVectorReadTillZero(vector, std::cin);
                break;
            case '2':
                int k;
                std::cout << "Enter value : ";
                std::cin >> k;
                IntegerVectorPushBack(vector, k);
                break;
            case '3':
                IntegerVectorPrint(vector, std::cout);
                break;
            case '4':
                if (!IntegerVectorIsEmpty(vector))
                    IntegerVectorPopFront(vector);
                else
                    std::cout << "ERROR 404! ELEMENT NOT FOUND";
                break;
            case '5':
                if (!IntegerVectorIsEmpty(vector))
                    IntegerVectorPopBack(vector);
                else
                    std::cout << "ERROR 404! ELEMENT NOT FOUND";
                break;
            case '6':
            std::cout << "Enter position : ";
                int l1;
            std::cin >> l1;
            std::cout << "Enter value : ";
                int l2;
            std::cin >> l2;
                IntegerVectorInsertAt(vector, l1, l2);
                break;
            case '7':
            std::cout << "Enter position to delete : ";
                int l3;
            std::cin >> l3;
                IntegerVectorDeleteAt(vector, l3);
            case '8':
                break;
            default:std::cout << "\a";
        }
        std::cin.ignore();
        std::cin.get();
    } while (ch != '8');
    IntegerVectorDestroy(vector);
}

int main() {
    int ch1;
    do
    {
        std::cout << "\n\n\n\tMAIN MENU";
        std::cout << "\n\n\t#1. STACK";
        std::cout << "\n\n\t#2. QUERE";
        std::cout << "\n\n\t#3. LIST";
        std::cout << "\n\n\t#";
        std::cin >> ch1;
        switch (ch1)
        {
            case 1:
                Stack();
                break;
            case 2:
                Quere();
                break;
            case 3:
                List();
                break;
            case 8:
                break;
            default:std::cout << "\a";
        }
        std::cin.ignore();
        std::cin.get();
    } while (ch1 != '8');
}