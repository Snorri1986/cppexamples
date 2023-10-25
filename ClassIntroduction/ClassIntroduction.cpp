#include <iostream>

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
    
    std::string Company;
    int Age;
protected:
    std::string Name;

public:

    void setName(std::string name) {
        if (std::isalnum(name[0])) {
            Name = name;
        }
    }

    std::string getName() {
        return Name;
    }

    void setCompany(std::string company) {
        if (std::isalnum(company[0])) {
            Company = company;
        }
    }

    std::string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        }
    }

    int getAge() {
        return Age;
    }
    
    Employee(std::string name, std::string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void introduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    void AskForPromotion() {
        if (Age > 30) {
            std::cout << Name << " got promoted!" << std::endl;
        }
        else {
            std::cout << Name << ", sorry No promotion for you" << std::endl;
        }
    }

    virtual void work() {
        std::cout << Name << " is checking email, task backlog, performing tasks ..." << std::endl;
    }
};

class Developer : public Employee {
public:
    std::string FavProgramminglanguage;
    
    Developer(std::string name, std::string company, int age,std::string favProglanguage)
        : Employee(name,company,age)
    {
        FavProgramminglanguage = favProglanguage;
    }

    void fixBug() {
        std::cout << Name << " fixing bug using " << FavProgramminglanguage << std::endl;
    }

    void work() {
        std::cout << Name << " is writting code ..." << std::endl;
    }
};

class Teacher :public Employee {
public:
    std::string Subject;

    Teacher(std::string name, std::string company, int age, std::string subject) 
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    
    void PrepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson " << std::endl;
    }

    void work() {
        std::cout << Name << " is preparing presentation ..." << std::endl;
    }

};


int main() {
    
    //Employee employee1 = Employee("Denys","YouTube",25);
    //employee1.introduceYourself();
    //employee1.AskForPromotion();

    //Employee employee2 = Employee("John", "Amazon", 35);
    //employee2.introduceYourself();
    //employee2.AskForPromotion();

    /*employee1.setAge(39);
    employee1.setCompany("IBM");
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old" << std::endl;
    std::cout << employee1.getName() << " works for " << employee1.getCompany() << std::endl;*/

    Developer developer = Developer("Denys", "IBM", 37, "Java");
    /*developer.fixBug();
    developer.fixBug();
    developer.fixBug();
    developer.fixBug();*/
    //developer.work();
    

    //developer.AskForPromotion();
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    //t.PrepareLesson();
    //t.AskForPromotion();
    //t.work();

    Employee* e1 = &developer;
    Employee* e2 = &t;

    e1->work();
    e2->work();
    
}

