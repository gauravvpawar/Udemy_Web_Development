
-- learn about the  keys
create database mydb;

use mydb;

create table registration(id int , name varchar(100) , dob date , adharnumber int);

-- to add the primary key to table
-- create table registration(id int , name varchar(100) , dob date , adharnumber int , primary key(id));

alter table registration add primary key(id);

insert into registration(id , name , dob , adharnumber) values(1 , 'Gaurav', '2003-07-10' , 12345678) ,
															  (2 , 'kaif' , '2003-08-21' , 56787909),
                                                              (3 , 'Umesh' , '2003-10-24',3456789);
                                                              
insert into registration(id , name, dob , adharnumber) value(0,'Vishant','2002-04-10',12345432);-- this also valid

delete from registration where id = 0;

select * from registration;

-- when you dont provide the id it does not add the  0 if it not present;
insert into registration(name, dob , adharnumber) value('Vishant','2002-04-10',12345432);

-- you have to implicit define it
insert into registration(id , name, dob , adharnumber) value(0,'Vishant','2002-04-10',12345432);

select * from registration;

-- null value also you cant add to the table if key is provided
-- the both column find the equal value for the  existing table to show the error
insert into registration(id , name, dob , adharnumber) value(null,'Radhe','2004-06-10',12386432);

-- to delete primary keyregistration
alter table registration drop primary key;

select* from registration;

-- to add the primary key two or more column
alter table registration add primary key(id , adharnumber);

insert into registration(id , name , dob , adharnumber) values(1 , 'Rahul' , '2001-02-02',12386432);
delete from registration where name = 'Rahul';

drop table registration;
drop database mydb;