## Практические задания

1. Сделать image контейнера с необходимым ПО для запуска sshd. Запустить docker-compose поднять два ssh сервера

```bash
$ docker-compose build && docker-compose up
```

2. Продемонстрировать что из одного контейнера можно войти в другой
	- По паролю:
	
	![linux console](1.jpg "Console")
	
	- По ключю:
	
	![linux console](2.jpg "Console")
	
	![linux console](3.jpg "Console")

3. Выполнить команду

	![linux console](4.jpg "Console")
	
4. Передать файл
	
	![linux console](5.jpg "Console")
	
5. Продемонстрировать простейший обмен данными с помощью утилиты netcat
	
	![linux console](6.jpg "Console")
	
	![linux console](7.jpg "Console")