CREATE TABLE Employee (
	f_name VARCHAR(30) NOT NULL,
	m_name VARCHAR(30),
	l_name VARCHAR(30),
	ssn BIGINT NOT NULL,
	dob DATE,
	addr VARCHAR(50),
	sex CHAR(1),
	salary MONEY,
	super_ssn BIGINT NULL,
	d_no INT,

	PRIMARY KEY (ssn),
	FOREIGN KEY (super_ssn) REFERENCES Employee(ssn)
);
SELECT * FROM Employee;

CREATE TABLE Department (
	d_no INT NOT NULL,
	d_name VARCHAR(20) NOT NULL,
	mgr_ssn BIGINT,
	mgr_start_date DATE,

	PRIMARY KEY (d_no),
	FOREIGN KEY (mgr_ssn) REFERENCES Employee(ssn)
);
SELECT * FROM Department;

--Referencing d_no from department table 
ALTER TABLE Employee
ADD FOREIGN KEY (d_no) REFERENCES Department(d_no);

CREATE TABLE Department_location (
	d_no INT NOT NULL,
	d_location VARCHAR(20) NOT NULL,

	PRIMARY KEY (d_no, d_location),
	FOREIGN KEY (d_no) REFERENCES Department (d_no)
);
SELECT * FROM Department_location;


CREATE TABLE Project (
	p_no INT NOT NULL,
	p_name VARCHAR(20) NOT NULL,
	p_location VARCHAR(20) NOT NULL,
	d_no INT NOT NULL,

	PRIMARY KEY (p_no),
	FOREIGN KEY (d_no) REFERENCES Department (d_no)
);
SELECT * FROM Project;

CREATE TABLE Works_on (
	e_ssn BIGINT NOT NULL,
	p_no INT NOT NULL,
	hours_worked FLOAT,
	
	PRIMARY KEY (e_ssn, p_no),
	FOREIGN KEY (e_ssn) REFERENCES Employee (ssn),
	FOREIGN KEY (p_no) REFERENCES Project (p_no)
);
SELECT * FROM Works_on;

CREATE TABLE Dependant (
	e_ssn BIGINT NOT NULL,
	dependent_name VARCHAR(30) NOT NULL,
	dependent_sex CHAR(1),
	dependent_dob DATE,
	dependent_relation VARCHAR(20),

	PRIMARY KEY (e_ssn, dependent_name),
	FOREIGN KEY (e_ssn) REFERENCES Employee (ssn) 
);
SELECT * FROM Dependant;


-- Insert value in department table
INSERT INTO Department (d_no, d_name, mgr_ssn, mgr_start_date)
VALUES (
	5,
	'Research',
	NULL,
	'1988-05-22'
),
(
	4,
	'Administration',
	NULL,
	'1995-01-01'
),
(
	1,
	'Headquarters',
	NULL,
	'1981-06-19'
)
-- Insert foreign key mgs_ssn in Department Table
UPDATE Department SET mgr_ssn = 333445555
WHERE d_no = 5;

UPDATE Department SET mgr_ssn = 987654321
WHERE d_no = 4;

UPDATE Department SET mgr_ssn = 888665555
WHERE d_no = 1;

-----------------------------------------------------------------------------------------
-- Insert values in employee table
INSERT INTO Employee (f_name, m_name, l_name, ssn, dob, addr, sex, salary, super_ssn, d_no)
VALUES (
	'John', 'B', 'Smith',
	123456789,
	'1965-01-09',
	'731 Fondren, Houston, TX',
	'M',
	30000,
	NULL,
	5
),
(
	'Franklin', 'T', 'Wong',
	333445555,
	'1955-12-08',
	'638 Voss, Houston, TX',
	'M',
	40000,
	NULL,
	5
),
(
	'Alicia', 'J', 'Zelaya',
	999887777,
	'1968-01-19',
	'3321 Castle, Spring, TX',
	'F',
	25000,
	NULL,
	4
),
(
	'Jennifer', 'S', 'Wallace',
	987654321,
	'1941-06-20',
	'291 Berrym, Bellaire, TX',
	'F',
	43000,
	NULL,
	4
),
(
	'Ramesh', 'K', 'Narayan',
	666884444,
	'1962-09-15',
	'975 Fire Oak, Humble, TX',
	'M',
	38000,
	NULL,
	5
),
(
	'Joyce', 'A', 'English',
	453453453,
	'1972-07-31',
	'5361 Rice, Houston, TX',
	'F',
	25000,
	NULL,
	5
),
(
	'Ahmad', 'V', 'Jabbar',
	987987987,
	'1969-03-29',
	'980 Dallas, Houston, TX',
	'M',
	25000,
	NULL,
	4
),
(
	'James', 'E', 'Borg',
	888665555,
	'1937-11-10',
	'450 Stone, Houston, TX',
	'M',
	55000,
	NULL,
	1
)
 
-- Insert foreign key super_ssn in Emplyee table
UPDATE Employee SET super_ssn = 333445555
WHERE ssn = 123456789;

UPDATE Employee SET super_ssn = 888665555
WHERE ssn = 333445555;

UPDATE Employee SET super_ssn = 987654321
WHERE ssn = 999887777;

UPDATE Employee SET super_ssn = 888665555
WHERE ssn = 987654321;

UPDATE Employee SET super_ssn = 333445555
WHERE ssn = 666884444;

UPDATE Employee SET super_ssn = 333445555
WHERE ssn = 453453453;

UPDATE Employee SET super_ssn = 987654321
WHERE ssn = 987987987;

---------------------------------------------------------------------------------------------
-- Insert values in Department_location table
INSERT INTO Department_location(d_no, d_location)
VALUES (
	1, 'Houston'
),
(
	4, 'Stafford'
),
(
	5, 'Bellaire'
),
(
	5, 'Sugarland'
),
(
	5, 'Houston'
)
--------------------------------------------------------------------------------------------------
-- Insert values in Project table
INSERT INTO Project(p_no, p_name, p_location, d_no)
VALUES (
	1, 'ProjuctX', 'Bellaire', 5
),
(
	2, 'ProductY', 'Sugarland', 5
),
(
	3, 'ProductZ', 'Houston', 5
),
(
	10, 'Computerization', 'Stafford', 4
),
(
	20, 'Reorganisation', 'Houston', 1
),
(
	30, 'Newbenefits', 'Stafford', 4
)


-------------------------------------------------------------------------------------------------
-- Insert values in Works_on table
INSERT INTO Works_on (e_ssn, p_no, hours_worked)
VALUES (
	123456789, 1, 32.5
),
(
	123456789, 2, 7.5
),
(
	666884444, 3, 40.0
),
(
	453453453, 1, 20.0
),
(
	453453453, 2, 10.0
),
(
	333445555, 2, 10.0
),
(
	333445555, 3, 10.0
),
(
	333445555, 10, 10.0
),
(
	333445555, 20, 10.0
),
(
	999887777, 30, 30.0
),
(
	999887777, 10, 10.0
),
(
	987987987, 10, 35.0
),
(
	987987987, 30, 3.0
),
(
	987654321, 30, 20.0
),
(
	987654321, 20, 15.0
),
(
	888665555, 20, NULL
)
-----------------------------------------------------------------------------
--Insert values into Dependant table
INSERT INTO Dependant(e_ssn, dependent_name, dependent_sex, dependent_dob, dependent_relation)
VALUES (
	333445555, 'Alice',
	'F',
	'1986-04-05',
	'Daughter'
),
(
	333445555, 'Theodore',
	'M',
	'1983-10-25',
	'Son'
),
(
	333445555, 'Joy',
	'F',
	'1958-05-03',
	'Spouse'
),
(
	987654321, 'Abner',
	'M',
	'1942-02-28',
	'Spouse'
),
(
	123456789, 'Michael',
	'F',
	'1988-01-04',
	'Son'
),
(
	123456789, 'Alice',
	'F',
	'1988-12-30',
	'Daughter'
),
(
	123456789, 'Elizabeth',
	'F',
	'1967-05-05',
	'Spouse'
)




SELECT * FROM Employee;
SELECT * FROM Department;
SELECT * FROM Department_location;
SELECT * FROM Project;
SELECT * FROM Works_on;
SELECT * FROM Dependant;