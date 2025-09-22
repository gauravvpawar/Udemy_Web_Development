
-- to prractice the ddl comand
create Database myDB;

-- to use the database
use myDB;

-- create the employee table
create table employee(eid int(20), eemail varchar(100), epassword varchar(100) , edepartment varchar(100));

-- to show the table value
select * from employee;

-- to insert value in that table
-- to  single values
insert into  employee(eid,eemail, epassword,edepartment)
values(1, "gaurav@gmail.com" ,"gaurav@123" ,"Admin");

-- to insert multivalue in table
insert into employee(eid , eemail,epassword,edepartment)
values	(2, "Kaif@gmail.com", 'kaif@123','employee'),
		(3, 'Umesh@gmail.com' , 'umesh@123','HR'),
		(4, 'ganesh@gmail,com', 'ganesh@123','Tech Assistant');
	
-- 
select * from employee;

-- to perfrom the delete action when you want to delete the entire data from table you can use delete command
delete from employee;

-- when you want to delete the specific row by the clause of some condion
delete from employee where edepartment = 'Tech Assistant';

-- to update the employee value
update  employee set edepartment = 'Software developer' where eid = 2  ;

select * from employee;

-- to drop the table
drop table employee;

-- drop the database
drop database mydb;

