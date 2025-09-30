
-- practice about the indexes

create database mydb;

use mydb;

create table student(id int , name varchar(100));

insert into student(id , name) values(1 , 'Gaurav'), 
									(2, 'Nitin'), 
                                    (3,'kaif'),
                                    (4 , 'Zayn');
                                    
-- to applies the  indexes on the table
create index sortname on student(name asc);

select name from studentl;
select * from student;

-- to apply the column as the unique index
create unique index unique_id on student(id desc);

select * from student;
select id from student; -- when you always access id it show in descreasingstudent

-- to test on the enter the unique data
insert into student(id , name) values(4 , "Pavan"); -- you cant enter
insert into student(id , name) values(5 , "Pavan"); -- correct one

-- to see the all indexes in table
show indexes from student;

select * from student;

-- to  use of like
select * from student where name like 'P%';

drop table  student;
drop database mydb;