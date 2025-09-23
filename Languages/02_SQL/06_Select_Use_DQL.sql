-- perform the DQL(Data Query Language operation)

create database myDB;

use mydb;

create table student(rollno int(100) , name varchar(100) , city varchar(100));

insert into student(rollno , name , city) values
										(1 , 'Gaurav', 'gaurav@gmail.com') ,
                                        (2, 'Umesh' , 'umesh@gmail.com') ,
                                        (3, 'Pawan' , 'pawan@gmail.com');
                                        
-- select the all data from the database
select * from student;

-- select name only from student table
select name from student;

-- rename the column
alter table student rename column city to email;

select name,email,rollno from student;

-- add one column at table
alter table student add column city varchar(100);

-- update some value from table
update student
set city = 'Sambhajinagar' where name = 'Pawan';
update student
set city = 'Sambhajinagar' where name = 'Umesh';
update student
set city = 'Nagpur' where name = 'Gaurav';

select * from student;

-- to find the unique city from the table
select distinct city from student;

-- to find the all count of rows
select count(*) from student;

-- to find the all column count 
select count(city) from student;

-- to find the distict city column count
select count(distinct city) from student;

-- to add the null value to the table
insert into student(rollno , name , email,city)  values(4 , 'xyz' ,null , null);

select * from student;
-- find the count  for null table row count
select count(*) from student;

-- to count through the col
select count(email) from student;

-- to delete the specific row
delete from student where name = 'xyz';

-- to allow the limit while fetching data 
select * from student limit 2;

-- to access the recently uploaded data
select * from student order by rollno desc limit 2;

-- you can also acess the  data in the ascending order
select * from student order by rollno asc limit 2;

-- to use of as keyword
select count(rollno) as TotalStudent
from student ;

drop table student;

drop database mydb;
