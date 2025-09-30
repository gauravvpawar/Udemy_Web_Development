-- practice for primary indexes

create database mydb;

create table registration(id int , name varchar(100) , email varchar(100));

--  it wont work
 -- create primary index Numbers from registration(id asc); 

alter table registration add primary key(id);

insert into registration(id ,name, email) values(1 , 'Gaurav' , 'gaurav@gmail.com') , 
												(2, 'kaif' ,'kaif@gmail.com') , 
                                                (3 ,'Nitin' , 'nitin@gmail.com');
                                                
                                                
insert into registration values(3 , 'Umesh' , 'umesh@gmail.com'); -- you cant enter the repeat index

create index register_no on registration(id); -- by default its value is in ascending

show indexes from registration;

select * from registration;

select id from registration;

-- to modify the indexes action to desc then you  have to drop first the index reference
alter table registration drop index register_no;

show indexes from registration;

drop table registration;
drop database mydb;