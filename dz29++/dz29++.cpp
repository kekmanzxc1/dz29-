// Завдання 1
#include <iostream>
#include <queue>

template <typename T>
class Queue {
private:
    std::queue<T> q;

public:
    void enqueue(const T& item) {
        q.push(item);
        std::cout << "Element " << item << " added to the queue\n";
    }

    void dequeue() {
        if (q.empty()) {
            std::cout << "There are no items to delete\n";
            return;
        }
        std::cout << "Element " << q.front() << " removed from the queue\n";
        q.pop();
    }

    T front() const {
        if (q.empty()) {
            std::cerr << "No items available\n";
            return T();
        }
        return q.front();
    }

    bool isEmpty() const {
        return q.empty();
    }

    size_t size() const {
        return q.size();
    }
};
int main() {
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "The first item in the queue: " << q.front() << std::endl;

    q.dequeue();
    std::cout << "First item after deletion: " << q.front() << std::endl;
}
// dz29++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
