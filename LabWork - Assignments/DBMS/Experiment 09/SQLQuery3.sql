create procedure EmployeeSelect AS
SELECT * FROM Employee
GO;
EXEC EmployeeSelect

CREATE PROCEDURE EmpSelect @Fname varchar(30)
AS
SELECT * FROM Employee WHERE f_name=@Fname
GO
EXEC EmpSelect @Fname='James';

CREATE PROCEDURE selectCondition @Fname varchar(30), @Salary money
	AS
	SELECT * FROM Employee WHERE f_name=@Fname AND salary=@Salary
	GO
	EXEC selectCondition @Fname='Ramesh',@Salary=38000;