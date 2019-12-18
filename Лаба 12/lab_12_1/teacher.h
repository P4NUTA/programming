#include "human.h"
#include <string>
class teacher : public human {
public:
	/* Конструктор класса teacher
	@param string last_name - teacher's last name
	@param string name - teacher's name
	@param string second_name - teacher's second name
	*/
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// Количество учебных часов за семестр у преподавателя
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	/* Получение количества учебных часов 
	@return work_time - teacher's work time
	*/
	unsigned int get_work_time()
	{
		return this->work_time;
	}
private:
	// Учебные часы
	unsigned int work_time;
};