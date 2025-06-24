--Retrieve all data from table BORROW.  
SELECT * FROM BORROW 
--Retrieve all the data from DEPOSIT
 SELECT * FROM DEPOSIT
 --Display Account No, Customer Name & Amount from DEPOSIT. 
 SELECT ACTNO,CNAME,AMOUNT FROM DEPOSIT
 --Display Loan No, Amount from BORROW
 SELECT LOANNO,AMOUNT FROM BORROW
 --Display loan details of all customers who belongs to ‘ANDHERI’ branch from borrow table.
 SELECT * from BORROW where BNAME='ANDHERI'
 --Give account no and amount of depositor, whose account no is equals to 106 from deposit table. 
 SELECT  ACTNO,AMOUNT FROM DEPOSIT WHERE ACTNO='106'
 -- Give name of borrowers having amount greater than 5000 from borrow table.
 SELECT *  FROM BORROW WHERE AMOUNT>5000 
 --Give name of customers who opened account after date '1-12-95' from deposit table
 SELECT *  FROM DEPOSIT WHERE ADATE >'1995-12-01'
 -- Display name of customers whose account no is less than 105 from deposit table. 
 SELECT * FROM DEPOSIT WHERE ACTNO < 105
-- Display name of customer who belongs to either ‘NAGPUR’ or ‘DELHI’ from customer table. (USE OR & IN) 
SELECT * FROM CUSTOMERS WHERE CITY = 'NAGPUR' OR CITY = 'DELHI'
SELECT * FROM CUSTOMERS WHERE CITY IN ('NAGPUR','DELHI')
-- Display name of customers with branch whose amount is greater than 4000 and account no is less than 105 from deposit table. 
SELECT * FROM DEPOSIT WHERE AMOUNT > 4000 AND ACTNO<105
-- Find all borrowers whose amount is greater than equals to 3000 & less than equals to 8000 from borrow table.(USE AND & BETWEEN) 
SELECT * FROM BORROW
WHERE AMOUNT BETWEEN 3000 AND 8000
--Find all depositors who do not belongs to ‘ANDHERI’ branch from deposit table.
SELECT * FROM DEPOSIT WHERE BNAME NOT IN ('ANDHERI')
--Display Account No, Customer Name & Amount of such customers who belongs to ‘AJNI’, ‘KAROLBAGH’ Or ‘M.G. ROAD’ and Account No is less than 104 from deposit table.
 SELECT ACTNO,CNAME,AMOUNT FROM DEPOSIT WHERE BNAME IN  ('AJNI','KAROLBAGH''M.G. ROAD') AND ACTNO <=104 
 --Display all loan no, customer from borrow table does not belong to ‘VIRAR’ or ‘AJNI’ branch. (use NOT IN)
 SELECT * FROM BORROW WHERE BNAME NOT IN ('VIRAR','AJNI')
 --Display all the customer’s name other than ‘MINU’ from deposit table (Use: NOT, <>, !=)
 SELECT * FROM DEPOSIT WHERE CNAME !='MINU'
 SELECT * FROM DEPOSIT WHERE CNAME <> 'MINU'
 SELECT * FROM DEPOSIT WHERE NOT CNAME = 'MINU'
 --Display customer name from deposit table whose branch name is not available. 
 SELECT * FROM DEPOSIT WHERE CNAME IS NULL
 --Retrieve all unique branches using DISTINCT. (Use Branch Table)
 SELECT DISTINCT * FROM  BRANCH
 -- Retrieve first 50% record from borrow table. 
 SELECT TOP 50 PERCENT * FROM BORROW
 --Retrieve first five account number from deposit table.
 SELECT  TOP 5  ACTNO FROM DEPOSIT 

--Part–B:-- 

 --Display all the details of first five customers from deposit table.
 SELECT TOP 5 * FROM DEPOSIT
 --Display all the details of first three depositors from deposit table whose amount is greater than 1000. 
 SELECT TOP 3 * FROM DEPOSIT WHERE AMOUNT>1000
 --Display Loan No, Customer Name of first five borrowers whose branch name does not belongs to ‘ANDHERI’ from borrow table. 
 SELECT TOP 5 LOANNO,CNAME FROM BORROW WHERE BNAME NOT IN('ANDHERI')
 --Select all details with account numbers not in the range 105 to 109 in deposit table.
 SELECT * FROM DEPOSIT WHERE ACTNO NOT BETWEEN 105 AND 109 
 --Select all records from BORROW where the amount is greater than 1000 and less than or equal to 7000,and the loan number is between 250 and 600
 SELECT * FROM BORROW WHERE AMOUNT>1000 AND AMOUNT<=7000 AND LOANNO BETWEEN 250 AND 600.
 

 --PART-C:--

 --Display all the detail of customer who deposited more than 5000 without using * from deposit table. 
 SELECT BNAME,CNAME,ACTNO,AMOUNT,ADATE FROM DEPOSIT WHERE AMOUNT>5000
 --Retrieve all unique customer names with city. (Use Customer table) --
 SELECT DISTINCT CNAME,CITY FROM CUSTOMERS


