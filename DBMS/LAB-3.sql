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
 