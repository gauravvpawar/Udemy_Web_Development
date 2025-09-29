create database mydb;

use mydb;

create table student(id int , name varchar(100) , dob date);

insert into student values(1 , 'Gaurav' , '2003-07-10');

insert into student values(2 , 'Pavan' , '2003-06-21') , 
							(3 , 'Kaif', '2003-7-25');
                            
                            
select * from student;

create table cities(id int , city varchar(100));

insert into cities(id, city) values(1 , 'Chandrapur') ,
									(2 , 'Beed');
                                    
select * from cities;

create table state(id int , state varchar(100));

alter table state rename to states;

insert into states(id , state) values(1 , 'Maharastra');

select * from states;

-- to find the all values of table  by  using inner join id city and states
select student.id , student.name ,student.dob, cities.city , states.state from student 
 inner join 
cities on student.id = cities.id 
inner join states
on cities.id = states.id;


-- drop the table
drop table student , cities, states;
drop database mydb;
