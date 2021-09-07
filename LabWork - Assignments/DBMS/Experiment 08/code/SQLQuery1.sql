select f_name, m_name, l_name, d_name from (Employee as e left outer join Department as
d on e.d_no=d.d_no);select f_name, m_name, l_name, d_name from (Employee as e right outer join Department
as d on e.d_no=d.d_no);select f_name, m_name, l_name, d_name from (Employee as e full outer join Department as
d on e.d_no=d.d_no);SELECT * FROM Employee;SELECT * FROM Department;