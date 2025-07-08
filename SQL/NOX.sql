create database nox;
use nox;
create table employee(id int primary key, name varchar(50), salary int not null);
insert into employee (id,name,salary) values
(1,"Adam",25000),
(2,"Bob",35000),
(3,"Casey",40000);
select * from employee;



