
-- task 1
-- insert 4 data in the employee table have column id , name , age , department , salary
-- retrieve details of employee from IT department
-- find employee who earning more that 50000 
-- display all employee data sorted age in descending order
-- retrieve all employee ordered by department ascending and salary descending

create database myDB;

use mydb;

create table employee(employee_id int , name varchar(100) , age int , department varchar(100), salary int);

insert into employee(employee_id , name , age ,department , salary) values
													(1, 'Alice' , 30 , 'HR', 50000) ,
                                                    (2 , 'Bob' , 25 , 'IT' , 60000) ,
                                                    (3 , 'Charlie' , 28 , 'IT',55000) ,
                                                    (4 , 'David' , 35 , 'HR' , 65000) ,
                                                    (5 , 'Emma', 26, 'Finance' , 48000) ;
                                                    
-- 1 task
select * from employee where department = 'IT';

-- 2 task
select * from employee where salary > 50000;

-- 3 task
select * from employee order by age desc;

-- 4 task
select * from employee order by department asc , salary desc;
select * from employee order by  salary desc , department asc;

drop table employee;

drop database mydb;