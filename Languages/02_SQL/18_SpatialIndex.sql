 -- practice for spacial indexes
 -- practice for when user enter the geological data 
 
 create database mydb;
 
 use mydb;
 
 create table user(id int , name varchar(100), userLocation Geometry not null , spatial index(userLocation));
 
insert into user(id , name , userlocation) values(1 , 'Gaurav' , ST_GeomFromtext('LineString(1 1 , 5 5)'));

select * from user;

insert into user(id , name , userlocation) values(3 , 'Nitin' , ST_GeomFromtext('LineString(1 8,7 3)'));

drop table user;

drop database mydb;