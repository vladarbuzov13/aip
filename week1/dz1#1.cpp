#include <iostream> //Вывести на экран Первую букву имени из символов "*" (звездочка)
int main()
{
	std::cout << "*****" << std::endl
		<< "*******" << std::endl
		<< "**    **" << std::endl
		<< "**    **" << std::endl
		<< "*******" << std::endl
		<< "*******" << std::endl
		<< "**    **" << std::endl
		<< "**    **" << std::endl
		<< "*******" << std::endl
		<< "*****" << std::endl;

	std::getchar(); // ожидание ввода, чтобы прога
	std::getchar(); // не закрывалась после выполнения
	return 0;
}
