
create database mydb;

use mydb;

select find_Square(5);

-- to check the number even or odd
select checkNumber(100);

create table Employee(id int  , name varchar(100) , salary int);

insert into employee(id , name , salary) values(1 , 'Gaurav' , 20000) ,
												(2 , 'Umesh' , 25000) , 
                                                (3 , 'Kaif' , 30000) ,
                                                (4 , 'Rahul' , 50000);
                                                
                                                
select * from Employee;

show function status;

-- create the stored function to find the highest salary 
select getHighestSalary();

-- by using the switch case in sql
select checkSalary(25000);

select checkSalary(getHighestSalary());

drop table employee;

drop database mydb;