-- ddl Command it stand for the Data Definition Language
-- it include create ,alter , rename , drop ,truncate

-- create the database
create database myDB;

-- to rename the database but it is remove by the authorities
-- Rename database myDB to myDatabase;

-- to use the database;
use myDB;

-- to create the table
create table Student(id int(200) , name varchar(100) , email varchar(100));

-- if you want to remove the all the data from the table and table schema remain it
truncate table Student;

-- to drop the table 
drop table Student;

-- to delete the database
drop database myDb; 