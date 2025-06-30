CREATE TABLE CRICKET(
NAME VARCHAR (50),
CITY VARCHAR (30),
AGE INT,
);
INSERT INTO CRICKET VALUES('Sachin Tendulkar','Mumbai',30),
('Rahul Dravid','Bombay',35),
('M.S.Dhoni','Jharkhand',31),
('Suresh Raina','Gujrat',30);

SELECT * FROM CRICKET

--Create table Worldcup from cricket with all the columns and data.
SELECT *INTO WORLDCUP
FROM CRICKET
SELECT * FROM WORLDCUP

--Create table T20 from cricket with first two columns with no data. 
SELECT NAME,CITY INTO T20
FROM CRICKET 
WHERE 1=0
SELECT *FROM T20

DROP TABLE T20

--Create table IPL From Cricket with No Data. 
SELECT *INTO IPL
FROM CRICKET
WHERE 1=0
SELECT * FROM IPL

-- Select players who are either older than 30 and from 'Mumbai' or exactly 31 years old and not from 'Bombay', and insert them into a new table PLAYER. 
SELECT *INTO PLAYER
FROM CRICKET
WHERE (AGE>30 AND CITY='MUMBAI') OR (AGE=31 AND CITY!='BOMBAY')
SELECT * FROM PLAYER

--Select players whose age is a prime number or their city belongs to India Country, and insert them into a new table PLAYER_INFO. (Consider Cricketer age between 18 to 55) 
SELECT *INTO PLAYER_INFO
FROM CRICKET
WHERE AGE=31
SELECT * FROM PLAYER_INFO

-- Select players whose age is a multiple of 5 and insert them into a new table PLAYER_DATA.
SELECT *INTO PLAYER_DATA
FROM CRICKET
WHERE AGE%5=0
SELECT *FROM PLAYER_DATA

--Insert the cricketer into IPL table whose city is ‘Jharkhand’ 
INSERT INTO IPL
SELECT *FROM CRICKET
WHERE CITY = 'JHARKHAND'
SELECT * FROM IPL



--PART-B--
CREATE TABLE Employee(
Name varchar(50),
City varchar(50),
age int 
);
INSERT INTO Employee VALUES('Jay Patel','Rajkot',30),
('Rahul Dave','Baroda',35),
('Jeet Patel','Surat',31),
('Vijay Patel','Gujrat',30);
SELECT *FROM Employee
--Create table Employee_detail from Employee with all the columns and data.
SELECT *INTO EMPLOYEE_DETAIL
FROM Employee
SELECT * FROM EMPLOYEE_DETAIL

--Create table Employee_data from Employee with first two columns with no data. 
SELECT Name,City INTO EMPLOYEE_DATA
FROM Employee
where 1=0
select * from EMPLOYEE_DATA

--Create table Employee_info from Employee with no Data 
select *into Employee_info
from Employee
where 1=0
select* from Employee_info


--PART-C--
--Insert the Data into Employee_info from Employee whose CITY is Rajkot
INSERT INTO Employee_info
SELECT *FROM EMPLOYEE
WHERE City = 'Rajkot'
SELECT * FROM Employee_info

--Insert the Data into Employee_info from Employee whose age is more than 32
INSERT INTO Employee_info
SELECT *FROM EMPLOYEE
WHERE AGE > 32
SELECT * FROM Employee_info





