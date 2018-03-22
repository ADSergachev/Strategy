# Strategy
Используя механизм наследования (продемонстрировать использование 
простого и множественного наследования, виртуального при 
необходимости, продемонстрировать использование различных режимов доступа при наследовании, 
продемонстрировать использование ключевого слова final при наследовании, продемонстрировать 
чисто виртуальные классы), реализовать ООП модели в следующих предметных областях:
2)Современная стратегия в реальном времени

Используя механизм переопределения методов в классах-наследниках и полиформизма, на базе 
соответствующего варианта задания 1 раз реализовать ООП модели следующих предметных 
областей (продемонстрировать использование ключевых слов virtual, override, final при 
переопределении методов):
9)Химический реактор

## Класс People и все наследуемые классы

Класс **People** содержит 2 поля: количество людей в стране и их нацианальность

Во всех классах наследниках мы определяем род деятельности(несколько методов, с помощью которых мы "заставляем их делать то или иное действие). Например, класс Millitary: определяем процент военных; есть метод атаковать другое государство, защищать государство, тренировать солдат и готовить их к войне, и так далее.

## Класс Production и все наследуемые классы

**Production** - интерфейс, в котором мы определяем 2 виртуальных метода: запустить производство и остановить производство.
