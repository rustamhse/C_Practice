# Практика языка Си

**Репетитор:** Вовк Андрей Александрович

**Цель:** Подготовка к экзамену по дисциплине «Углублённый C / C++» в июне 2025 года в МИЭМ НИУ ВШЭ.

---

## Структура репозитория

- Каждая папка с датой (напр., `22.03 (homework)`) содержит задачи, разбитые по номерам: `1.c`, `2.c`, ..., `n.c`
- В каждом `.c`-файле: условие задачи + решение
- Коммиты отражают прогресс по заданиям за конкретные даты

---

## Формат домашек

- Решения на C
- Упор на:
  - массивы
  - указатели
  - функции
  - файловый ввод/вывод
  - динамическая память

---

## Темы билетов к экзамену

1. **Классы и объекты**
    - инкапсуляция: private/public
    - конструктор (overloading), деструктор
    - инициализация полей (в том числе C++11)
    - C++11: =default, constructor chaining

2. **Работа с кучей на C++**
    - new/delete
    - создание объектов на куче
    - конструктор копий
    - оператор присваивания
    - C++11: =delete

3. **Наследование и полиморфизм**
    - protected
    - virtual
    - таблица виртуальных функций
    - статическое/динамическое связывание

4. **Умные указатели**
    - scoped_ptr
    - unique_ptr
    - shared_ptr

5. **Перегрузка операторов**
    - бинарные и унарные
    - в классе/вне классе
    - приведение типов

6. **Разное**
    - ключевое слово const (С/C++)
    - перегрузка функций
    - параметры функций по умолчанию
    - static у полей и методов

7. **Наследование: детали**
    - сортировка и структуры данных C vs ООП
    - private/protected наследование
    - C++11: final, override

8. **Множественное наследование**
    - разрешение конфликтов имен
    - виртуальное наследование
    - наследование интерфейсов

9. **Шаблоны**
    - решение в стиле C (#define)
    - шаблонные классы
    - шаблонные функции
    - специализация шаблонов (частичные и полные; в т.ч. для функций)
    - шаблонный параметр, не являющийся типом

10. **Исключения**
    - обработка ошибок в стиле C
    - try/catch/throw
    - исключения в конструкторах и деструкторах
    - идиома RAII: использование и примеры классов
    - гарантии исключений

11. **Ввод-вывод в C++**
    - иерархия классов
    - методы/флаги/манипуляторы
    - обработка ошибок
    - ввод-вывод пользовательских типов

12. **Приведение типов**
    - C-style cast, static_cast, const_cast, reinterpret_cast — поведение и преимущества
    - RTTI и dynamic_cast

13. **Последовательные контейнеры**
    - string, vector, list, string_view
    - array
    - внутреннее устройство и основные операции
    - итераторы и их инвалидация

14. **Ассоциативные контейнеры**
    - set, multiset, map, multimap
    - unordered_set, unordered_map
    - внутреннее устройство и основные операции
    - итераторы и их инвалидация

15. **Алгоритмы**
    - функторы
    - обзор алгоритмов с примерами (swap, iter_swap, sort, find, copy, unique, remove_if, lower_bound, for_each)
    - реализация алгоритмов через итераторы

16. **Реализация итераторов и алгоритмов**
    - реализация собственного итератора
    - value_type, iterator_category
    - std::advance, std::distance (зачем и реализация)

17. **C++11. Разное**
    - lambda и захваты
    - auto, decltype
    - initializer_list
    - shared_ptr, unique_ptr (использование)

18. **Move семантика**
    - rvalue и lvalue
    - rvalue references
    - move constructor, move assignment
    - std::move

19. **Метапрограммирование**
    - решение в стиле C (#define, #ifdef)
    - constexpr, static_assert
    - SFINAE, реализация предиката для типа (has_iterator, is_integral)
    - variadic templates (для функций)

20. **Многопоточность**
    - процесс, поток, переключение контекста
    - thread
    - mutex
