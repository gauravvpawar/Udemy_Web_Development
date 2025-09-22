-- to perform alter action
create database mydb;

use mydb;

create table student(sid int, sname varchar(100));

-- to add the key for the table
alter table student modify sid int auto_increment primary key ;

insert into student(sname) values('Gaurav'),
								('Pawan') ,
                                ('Umesh'),
                                ('kaif');
                                
select * from student;

-- to upadate the value
update student 
set sname = 'Kaif' where sid=4;

-- to rename the table 
alter table student rename to student_info;
alter table student_info rename to student;

select * from student_info;
select * from student;

-- to add the column
alter table student add column email varchar(100);-- default values after adding column is null

-- to rename the column
alter table  student rename column email to semail;

-- to update the values
update student 
set semail = 'gaurav@gmail.com' where sname='Gaurav';
update student 
set semail = 'umesh@gmail.com' where sname='Umesh';
update student
set semail = 'pawan@gmail.com' where sname = 'Pawan';

select * from student;

-- to add the column
alter table student add column phone_number int;

-- to change the type of column
alter table student modify column phone_number varchar(100);

drop table student;

drop database mydb;
