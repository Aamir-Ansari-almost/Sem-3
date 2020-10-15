SELECT * FROM Employee;

-- Calculate avg,min,max,total salary and no of emp in each dept.
SELECT d_no, AVG(salary) as avg_salary, MAX(salary) as min_salary, MIN(salary) as min_salary, SUM(salary) as total_salary, COUNT(*) as no_of_employees 
FROM Employee 
GROUP BY d_no;

-- Display dept no and number of emp for every dept those are earning salary more than 40K.
SELECT d_no, COUNT(*) as no_of_employees 
FROM Employee 
WHERE salary > 40000
GROUP BY d_no;

-- Display d_no, avg salary of department whose average salary is greater 40000
SELECT d_no, AVG(salary) as avg_salary 
FROM Employee 
GROUP BY d_no 
HAVING (AVG(salary) > 40000);

-- Display dno and no of emp of those dept where no of emp those are earning salary with-in the range 30k and 40k are atleast 2.
SELECT d_no, COUNT(*) as no_of_employee	
FROM Employee 
WHERE salary BETWEEN 30000 AND 40000 
GROUP BY d_no 
HAVING(COUNT(*) >= 2);

-- Display emp details of emp with Maximum salary in each dept
SELECT * 
FROM Employee 
WHERE salary IN (
					SELECT MAX(salary) 
					FROM Employee 
					GROUP BY d_no
			);

-- Display emp details of emp earning salary more than avg salary of dept for which they are working.
SELECT * 
FROM Employee AS e1
WHERE e1.salary > (
					SELECT AVG(salary) 
					FROM Employee AS e2 
					WHERE e1.d_no = e2.d_no
			);

-- Display the details of those dept which have emp working for them.
SELECT *
FROM Department AS d
WHERE EXISTS (
			SELECT * 
			FROM Employee AS e 
			WHERE e.d_no = d.d_no
		);

-- Display the details of those dept which have no emp working for them.
SELECT *
FROM Department AS d
WHERE NOT EXISTS (
				SELECT * 
				FROM Employee AS e 
				WHERE e.d_no = d.d_no
			);