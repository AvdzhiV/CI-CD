# Basic CI/CD

Разработка простого **CI/CD** для проекта *SimpleBashUtils*. Сборка, тестирование, развертывание.

## Contents

1. [Chapter I](#chapter-i) \
   1.1. [Настройка gitlab-runner](#part-1-настройка-gitlab-runner) \
   1.2. [Сборка](#part-2-сборка) \
   1.3. [Тест кодстайла](#part-3-тест-кодстайла) \
   1.4. [Интеграционные тесты](#part-4-интеграционные-тесты)

## Part 1. Настройка gitlab-runner

- Проверка весрии linux \
![1.1](img/check-version.png)

- Скачиваем gitlub-runner \
![1.2](img/download-gitlub-runner.png)

- Устанавливаем и запускаем \
![1.3](img/install-and-run.png)

- Проверяем статус выполнения \
![1.4](img/check-run.png)

- Регистрируем gitlab-runner \
![1.5](img/register.png)

## Part 2. Сборка

- Добовляем этап запуска сборки в `.gitlab-ci.yml` \
![2.1](img/build.png)

- Проверка сборки \
![2.2](img/check-build.png)

- Проверка создания артефакта \
![2.3](img/artefact-check.png)

## Part 3. Тест кодстайла

- Дописываем `.gitlab-ci.yml` для стиля \
![3.1](img/codestyle-test.png)

- Проверяем пропустит ли ошибку \
![3.2](img/check-error2.png)
![3.3](img/check-error1.png)

- Исправляем ошибку и пушим \
![3.4](img/fix-error.png)

## Part 4. Интеграционные тесты

- Дописываем `.gitlab-ci.yml` для интеграции тестов \
![4.1](img/tests.png)
- Проверка тестов \
![4.2](img/check-tests.png)

## Part 5. Развертывание

- Настраиваем netplan на виртуальных машинах \
![5.1](img/netplan1.png)
![5.2](img/netplan2.png)

- Проверка что они видят друг друга
![5.3](img/check-connection.png)

- 