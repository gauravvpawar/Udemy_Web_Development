 -- to more about the like keyword in sql
 
 create database mydb;

use mydb;

create table Person(id int , name varchar(100) , age char(1));

alter table Person modify column id int Auto_Increment primary key ; 

--  rename the column
alter table Person rename column age to gender;

insert into Person(name , gender)  values('Gaurav' , 'M') , 
										('kaif', 'M') , 
                                        ('Umesh', 'M') ,
                                        ('Shivam', 'M');
									
select *  from Person;

-- serach by the like 
-- name start with g
select * from Person where name like 'g%';

-- name end with v
select * from Person where name like '%v';

--  name start with s and end with v
select *  from Person where name like 's%m';

-- same find by the in 
select  *  from Person where name in ('gaurav' , 'Kaif' , 'Nitin');

drop table Person;
drop database mydb;