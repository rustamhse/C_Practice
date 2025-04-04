#include "worker.hpp"

Worker::Worker() : name("John"), surname("Doe"), age(0), role("Unknown"), salary(0), is_active(false) {}

Worker::Worker(std::string name, std::string surname, int age, std::string role, unsigned int salary, bool is_active) : 
name(name), surname(surname), age(age), role(role), salary(salary), is_active(is_active){}

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

std::string Worker::get_role() const{
    return role;
};
void Worker::set_role(const std::string& role){
    this->role = role;
};

unsigned int Worker::get_salary() const{
    return salary;
};
void Worker::set_salary(const unsigned int& salary){
    this->salary = salary;
};

bool Worker::check_activity() const{
    return is_active;
};
void Worker::set_activity(const bool& activity){
    this->is_active = activity;
};

void Worker::print(std::ostream& out) const{
    if(this->is_active == true){
        out << "Active worker: " << name << " " << surname << ", " << age << ", " << role << ", salary is " << salary << ";" << std::endl;
    } else {
        out << "Inactive worker: " << name << " " << surname << ", " << age << ", " << role << ", salary is " << salary << ";" << std::endl;
    }
};