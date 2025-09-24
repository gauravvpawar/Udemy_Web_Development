-- to create the type with with different data type

create database mydb;

use mydb;

create  table person(name varchar(100) , gender char(10), date_Of_Birth date , adhar_id int);

-- to drop the colum in  table
alter table person drop column date_of_Birth;

-- add one column
alter table person add column marks int(100);

-- to modify the existing size of column
alter table person modify column marks int(200);

-- to print the total number of sum of marks as the totalmarks from person
select sum(marks) as 'totalMarks' from person;

drop table person;

drop database mydb;