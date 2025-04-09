#include "worker.hpp"
#include <vector>

// CLASS WORKER

Worker::Worker() : name("John"), surname("Doe"), age(0), salary(0), is_active(false) {}

Worker::Worker(std::string name, std::string surname, int age, unsigned int salary, bool is_active) : 
name(name), surname(surname), age(age), salary(salary), is_active(is_active){}

std::string Worker::get_name() const{
    return name;
}
void Worker::set_name(const std::string& name){
    this->name = name;
}

std::string Worker::get_surname() const{
    return surname;
}
void Worker::set_surname(const std::string& surname){
    this->surname = surname;
}

int Worker::get_age() const{
    return age;
};
void Worker::set_age(const int& age){
    this->age = age;
};

unsigned int Worker::get_salary() const{
    return salary;
};
void Worker::set_salary(const unsigned int& salary){
    this->salary = salary;
}

bool Worker::check_activity() const{
    return is_active;
}
void Worker::set_activity(const bool& activity){
    this->is_active = activity;
}

// CLASS DEVELOPER

Developer::Developer(std::string name, std::string surname, int age, unsigned int salary, bool is_active, std::string programming_language, int grade) : 
    Worker(name, surname, age, salary, is_active), programming_language(programming_language), grade(grade){};

std::string Developer::get_role() const {
    return "Developer";
}

int Developer::get_grade() const{
    return grade;
}
void Developer::set_grade(int& grade){
    this->grade = grade;
}

std::string Developer::get_programming_language() const{
    return programming_language;
}
void Developer::set_programming_language(const std::string& language){
    programming_language = language;
}

void Developer::print(std::ostream& out) const{
    if(this->is_active == true){
        out << "Active developer: " << name << " " << surname << ", " << age << ", " << grade << ", " << ", salary is " << salary << ";" << std::endl;
    } else {
        out << "Inactive developer: " << name << " " << surname << ", " << age << ", " << grade << ", salary is " << salary << ";" << std::endl;
    }
}


// CLASS TUTOR

Tutor::Tutor(std::string name, std::string surname, int age, unsigned int salary, bool is_active, std::vector<std::string> courses) : 
    Worker(name, surname, age, salary, is_active), courses(courses){};

std::string Tutor::get_role() const {
    return "Tutor";
}

void Tutor::print_courses(std::ostream& out) const{
    for(size_t i = 0; i < courses.size(); i++){
        out << courses[i] << " ";
    };
}
void Tutor::add_course(const std::string& course){
    courses.push_back(course);
}

void Tutor::print(std::ostream& out) const{
    if(this->is_active == true){
        out << "Active tutor: " << name << " " << surname << ", " << age << ", " << "salary is " << salary;
        out << ", list of courses: ";
        print_courses(std::cout);
        out << ";" << std::endl;
    } else {
        out << "Inactive tutor: " << name << " " << surname << ", " << age << ", " << "salary is " << salary;
        out << ", list of courses: ";
        print_courses(std::cout);
        out << ";" << std::endl;
    }
}

// CLASS DRIVER

Driver::Driver(std::string name, std::string surname, int age, unsigned int salary, bool is_active, int driver_license) : 
    Worker(name, surname, age, salary, is_active), driving_license_number(driver_license){};

std::string Driver::get_role() const {
    return "Driver";
}

int Driver::get_driving_license_number() const{
    return driving_license_number;
}
void Driver::change_driving_license_number(const int& driving_license_number){
    this->driving_license_number = driving_license_number;
}

void Driver::print(std::ostream& out) const{
    if(this->is_active == true){
        out << "Active driver: " << name << " " << surname << ", " << age << ", " << "salary is " << salary << ";" << std::endl;
    } else {
        out << "Inactive driver: " << name << " " << surname << ", " << age << ", " << "salary is " << salary << ";" << std::endl;
    }
}
