#include "Keeper.h"
#include "KeeperHandler.h"
int main()
{
	AbstractKeeperHandler* handler(new IOKeeperHandler); //созд для управления через ввод\вывод
	Keeper containers(handler); //1й уровень
	containers.run(); //2й уровень(из класса Keeper действия с конт)
	return 0;
}