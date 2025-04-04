#ifndef WORKER_HPP
#define WORKER_HPP

#include <string>
#include <iostream>

class Worker{

private:
    std::string name;
    std::string surname;
    int age;
    std::string role;
    unsigned int salary;
    bool is_active;

public:
    Worker();
    Worker(std::string name, std::string surname, int age, std::string role, unsigned int salary, bool is_active);
    ~Worker() = default;

    std::string get_name() const;
    void set_name(const std::string& name);

    std::string get_surname() const;
    void set_surname(const std::string& surname);

    int get_age() const;
    void set_age(const int& age);

    std::string get_role() const;
    void set_role(const std::string& role);

    unsigned int get_salary() const;
    void set_salary(const unsigned int& salary);

    bool check_activity() const;
    void set_activity(const bool& activity);

    void print(std::ostream& out) const;
};

#endif // WORKER_HPP