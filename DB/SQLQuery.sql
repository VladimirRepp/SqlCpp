-- Укажите ваше название БД
CREATE DATABASE [(446)database]

--Для повторного использования активируем БД
USE [(446)database]

--Создаем необходимые таблицы
GO
CREATE TABLE Users
(
	Id INT IDENTITY (1, 1) NOT NULL,
    Login NVARCHAR(20) NOT NULL,	
    Password VARCHAR(30) NOT NULL,
    Role VARCHAR(20) NOT NULL
)

GO
CREATE TABLE Applicant 
(
	Id INT IDENTITY (1, 1) NOT NULL,
    Fullname NVARCHAR(100) NOT NULL,	
    Gender VARCHAR(5) NOT NULL,
    DateBirth VARCHAR(20) NOT NULL,
    AvrScore VARCHAR(20) NOT NULL,
    CopyPassport VARCHAR(5) NOT NULL,
    CopySNILS VARCHAR(5) NOT NULL,
    CopyMed VARCHAR(5) NOT NULL
)

-- Вставка тестовых данных 
GO
INSERT INTO Users VALUES ('log1', '1111', 'Admin');
INSERT INTO Users VALUES ('log2', '1111', 'Editor');

GO
INSERT INTO Applicant VALUES ('Фамилия1 Имя1 Отчество1', 'Муж', '2001-01-01', '4.4', 'Да', 'Да', 'Да');
INSERT INTO Applicant VALUES ('Фамилия2 Имя2 Отчество2', 'Жен', '2003-02-02', '5', 'Да', 'Да', 'Да');
INSERT INTO Applicant VALUES ('Фамилия3 Имя3 Отчество3', 'Муж', '1999-03-03', '3.9', 'Да', 'Да', 'Да');
INSERT INTO Applicant VALUES ('Фамилия4 Имя4 Отчество4', 'Жен', '2002-04-04', '4.8', 'Да', 'Да', 'Да');
INSERT INTO Applicant VALUES ('Фамилия5 Имя5 Отчество5', 'Жен', '2000-05-05', '4.7', 'Да', 'Да', 'Да');

-- Выборка всех данных
GO
SELECT * FROM Users;

GO
SELECT * FROM Applicant;