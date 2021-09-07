SELECT * FROM Employee;
SELECT * FROM Dependant;
SELECT * FROM Department;
SELECT * FROM Project;
SELECT * FROM Works_on;
SELECT * FROM Department_location;

-- Salary greater than 20,000
SELECT * FROM Employee WHERE salary > 20000;

-- Distinct ssn for employee who have dependant
SELECT DISTINCT e_ssn FROM Dependant;
	
-- First two dependants
SELECT TOP 2 * FROM Dependant;

-- Employee with salary between 10,000 and 30,000
SELECT * FROM Employee WHERE salary BETWEEN 10000 AND 30000;
	
-- Employee with name starting with A
SELECT * FROM Employee WHERE f_name LIKE 'A%';

-- Employee with name ending with A
SELECT * FROM Employee WHERE f_name LIKE '%a';

-- Employee with name ending with A
SELECT * FROM Employee WHERE f_name like '%[f,e]';

-- Employee in department 1 and 4
SELECT * FROM Employee WHERE d_no = 1 OR d_no = 4;

-- Employee working in research
SELECT * FROM Employee WHERE d_no = (SELECT d_no FROM Department WHERE d_name = 'Research');

-- Employee with more salary than a particular employee
SELECT * FROM Employee WHERE salary > (SELECT salary FROM Employee WHERE ssn = 123456789);

-- Employee with more salary than max of department 5
SELECT * FROM Employee WHERE salary > (SELECT MAX(salary) FROM Employee WHERE d_no = 5);

-- Employee with more salary than min of Administration department
SELECT * FROM Employee WHERE salary > (SELECT MIN(salary) FROM Employee WHERE d_no = (SELECT d_no FROM Department WHERE d_name = 'Administration'));

-- Employee with more salary than min of Administration or Research
SELECT * FROM Employee WHERE salary > (SELECT MIN(salary) FROM Employee WHERE d_no IN (SELECT d_no FROM Department WHERE d_name IN ('Administration', 'Research')));
