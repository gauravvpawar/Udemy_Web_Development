
-- to use of unique key

create database mydb;

use mydb;

create table Person(id int , name varchar(100), contactNumber int);

alter table Person add unique key(contactNumber);

insert into Person(id , name , contactNumber) values(1 , 'Gaurav' , null); -- you can provide one null value
insert into Person(id , name , contactNumber) values(2 , 'Kaif' , 11223344);

select * from Person;

-- to print the table by the order by 
select * from Person order by id asc;

insert into  Person values(3 , 'Pawan' , 11223344); -- you cant enter the repeat value again

drop table Person;
drop database  mydb;
