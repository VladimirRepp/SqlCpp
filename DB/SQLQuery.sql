-- ������� ���� �������� ��
CREATE DATABASE [(446)database]

--��� ���������� ������������� ���������� ��
USE [(446)database]

--������� ����������� �������
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

-- ������� �������� ������ 
GO
INSERT INTO Users VALUES ('log1', '1111', 'Admin');
INSERT INTO Users VALUES ('log2', '1111', 'Editor');

GO
INSERT INTO Applicant VALUES ('�������1 ���1 ��������1', '���', '2001-01-01', '4.4', '��', '��', '��');
INSERT INTO Applicant VALUES ('�������2 ���2 ��������2', '���', '2003-02-02', '5', '��', '��', '��');
INSERT INTO Applicant VALUES ('�������3 ���3 ��������3', '���', '1999-03-03', '3.9', '��', '��', '��');
INSERT INTO Applicant VALUES ('�������4 ���4 ��������4', '���', '2002-04-04', '4.8', '��', '��', '��');
INSERT INTO Applicant VALUES ('�������5 ���5 ��������5', '���', '2000-05-05', '4.7', '��', '��', '��');

-- ������� ���� ������
GO
SELECT * FROM Users;

GO
SELECT * FROM Applicant;