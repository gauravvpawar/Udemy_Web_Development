-- to undertand the difference between the delete and the truncate
create database myDB;

use myDB;

create table student(id int auto_increment, name varchar(100) , primary key(id));

insert into student(name) values('Gaurav') ,
								('Kaif'),
                                ('Umesh'),
                                ('Nitin');
                                
select * from student;

-- to delete the all the  data from table
delete from student;

insert into student(name) values('Ganesh'); -- it add the id 5

truncate table student;

insert into student(name) values('Rahul');-- it  add the value 1
select * from student;

drop table student;

drop database mydb;