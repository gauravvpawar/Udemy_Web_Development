-- keyword use in sql it mostly use for the where clause
create database mydb;

use mydb;

create table student(rollno int , name varchar(100) , city varchar(100)); 

insert into student(rollno , name , city) values
										(1 , 'Gaurav' , 'Nagpur') , 
                                        (2 , 'Pawan' , 'Sambhajinagar') ,
                                        (3 , 'Nitin' , 'Jalgaon') ,
                                        (4 , 'Umesh' ,'Jalna') ,
                                        (5 , 'Ganesh' , 'Sambhajinagar');
                                        
                                        
                                        
select * from student;

insert into  student values (6 , 'kaif' , null);

select * from student where city is null;
select * from student where city is not null;

-- to find the student city  name is sambhajinar and nagpur
select * from student where city='Sambhajinagar' or city ='Nagpur';

-- same use by in
select * from student where city in ('Sambhajinagar' , 'Nagpur');

-- use of and
select * from student where name = 'Gaurav' and city = 'Nagpur';

-- or for multiple
select * from student where name = 'Gaurav' or city = 'Sambhajinagar';

-- order by 
select * from student order by name asc;

-- desc order
select * from student order by city desc;
-- for asc start through null 

-- to fetch the random data from table
select * from student order by rand() limit 4;

drop table student;

drop database mydb;