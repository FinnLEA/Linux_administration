1. Основные принципы Unix-way:
	- Все есть - файл
	- Написание программы, которое делает что-то одно
	- Есть множество путей решения
	
2. Линус Торвальдс является разработчиком ядра ОС Linux.

3. Как посмотреть название ядра системы из консоли?
	---
	uname -ar
	
4. Промежутки измерения загрузки системы для команды uptime следующие
	---
	1,5,15 минут
	
5. Какой командой узнать сколько занято на HDD
	---
	df -H
	
6. Какие разделы содержит вывод команды vmstat:
	- cpu (загрузка процессора)
	- memory (память)
	- procs (количество процессов)
	- swap
	- io (загрузка ввода-вывода)
	
7. Описать работу своего Linux дистрибутива: какое ядро, архитектура, размеры hdd, объеме ОЗУ, загрузке процессора и т.д:
	---
	Linux kali 5.9.0-kali1-amd64 #1 SMP Debian 5.9.1-1kali2 (2020-10-29) x86_64 GNU/Linux
	---
	Filesystem    |  Size |  Used| Avail 	| Use% | Mounted on
	--------------|-------|------|----------|------|-----------------
	udev          | 2.1G  |   0  |	2.1G    | 0%   | /dev
	tmpfs         | 413M  | 1.3M |	412M    | 1% 	| /run
	/dev/sda1     |  84G  |  15G | 	65G     | 19% 	| /
	tmpfs         | 2.1G  |   0  |	2.1G    | 0% 	| /dev/shm
	tmpfs         | 5.3M  |   0  |	5.3M    | 0% 	| /run/lock
	tmpfs         | 4.2M  |   0  |	4.2M    | 0% 	| /sys/fs/cgroup
	tmpfs         | 413M  | 62k  |	413M    | 1% 	| /run/user/1000
	
	---
	
	name	|total |used  |free |shared | buff/cache | available
	--------|------|------|-----|-------|------------|------------
	Mem:    |3.8Gi |1.7Gi |450Mi|31Mi   |    1.7Gi   |   1.9Gi
	Swap:   |974Mi |171Mi |803Mi|
	
	---
	
	09:16:46 up 21:49,  1 user,  load average: 0.27, 0.16, 0.18

	![screenshot of sample](https://github.com/FinnLEA/Linux_administration/blob/lab1/linux.jpg)
	 