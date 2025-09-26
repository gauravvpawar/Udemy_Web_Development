
create database mydb;

use mydb;

create table student(id int , name varchar(100) , email varchar(100));

insert into student(id , name , email) values(1, 'Gaurav' , 'Gaurav@gmail.com'), 
											  (2, 'Kaif' , 'kaif@gmail.com'),
											  (3 , 'Rahul' , 'Rahul@gmail.com');
                                              
create table adress(student_id int, city varchar(100) , state  varchar(100));

insert into adress(student_id , city , state) values(1 , 'Nagpur' ,'MH') ,
													(2 , 'Nanded' , 'MH');
                                                    
                                                    
-- to rename the table
alter table adress rename to address;

-- to perform the joins query
select * from student
inner join 
address on
student.id = address.student_id;

--  to reduce the column redundancy
select student.id , student.name , student.email, address.city , address.state from 
student
inner join address
on
student.id = address.student_id;

-- to find the  left table matching values
select student.id , student.name , student.email, address.city , address.state from 
student
left join address
on
student.id = address.student_id;

-- to find the answer for the self join 
select id , name, email , city , state 
from student 
join address on 
student.id = address.student_id;

drop table student;
drop table address;
drop database mydb;