#ifndef WORKER_HPP
#define WORKER_HPP

#include <string>
#include <iostream>

class Worker{

protected:
    std::string name;
    std::string surname;
    int age;
    unsigned int salary;
    bool is_active;

public:
    Worker();
    Worker(std::string name, std::string surname, int age, unsigned int salary, bool is_active);
    virtual ~Worker() = default;

    std::string get_name() const;
    void set_name(const std::string& name);

    std::string get_surname() const;
    void set_surname(const std::string& surname);

    int get_age() const;
    void set_age(const int& age);

    virtual std::string get_role() const = 0;

    unsigned int get_salary() const;
    void set_salary(const unsigned int& salary);

    bool check_activity() const;
    void set_activity(const bool& activity);

    virtual void print(std::ostream& out) const = 0;
};


class Developer : public Worker{

private:
    std::string programming_language;
    int grade;

public:
    Developer(std::string name, std::string surname, int age, unsigned int salary, bool is_active, std::string programming_language, int grade);
    ~Developer() override = default;
    void print(std::ostream& out) const override;
    std::string get_role() const override;
    void set_grade(int& grade);
    int get_grade() const;
    void set_programming_language(const std::string& language);
    std::string get_programming_language() const;
};

class Tutor : public Worker{

    private:
        std::vector<std::string> courses;
    
    public:
        Tutor(std::string name, std::string surname, int age, unsigned int salary, bool is_active, std::vector<std::string> courses);
        ~Tutor() override = default;
        void print(std::ostream& out) const override;
        std::string get_role() const override;
        void add_course(const std::string& course);
        void print_courses(std::ostream& out) const;
};

class Driver : public Worker{

    private:
        int driving_license_number;
    
    public:
        Driver(std::string name, std::string surname, int age, unsigned int salary, bool is_active, int driving_license_number);
        ~Driver() override = default;
        void print(std::ostream& out) const override;
        std::string get_role() const override;
        void change_driving_license_number(const int& driving_license_number);
        int get_driving_license_number() const;
};

#endif // WORKER_HPP