// Course project 2 - Racing simulator.cpp v1.0

#include <iostream>
#include "Transport.h"
#include "Camel.h"
#include "Boots_AllTerrain.h"
#include "Broomstick.h"
#include "Camel_HighSpeed.h"
#include "Carpet_Flying.h"
#include "Centaur.h"
#include "Eagle.h"

std::string transport_name(int choice)
{
    std::string name;
    if (choice == 1)
    {
        name = "Верблюд";
    }
    if (choice == 2)
    {
        name = "Ковёр-самолёт";
    }
    if (choice == 3)
    {
        name = "Верблюд-быстроход";
    }
    if (choice == 4)
    {
        name = "Орёл";
    }
    if (choice == 5)
    {
        name = "Кентавр";
    }
    if (choice == 6)
    {
        name = "Метла";
    }
    if (choice == 7)
    {
        name = "Ботинки-вездеходы";
    }
    return name;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    double distance_ = 0; //дистанция гонки
    int choice_transport_ = 0; //выбор транспорта
    int choice_race_ = 0; //выбор типа гонки
    int choice_action_ = 0; //выбор действия
    int count_transport_ = 0; //счётчик зарегистрированных ТС
    bool game_over = false; //переключатель цикла всей игры

    std::string* arr_names = new std::string[6]; //массив для имён
    double* arr_results = new double[6]; //массив для результатов
    //создание массивов

    Camel camel(distance_); //1. Верблюд
    Carpet_Flying carpet_Flying(distance_); //2. Ковёр-самолёт
    Camel_HighSpeed camel_HighSpeed(distance_); //3. Верблюд-быстроход
    Eagle eagle(distance_); //4. Орёл
    Centaur centaur(distance_); //5. Кентавр
    Broomstick broomstick(distance_); //6.Метла
    Boots_AllTerrain boots_AllTerrain(distance_); //7.Ботинки-вездеходы
    //классы типов транспорта
    
    std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl; 
    //приветствие

    while (game_over == false)
    {
        camel.race_switch = true;
        carpet_Flying.race_switch = true;
        camel_HighSpeed.race_switch = true;
        eagle.race_switch = true;
        centaur.race_switch = true;
        broomstick.race_switch = true;
        boots_AllTerrain.race_switch = true;
        //обнуление переключателей

        std::cout << "Доступны следующие виды гонок: " << std::endl;
        std::cout << "1. Гонка для наземного транспорта" << std::endl;
        std::cout << "2. Гонка для воздушного транспорта" << std::endl;
        std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
        std::cout << "Выберите тип гонки (1, 2 или 3): ";
        std::cin >> choice_race_;
        while (choice_race_ < 1 || choice_race_ > 3)
        {
            std::cout << "Данного типа гонки не существует. Выберите другой тип гонки (1, 2 или 3): ";
            std::cin >> choice_race_;
        }
        //выбор типа гонки

        if (choice_race_ == 1)
        {
            carpet_Flying.race_switch = false;
            eagle.race_switch = false;
            broomstick.race_switch = false;
        }
        if (choice_race_ == 2)
        {
            camel.race_switch = false;
            camel_HighSpeed.race_switch = false;
            centaur.race_switch = false;
            boots_AllTerrain.race_switch = false;
        }
        //переключатель доступного транспорта

        std::cout << "Укажите длину дистанции (км): ";
        std::cin >> distance_;
        while (distance_ <= 0)
        {
            std::cout << "Дистанция должна быть больше 0 км" << std::endl;
            std::cout << "Укажите длину дистанции (км): ";
            std::cin >> distance_;
        }
        //выбор дистанции

        std::cout << "Вам доступны следующие действия: " << std::endl;
        std::cout << "1. Зарегистрировать транспортное средство" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> choice_action_;
        while (choice_action_ < 1 || choice_action_ > 1)
        {
            std::cout << "Данное действие недоступно. Выберите действие из списка ниже: " << std::endl;
            std::cout << "1. Зарегистрировать транспортное средство" << std::endl;
            std::cout << "Выберите действие: ";
            std::cin >> choice_action_;
        }
        //выбор действий

        for (count_transport_ = 0; count_transport_ <= 7; ++count_transport_) //регистрация транспорта
        {
            std::cout << "Гонка для ";
            if (choice_race_ == 1)
            {
                std::cout << "наземного ";
            }
            if (choice_race_ == 2)
            {
                std::cout << "воздушного ";
            }
            if (choice_race_ == 3)
            {
                std::cout << "наземного и воздушного ";
            }
            std::cout << "транспорта. Дистанция гонки: " << distance_ << " км" << std::endl;
            //информация о трассе + переключение доступного ТС

            std::cout << "Выберите транспортное средство из списка ниже (должно быть зарегистрировано не менее 2х ТС):" << std::endl;
            std::cout << "1. Верблюд" << std::endl;
            std::cout << "2. Ковёр-самолёт" << std::endl;
            std::cout << "3. Верблюд-быстроход" << std::endl;
            std::cout << "4. Орёл" << std::endl;
            std::cout << "5. Кентавр" << std::endl;
            std::cout << "6. Метла" << std::endl;
            std::cout << "7. Ботинки-вездеходы" << std::endl;
            if (count_transport_ > 1)
            {
                std::cout << "0. Закончить регистрацию" << std::endl;
            }
            std::cout << "Выберите транспортное средство для регистрации: ";
            std::cin >> choice_transport_;
            //список ТС для выбора

            while ((choice_transport_ == 1 && camel.race_switch == false) || (choice_transport_ == 2 && carpet_Flying.race_switch == false) || (choice_transport_ == 3 && camel_HighSpeed.race_switch == false)
                || (choice_transport_ == 4 && eagle.race_switch == false) || (choice_transport_ == 5 && centaur.race_switch == false) || (choice_transport_ == 6 && broomstick.race_switch == false)
                || (choice_transport_ == 7 && boots_AllTerrain.race_switch == false))
            {
                std::cout << "Данное транспортное средство недоступно. Выбериде транспортное средство из списка ниже:" << std::endl;
                std::cout << "1. Верблюд" << std::endl;
                std::cout << "2. Ковёр-самолёт" << std::endl;
                std::cout << "3. Верблюд-быстроход" << std::endl;
                std::cout << "4. Орёл" << std::endl;
                std::cout << "5. Кентавр" << std::endl;
                std::cout << "6. Метла" << std::endl;
                std::cout << "7. Ботинки-вездеходы" << std::endl;
                if (count_transport_ > 1)
                {
                    std::cout << "0. Закончить регистрацию" << std::endl;
                }
                std::cout << "Выберите транспортное средство для регистрации: ";
                std::cin >> choice_transport_;
            }
            //ошибка при выборе ТС повторно или недоступного ТС

            if (choice_transport_ == 1 && camel.race_switch == true)
            {
                arr_names[count_transport_] = camel.get_name();
                arr_results[count_transport_] = camel.get_time(distance_);
                camel.race_switch = false;
            }
            if (choice_transport_ == 2 && carpet_Flying.race_switch == true)
            {
                arr_names[count_transport_] = carpet_Flying.get_name();
                arr_results[count_transport_] = carpet_Flying.get_time(distance_);
                carpet_Flying.race_switch = false;
            }
            if (choice_transport_ == 3 && camel_HighSpeed.race_switch == true)
            {
                arr_names[count_transport_] = camel_HighSpeed.get_name();
                arr_results[count_transport_] = camel_HighSpeed.get_time(distance_);
                camel_HighSpeed.race_switch = false;
            }
            if (choice_transport_ == 4 && eagle.race_switch == true)
            {
                arr_names[count_transport_] = eagle.get_name();
                arr_results[count_transport_] = eagle.get_time(distance_);
                eagle.race_switch = false;
            }
            if (choice_transport_ == 5 && centaur.race_switch == true)
            {
                arr_names[count_transport_] = centaur.get_name();
                arr_results[count_transport_] = centaur.get_time(distance_);
                centaur.race_switch = false;
            }
            if (choice_transport_ == 6 && broomstick.race_switch == true)
            {
                arr_names[count_transport_] = broomstick.get_name();
                arr_results[count_transport_] = broomstick.get_time(distance_);
                broomstick.race_switch = false;
            }
            if (choice_transport_ == 7 && boots_AllTerrain.race_switch == true)
            {
                arr_names[count_transport_] = boots_AllTerrain.get_name();
                arr_results[count_transport_] = boots_AllTerrain.get_time(distance_);
                boots_AllTerrain.race_switch = false;
            }
            //запись участников гонки

            if (choice_transport_ != 0)
            {
                std::cout << "Вы успешно зарегистрировали: " << transport_name(choice_transport_) << std::endl;
                std::cout << "На текущую гонку зарегистрировано " << count_transport_ + 1 << " ТС: ";
                for (int a = 0; a < count_transport_; ++a)
                {
                    std::cout << arr_names[a] << ", ";
                }
                std::cout << arr_names[count_transport_] << std::endl;
            }
            //сообщение об успешной регистрации

            if (count_transport_ > 1 && choice_transport_ == 0)
            {
                std::cout << "Вам доступны следующие действия: " << std::endl;
                std::cout << "1. Зарегистрировать транспортное средство" << std::endl;
                std::cout << "2. Начать гонку" << std::endl;
                std::cout << "Выберите действие: ";
                std::cin >> choice_action_;
                if (choice_action_ == 1)
                {
                    --count_transport_;
                }
                if (choice_action_ == 2)
                {
                    break;
                }
                while (choice_action_ < 1 || choice_action_ > 2)
                {
                    std::cout << "Данное действие недоступно. Выберите действие из списка ниже: " << std::endl;
                    std::cout << "1. Зарегистрировать транспортное средство" << std::endl;
                    std::cout << "2. Начать гонку" << std::endl;
                    std::cout << "Выберите действие: ";
                    std::cin >> choice_action_;
                    {
                        break;
                    }
                }
            }
            //выбор действий
        }
        
        bool swap = false;
        do
        {
            swap = false;
            for (int a = 1; a < count_transport_; ++a)
            {
                if (arr_results[a - 1] > arr_results[a])
                {
                    double warp_results = arr_results[a - 1];
                    arr_results[a - 1] = arr_results[a];
                    arr_results[a] = warp_results;
                    std::string warp_names = arr_names[a - 1];
                    arr_names[a - 1] = arr_names[a];
                    arr_names[a] = warp_names;
                    swap = true;
                }
            }
        } while (swap);
        //сортировка массивов

        std::cout << "Результаты гонки: " << std::endl;
        for (int a = 0; a < count_transport_; ++a)
        {
            std::cout << a + 1 << ": " << arr_names[a] << ". Время: " << arr_results[a] << std::endl;
        }
        //результаты

        std::cout << "Вам доступны следующие действия: " << std::endl;
        std::cout << "1. Провести ещё гонку" << std::endl;
        std::cout << "2. Выйти" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> choice_action_;
        if (choice_action_ == 2)
        {
            game_over = true;
        }
        //выбор между продолжением игры или концом
    }
    delete[] arr_names;
    delete[] arr_results;
    //удаление массивов
}