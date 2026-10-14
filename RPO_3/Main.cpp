#include <iostream>
#include <windows.h>



int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int fruktovie[4]{};
	int ovoshnie[3]{};
	int chayi[2]{};
	int nastoyki[1]{};

	double yablochniprice = 100;
	double apelsinoviprice = 110;
	double abrikosoviprice = 120;
	double grusheviprice = 130;

	double tomatniprice = 150;
	double lukoviprice = 160;
	double ogurechniprice = 155;

	double chesnochniprice = 200;
	double petrusheviprice = 220;

	double boyarishnikprice = 350;

	double cartprice = 0;
	double visualcartprice = 0;

	int discontminsum = 2000;

	bool canbuyboyarishnik = true;

	std::cout << "Добро пожаловать в магазин \"Соки Александра\".\n";
	while (true)
	{
		int category = 0;
		
		std::cout << "Категории:\n";
		std::cout << "1.Фруктовые соки\n";
		std::cout << "2.Овощные соки\n";
		std::cout << "3.Чаи\n";
		std::cout << "4.Настойки\n";
		std::cout << "5.Посмотреть корзину\n";
		std::cout << "Выберите категорию(0 - выйти): ";
		std::cin >> category;
		if (category == 0)
		{
			break;
		}

		else if (category == 1)
		{
			system("cls");
			std::cout << "Выбрана категория \"Фруктовые соки\".\n";
			while (true)
			{
				std::cout << "Ассортимент категории:\n";
				std::cout << "1.Яблочный	(1 литр)		[" << yablochniprice << "р]\n";
				std::cout << "2.Апельсиновый	(1 литр)		["<< apelsinoviprice << "р]\n";
				std::cout << "3.Абрикосовый	(1 литр)		[" << abrikosoviprice << "р]\n";
				std::cout << "4.Грушевый	(1 литр)		[" << grusheviprice << "р]\n";
				std::cout << "Выберите напиток(0 - назад): ";
				std::cin >> category;
				if (category == 0)
				{
					break;
				}

				else if (category == 1)
				{
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						fruktovie[0] += category;
						cartprice += yablochniprice * category;
						canbuyboyarishnik = false;
						if (nastoyki[0] > 0)
						{
							cartprice -= boyarishnikprice * nastoyki[0];
							nastoyki[0] = 0;
							std::cout << "Фруктовые соки нельзя покупать вместе с боярышником. Боярышник был удалён из корзины!\n";
							system("pause");
						}
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}

				else if (category == 2)
				{
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						fruktovie[1] += category;
						cartprice += apelsinoviprice * category;
						canbuyboyarishnik = false;
						if (nastoyki[0] > 0)
						{
							cartprice -= boyarishnikprice * nastoyki[0];
							nastoyki[0] = 0;
							std::cout << "Фруктовые соки нельзя покупать вместе с боярышником. Боярышник был удалён из корзины!\n";
							system("pause");
						}
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}

				else if (category == 3)
				{
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						fruktovie[2] += category;
						cartprice += abrikosoviprice * category;
						canbuyboyarishnik = false;
						if (nastoyki[0] > 0)
						{
							cartprice -= boyarishnikprice * nastoyki[0];
							nastoyki[0] = 0;
							std::cout << "Фруктовые соки нельзя покупать вместе с боярышником. Боярышник был удалён из корзины!\n";
							system("pause");
						}
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}

				else if (category == 4)
				{
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						fruktovie[3] += category;
						cartprice += grusheviprice * category;
						canbuyboyarishnik = false;
						if (nastoyki[0] > 0)
						{
							cartprice -= boyarishnikprice * nastoyki[0];
							nastoyki[0] = 0;
							std::cout << "Фруктовые соки нельзя покупать вместе с боярышником. Боярышник был удалён из корзины!\n";
							system("pause");
						}
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}
			}
			system("cls");
		}

		else if (category == 2)
		{
			system("cls");
			std::cout << "Выбрана категория \"Овощные соки\".\n";
			while (true)
			{
				std::cout << "Ассортимент категории:\n";
				std::cout << "1.Томатный		[" << tomatniprice << "р]\n";
				std::cout << "2.Луковый		[" << lukoviprice << "р]\n";
				std::cout << "3.Огуречный		[" << ogurechniprice << "р]\n";
				std::cout << "Выберите напиток(0 - назад): ";
				std::cin >> category;
				if (category == 0)
				{
					break;
				}

				else if (category == 1)
				{
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						ovoshnie[0] += category;
						cartprice += tomatniprice * category;
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}

				else if (category == 2)
				{
					std::cout << "Каждый 4 литр лукового сока в подарок!\n";
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						ovoshnie[1] += category;
						cartprice += lukoviprice * category;
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}

				else if (category == 3)
				{
					std::cout << "Выберите, сколько литров сока добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						ovoshnie[2] += category;
						cartprice += ogurechniprice * category;
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}
			}
			system("cls");
		}

		else if (category == 3)
		{
			system("cls");
			std::cout << "Выбрана категория \"Чаи\".\n";
			while (true)
			{
				std::cout << "Ассортимент категории:\n";
				std::cout << "1.Чесночный		[" << chesnochniprice << "р]\n";
				std::cout << "2.Петрушевый		[" << petrusheviprice << "р]\n";
				std::cout << "Выберите напиток(0 - назад): ";
				std::cin >> category;
				if (category == 0)
				{
					break;
				}

				if (category == 1)
				{
					std::cout << "Выберите, сколько литров чая добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						chayi[0] += category;
						cartprice += chesnochniprice * category;
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}

				else if (category == 2)
				{
					std::cout << "При покупке 3 литров петрушевого чая, скидка 5% на них (В ТЗ НЕ НАПИСАНО ОТ 3, ПОЭТОМУ ТОЛЬКО ЗА 3, но не уверен)\n";
					std::cout << "Выберите, сколько литров чая добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						chayi[1] += category;
						cartprice += petrusheviprice * category;
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}
			}
			system("cls");
		}

		else if (category == 4)
		{
			system("cls");
			std::cout << "Выбрана категория \"Настойки\".\n";
			while (true)
			{
				std::cout << "Ассортимент категории:\n";
				std::cout << "1.Боярышник		[" << boyarishnikprice <<"р]\n";
				std::cout << "Выберите напиток(0 - назад): ";
				std::cin >> category;
				if (category == 0)
				{
					break;
				}

				else if (category == 1)
				{
					if (fruktovie[0] == 0 && fruktovie[1] == 0 && fruktovie[2] == 0 && fruktovie[3] == 0)
					{
						canbuyboyarishnik = true;
					}
					if (canbuyboyarishnik == false)
					{
						std::cout << "Нельзя покупать боярышник вместе с фруктовыми соками!\n";
						system("pause");
						break;
					}
					std::cout << "Выберите, сколько литров настойки добавить в корзину: ";
					std::cin >> category;
					if (category >= 0)
					{
						nastoyki[0] += category;
						cartprice += boyarishnikprice * category;
						system("cls");
						std::cout << "Успешно добавлено в корзину!\nСумма корзины: " << cartprice << " рублей.\n";
						system("pause");
						system("cls");
					}
					else
					{
						std::cout << "Ошибка: колличество не должно быть отрицательным!\n";
						system("pause");
						break;
					}
				}
			}
			system("cls");
		}

		else if (category == 5)
		{
			while (true)
			{
				system("cls");
				std::cout << "---Фруктовые соки---\n";
				std::cout << "Яблочный:" << fruktovie[0] << "\n";
				std::cout << "Апельсиновый:" << fruktovie[1] << "\n";
				std::cout << "Абрикосовый:" << fruktovie[2] << "\n";
				std::cout << "Грушевый:" << fruktovie[3] << "\n";

				std::cout << "---Овощные соки---\n";
				std::cout << "Томатовый:" << ovoshnie[0] << "\n";
				std::cout << "Луковый:" << ovoshnie[1] << "\n";
				std::cout << "Огуречный:" << ovoshnie[2] << "\n";

				std::cout << "---Чаи---\n";
				std::cout << "Чесночный:" << chayi[0] << "\n";
				std::cout << "Петрушевый:" << chayi[1] << "\n";

				std::cout << "---Настойки---\n";
				std::cout << "Боярышник:" << nastoyki[0] << "\n\n";

				std::cout << "Сумма товаров: " << cartprice << "\n\n";

				std::cout << "0.Назад\n";
				std::cout << "1.Убрать товары\n";
				std::cout << "2.Перейти к оплате\n";
				std::cout << "Выберите пункт: ";
				std::cin >> category;
				if (category == 0)
				{
					system("cls");
					break;
				}

				if (category == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "---Фруктовые соки---\n";
						std::cout << "Яблочный:" << fruktovie[0] << "\n";
						std::cout << "Апельсиновый:" << fruktovie[1] << "\n";
						std::cout << "Абрикосовый:" << fruktovie[2] << "\n";
						std::cout << "Грушевый:" << fruktovie[3] << "\n";

						std::cout << "---Овощные соки---\n";
						std::cout << "Томатовый:" << ovoshnie[0] << "\n";
						std::cout << "Луковый:" << ovoshnie[1] << "\n";
						std::cout << "Огуречный:" << ovoshnie[2] << "\n";

						std::cout << "---Чаи---\n";
						std::cout << "Чесночный:" << chayi[0] << "\n";
						std::cout << "Петрушевый:" << chayi[1] << "\n";

						std::cout << "---Настойки---\n";
						std::cout << "Боярышник:" << nastoyki[0] << "\n\n";

						std::cout << "Сумма товаров: " << cartprice << "\n\n";

						std::cout << "Категории:\n";
						std::cout << "1.Фруктовые соки\n";
						std::cout << "2.Овощные соки\n";
						std::cout << "3.Чаи\n";
						std::cout << "4.Настойки\n";
						std::cout << "Выберите, из какой категории убрать товары(0 - назад): ";
						std::cin >> category;
						if (category == 0)
						{
							break;
						}

						else if (category == 1)
						{
							system("cls");
							std::cout << "---Фруктовые соки---\n";
							std::cout << "Яблочный:" << fruktovie[0] << "\n";
							std::cout << "Апельсиновый:" << fruktovie[1] << "\n";
							std::cout << "Абрикосовый:" << fruktovie[2] << "\n";
							std::cout << "Грушевый:" << fruktovie[3] << "\n\n";

							std::cout << "1.Яблочный\n";
							std::cout << "2.Апельсиновый\n";
							std::cout << "3.Абрикосовый\n";
							std::cout << "4.Грушевый\n";
							std::cout << "Выберите, какой сок убрать(0 - назад): ";
							std::cin >> category;
							if (category == 0)
							{
								break;
							}

							else if (category == 1)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (fruktovie[0] - category >= 0 && category > 0)
								{
									fruktovie[0] -= category;
									cartprice -= yablochniprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}

							else if (category == 2)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (fruktovie[1] - category >= 0 && category > 0)
								{
									fruktovie[1] -= category;
									cartprice -= apelsinoviprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}

							else if (category == 3)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (fruktovie[2] - category >= 0 && category > 0)
								{
									fruktovie[2] -= category;
									cartprice -= abrikosoviprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}

							else if (category == 4)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (fruktovie[3] - category >= 0 && category > 0)
								{
									fruktovie[3] -= category;
									cartprice -= grusheviprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}

							if (fruktovie[0] == 0 && fruktovie[1] == 0 && fruktovie[2] == 0 && fruktovie[3] == 0)
							{
								canbuyboyarishnik = true;
							}
						}

						else if (category == 2)
						{
							system("cls");
							std::cout << "---Овощные соки---\n";
							std::cout << "Томатовый:" << ovoshnie[0] << "\n";
							std::cout << "Луковый:" << ovoshnie[1] << "\n";
							std::cout << "Огуречный:" << ovoshnie[2] << "\n\n";

							std::cout << "1.Томатовый\n";
							std::cout << "2.Луковый\n";
							std::cout << "3.Огуречный\n";
							std::cout << "Выберите, какой сок убрать(0 - назад): ";
							std::cin >> category;
							if (category == 0)
							{
								break;
							}

							else if (category == 1)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (ovoshnie[0] - category >= 0 && category > 0)
								{
									ovoshnie[0] -= category;
									cartprice -= tomatniprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}

							else if (category == 2)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (ovoshnie[1] - category >= 0 && category > 0)
								{
									ovoshnie[1] -= category;
									cartprice -= lukoviprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}

							else if (category == 3)
							{
								std::cout << "Выберите, сколько литров сока убрать: ";
								std::cin >> category;
								if (ovoshnie[2] - category >= 0 && category > 0)
								{
									ovoshnie[2] -= category;
									cartprice -= ogurechniprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько сока!\n";
									system("pause");
									break;
								}
							}
						}
						
						else if (category == 3)
						{
							system("cls");
							std::cout << "---Чаи---\n";
							std::cout << "Чесночный:" << chayi[0] << "\n";
							std::cout << "Петрушевый:" << chayi[1] << "\n\n";

							std::cout << "1.Чесночный\n";
							std::cout << "2.Петрушевый\n";
							std::cout << "Выберите, какой чай убрать(0 - назад): ";
							std::cin >> category;
							if (category == 0)
							{
								break;
							}

							else if (category == 1)
							{
								std::cout << "Выберите, сколько литров чая убрать: ";
								std::cin >> category;
								if (chayi[0] - category >= 0 && category > 0)
								{
									chayi[0] -= category;
									cartprice -= chesnochniprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько чая!\n";
									system("pause");
									break;
								}
							}

							else if (category == 2)
							{
								std::cout << "Выберите, сколько литров чая убрать: ";
								std::cin >> category;
								if (chayi[1] - category >= 0 && category > 0)
								{
									chayi[1] -= category;
									cartprice -= petrusheviprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько чая!\n";
									system("pause");
									break;
								}
							}
						}

						else if (category == 4)
						{
							system("cls");
							std::cout << "---Настойки---\n";
							std::cout << "Боярышник:" << nastoyki[0] << "\n\n";

							std::cout << "1.Боярышник\n";
							std::cout << "Выберите, какую настойку убрать(0 - назад): ";
							std::cin >> category;
							if (category == 0)
							{
								break;
							}

							else if (category == 1)
							{
								std::cout << "Выберите, сколько литров настойки убрать: ";
								std::cin >> category;
								if (nastoyki[0] - category >= 0 && category > 0)
								{
									nastoyki[0] -= category;
									cartprice -= boyarishnikprice * category;
									system("cls");
									std::cout << "Успешно!\n";
									system("pause");
								}
								else
								{
									std::cout << "Ошибка: в корзине нет столько литров настойки!\n";
									system("pause");
									break;
								}
							}
						}
					}
				}

				if (category == 2)
				{
					system("cls");
					std::cout << "Сумма товаров: " << cartprice << "\n";
					visualcartprice = cartprice;
					if (chayi[1] == 3)
					{
						std::cout << "Скидка 5% на петрушевый чай применена! Скидка составила " << petrusheviprice * chayi[1] * 0.05 << "р (В ТЗ НЕ НАПИСАНО ОТ 3, ПОЭТОМУ ТОЛЬКО ЗА 3, но не уверен)\n";
						visualcartprice -= petrusheviprice * chayi[1] * 0.05;
					}
					if (ovoshnie[1] >= 4)
					{
						std::cout << "Скидка \"Каждый 4 литр лукового сока в подарок\" применена! Скидка составила " << lukoviprice * (ovoshnie[1] / 4) << "р\n";
						visualcartprice -= lukoviprice * (ovoshnie[1] / 4);
					}
					if (cartprice >= discontminsum)
					{
						std::cout << "Скидка 13% при покупке от " << discontminsum << " рублей применена на всю покупку! Скидка составила " << visualcartprice * 0.13 << "р\n";
						visualcartprice -= visualcartprice * 0.13;
					}
					std::cout << "Итоговая сумма: " << visualcartprice << "р\n";
					std::cout << "0.Назад\n";
					std::cout << "1.Оплатить\n";
					std::cout << "Выберите пункт: ";
					std::cin >> category;
					if (category == 1)
					{
						std::cout << "Спасибо за покупку!\n";
						system("pause");
						system("cls");
						main();
						return 0;
					}
				}
			}
		}

		else
		{
			system("cls");
		}
	}

	return 0;
}














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

/*
тип_возрата Имя_функции(аргументы_функции, ...)
{
	тело_функции
}
*/

/*


void PrintHello()
{
	std::cout << "Hello\n";
}

void PrintNum(int a, double b)
{
	std::cout << a + b << "\n";
}

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int playerHP = 1;

	PrintNum(playerHP, 15);

	std::cout << Sum(5, 6);


	return 0;
}
*/

/*
double Plus(double a, double b)
{
	return a + b;
}
double Minus(double a, double b)
{
	return a - b;
}
double Umnojit(double a, double b)
{
	return a * b;
}
double Delit(double a, double b)
{
	if (b == 0)
	{
		return 0;
	}
	else
	{
		return a / b;
	}
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	double chislo1 = 0;
	int vibor_operatora = 0;
	double chislo2 = 0;

	while (true)
	{
		std::cout << "Введите первое число: ";
		std::cin >> chislo1;
		std::cout << "1.+\n2.-\n3.*\n4./\nВыберите, что сделать с числом: ";
		std::cin >> vibor_operatora;
		std::cout << "Введите второе число: ";
		std::cin >> chislo2;
		if (vibor_operatora == 1)
		{
			std::cout << "Ответ: " << Plus(chislo1, chislo2) << "\n";
		}
		else if (vibor_operatora == 2)
		{
			std::cout << "Ответ: " << Minus(chislo1, chislo2) << "\n";
		}
		else if (vibor_operatora == 3)
		{
			std::cout << "Ответ: " << Umnojit(chislo1, chislo2) << "\n";
		}
		else if (vibor_operatora == 4)
		{
			std::cout << "Ответ: " << Delit(chislo1, chislo2) << "\n";
		}
	}


	return 0;
}
*/

/*
double Sum(double one, double two)
{
	return one + two;
}

int Sum(int one, int two)
{
	return one + two;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::cout << Sum(1.2, 5.1);
}
*/

/*
void FillArray(int arr[], int arr_size);
void FillArray(double arr[], int arr_size);
void FillArray(char arr[], int arr_size);

void ShowArray(int arr[], int arr_size);
void ShowArray(double arr[], int arr_size);
void ShowArray(char arr[], int arr_size);


template <typename T1, typename T2>
T2 Substruct(T1 one, T2 two)
{
	return one - two;
}

int Fac(int num)
{
	if (num < 0)
	{
		return 0;
	}
	else if (num == 0)
	{
		return 1;
	}
	return num * Fac(num - 1);
}

int main()
{
	std::cout << Fac(5);
	//std::cout << Substruct(10, 3.2);

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	const int size = 4;

	int arr1[size]{};
	double arr2[size]{};
	char arr3[size]{};


	//FillArray(arr1, size);
	//FillArray(arr2, size);
	//FillArray(arr3, size);
	//ShowArray(arr1, size);
	//ShowArray(arr2, size);
	//ShowArray(arr3, size);
}

void FillArray(int arr[], int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
	{
		arr[i] = rand() % 201 - 100;
	}
}
void FillArray(double arr[], int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
	{
		arr[i] = (double)(rand() % 201 - 100 + (double)(rand() % 10 + 1) / 10);
	}
}
void FillArray(char arr[], int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
	{
		arr[i] = rand() % 26 + 97;
	}
}

void ShowArray(int arr[], int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void ShowArray(double arr[], int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void ShowArray(char arr[], int arr_size)
{
	for (size_t i = 0; i < arr_size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
*/

/*
int Umnoj(int num1, int num2)
{
	if (num2 < 0)
	{
		return 1;
	}
	if (num2 == 0)
	{
		return 0;
	}
	return num1 + Umnoj(num1, num2 - 1);
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::cout << Umnoj(5, 10);
}
*/