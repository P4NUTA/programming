#include <string>
#include <sstream>
#pragma once /* Защита от двойного подключения заголовочного файла */
class human {
public:
    /* Конструктор класса human 
    @param string last_name - human's lastname
    @param string name - human's name
    @param string second name - human's second name
    
    */
    human(std::string last_name, std::string name, std::string
        second_name)
    {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }
    /* Вывод и Получение ФИО человека 
    @return full_name - human's full name
    */
    std::string get_full_name()
    {
        std::ostringstream full_name;
        full_name << this->last_name << " "
            << this->name << " "
            << this->second_name;
        return full_name.str();
    }
private:
    std::string name; // имя
    std::string last_name; // фамилия
    std::string second_name; // отчество
};