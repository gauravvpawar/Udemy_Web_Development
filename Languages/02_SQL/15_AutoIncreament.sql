
-- use of auto increament
create database mydb;

use mydb;

-- when you provide the auto_increament you always need to provide the primary key of table
create table Registration(id int auto_increment , name varchar(100) , adharNumber int , primary key(id));

insert into Registration values(1, 'Gaurav' , 1122334455);

select * from  registration;

-- set the auto_increament start from 100;
alter table registration auto_increment = 100;

insert into registration(name, adharNumber) values('Umesh' , 99887766);

select * from registration;

truncate table  registration;

drop table registration;

drop database mydb;