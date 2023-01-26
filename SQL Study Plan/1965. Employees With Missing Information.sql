# Write your MySQL query statement below
select Employees.employee_id from Employees
left outer join Salaries
on Salaries.employee_id=Employees.employee_id
where Salaries.salary is null
union
select Salaries.employee_id from Salaries
left outer join Employees
on Salaries.employee_id=Employees.employee_id
where Employees.name is null
order by employee_id;
