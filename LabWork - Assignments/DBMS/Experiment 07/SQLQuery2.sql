SELECT * FROM Employee;
SELECT * FROM Department;
SELECT * FROM Department_location;
-- (1) Write a query to create a view to display average salary of every department
CREATE VIEW average(d_no, avg_salary) AS
SELECT d_no, AVG(salary) 
FROM Employee
GROUP BY d_no;
SELECT * FROM average;

-- (2a) Write a query to retrieve employee details of employees those are earning salary more than the average salary of department no. 5 without using view
SELECT * 
FROM Employee 
WHERE salary > (SELECT AVG(salary) 
				FROM Employee 
				Where d_no = 5);

-- (2b) Write a query to retrieve employee details of employees those are earning salary more than the average salary of department no. 5 using view
CREATE VIEW salary_greater_avg_5 AS 
SELECT * 
FROM Employee 
WHERE salary > (SELECT AVG(salary) 
				FROM Employee 
				Where d_no = 5);
SELECT * FROM salary_greater_avg_5;

-- (3) Write a query to create a view of employee info which shows the ssn and department no. of every employee
CREATE VIEW ssn_and_dno AS 
SELECT ssn, d_no
FROM Employee
SELECT * FROM ssn_and_dno;

-- (4) Write a query to create a view of department info which shows dept name, dept id, average salary and no. of employees
CREATE VIEW department_info(d_name, d_no, avg_salary, no_employee) AS
SELECT d_name, d.d_no, AVG(salary), COUNT(*)
FROM Employee e JOIN Department d ON e.d_no = d.d_no
GROUP BY d.d_name, d.d_no;
SELECT * FROM department_info;

-- (5a) Write a query to retrieve employee details of employee those are earning salary more than the average salary of Research dept without using view 
SELECT * 
FROM Employee 
WHERE salary > (SELECT AVG(salary) 
				FROM Employee 
				WHERE d_no = (SELECT d_no 
								FROM Department 
								WHERE d_name = 'Research'
								)
				);

-- (5b)  Write a query to retrieve employee details of employee those are earning salary more than the average salary of Research dept using view
CREATE VIEW salary_greater_avg_research AS 
SELECT * 
FROM Employee 
WHERE salary > (SELECT AVG(salary) 
				FROM Employee 
				WHERE d_no = (SELECT d_no 
								FROM Department 
								WHERE d_name = 'Re	search'
								)
				);
SELECT * FROM salary_greater_avg_research;
