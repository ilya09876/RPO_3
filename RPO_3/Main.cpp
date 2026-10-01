#include <iostream>
#include <windows.h>


//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//
//	// тип_данных имя_переменной
//	int one = 0;
//
//	std::cout << "Введите цену пельменей: ";
//	std::cin >> one;
//
//	return 0;
//?


/*
	Типы данных:
	bool			true/false		0 - false
	char			'+'		43
	unsigned char					От 0 до 255

	short			123				От -3276 до 32767
	unsigned short	123				От 0 до 65535

	int				123456			От 02147483648 до 2147483647
	unsigned int	123456			От 0 до 4294967295

	float			123.456			От ~ 3.4e-38 до 3.4e+38

	double			123123.123123	От ~ 1.7e до 1.7e-308
	long double		no comment		От ~ 3.4e-4932
	
	long long int	.............

	auto			???				


	Операторы:
		математические: + - / * % () ++ -- += -= *= /= =
		сравнительные:	< > == >= <= !=		<=>
		логические:		&&(и) ||(или) !(не)
		ТАБУ: goto		and or not		int НомерОдин;


	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Меня зовут илья\n";
	std::cout << "\tМне 17 лет\n";
	std::cout << "Я учусь на разработчика программного обеспечения\n";
	std::cout << "\t\tПельмени дорогие, потому что вкусные\n";
	std::cout << "Пачка пельменей стоит примерно " << 500 << " рублей\n";
	std::cout << "\t";
*/
/*int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int a = 0;

	do
	{
		std::cout << "Меню:\n";
		std::cout << "1) - Ларионов\n";
		std::cout << "2) - Александр\n";
		std::cout << "3) - Дмитриевич\n";
		std::cout << "Выбери число(1-3): \n";
		std::cin >> a;



	} while (a < 1 || a >3);

	if (a == 1)
	{
		std::cout << "Ларионов\n";
	}
	else if (a == 2)
	{
		std::cout << "Александр\n";
	}
	else
	{
		std::cout << "Дмитриевич\n";
		return 0;
		{

		}
	}*/
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	



	return 0;
}

/*
int choose = 0, number = 0, hp = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

	while (true) //Главное меню
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: \n";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true) //Меню выбора сложности
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";
				std::cout << "1 - Легкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: \n";
				std::cin >> choose;

				if (choose == 1) // Лёгкая игра
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\nВы угадали!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за диапозон\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число было: " << randomNumber << "\n";
								system("pause");
								break;
							}

							std::cout << "Не угадали\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число было: " << randomNumber << "\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше загаданного числа\n";
								}
								else
								{
									std::cout << "Ваше число больше загаданного числа\n";
								}
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 2) // Сложная игра
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (true)
					{
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\nВы угадали!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за диапозон\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число было: " << randomNumber << "\n";
								system("pause");
								break;
							}

							std::cout << "Не угадали\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									std::cout << "\nБесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число было: " << randomNumber << "\n";
										system("pause");
										break;
									}
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше загаданного числа\n";
								}
								else
								{
									std::cout << "Ваше число больше загаданного числа\n";
								}
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 0) //Выход из меню выбора сложности
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			while (true) //Меню настроек игры
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для лёгкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод: \n";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для легкой игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 0 до 100\n";
							Sleep(1200);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1200);
							maxHp = choose;
							break;
						}
					}
				}
				if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 0 до 100\n";
							Sleep(1200);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1200);
							maxHpHard = choose;
							break;
						}
					}
				}
				if (choose == 3)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 0 до 100\n";
							Sleep(1200);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1200);
							chance = choose;
							break;
						}
					}
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}
*/

/*
	// тип_данных имя_массива[кол-во_ячеек];

	const int size = 10;
	double positivesumm = 0;
	double negativesumm = 0;

	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		std::cout << arr[i] << " ";
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			positivesumm += arr[i];
		}
		else
		{
			negativesumm += arr[i];
		}
	}

	std::cout << "\n" << positivesumm << "\n" << negativesumm << "\n";
	std::cout << ((positivesumm + negativesumm) / size);
*/

/*
	srand(time(NULL));

	const int row = 3, col = 4;

	int arr[row][col]{};
	for (size_t i = 0; i < row; i++)
	{
		for (size_t o = 0; o < col; o++)
		{
			arr[i][o] = rand() % 51 - 25;
			std::cout << arr[i][o] << " ";
		}
		std::cout << "\n";
	}
*/