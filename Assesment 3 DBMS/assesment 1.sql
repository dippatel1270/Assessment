create table city
(
city_id int primary key,
city_name varchar(25) not null,
lat double not null,
longittude double not null,
country_id int not null,
foreign key (country_id) references country(id)
);

insert into city values (1,'Berlin',52.520008,13.404954,1);
insert into city values (2,'Belgrade',44.787197,20.457273,2);
insert into city values (3,'Zagreb',45.815399,15.4966568,3);
insert into city values (4,'New_york',40.730610,-73.975242,4);
insert into city values (5,'Los_Angeles',34.052235,-118.243683,4);
insert into city values (6,'Warsaw',52.237049,21.017532,5);

select * from city;

create table customer
(
id int unique not null,
customer_name varchar(25) not null,
city_id int not null,
customer_adderess varchar(25) not null,
next_call_date date,
ts_inserted TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
foreign key (city_id) references city(city_id)
);

insert into customer (id, customer_name, city_id, customer_adderess, next_call_date) values(1,'Jewelry Store',4,'Long Street 120','2009-01-21');
insert into customer (id, customer_name, city_id, customer_adderess, next_call_date) values(2,'Bakery',1,'Kurfürstendamm 25','2020-02-21');
insert into customer (id, customer_name, city_id, customer_adderess, next_call_date) values(3,'Café',1,'Tauentzienstraße 44','2020-01-21');
insert into customer (id, customer_name, city_id, customer_adderess, next_call_date) values(4,'Restaurant',3,'Ulica lipa 15','2020-01-21');

select * from customer;

create table country
(
id int primary key,
country_name varchar(50) not null,
country_name_eng varchar(50) not null,
country_code varchar(10) unique not null
);

insert into country values (1,'Deutschland','Germany','DEU');
insert into country values (2,'Srbija','Serbia','SRB');
insert into country values (3,'Hrvatska','Croatia','HRV');
insert into country values (4,'United States of America','United States of America','USA');
insert into country values (5,'Polska','Poland','POL');
insert into country values (6,'Espana','Spaine','ESP');
insert into country values (7,'Rossiya','Russia','RUS');

select * from country;

-- Task : 1 (join multiple tables using left join)
-- List all Countries and customers related to these countries.
-- For each country displaying its name in English, the name of the city customer is located in as 
-- well as the name of the customer. 
-- Return even countries without related cities and customers.

select
    country.country_name_eng as country_name,
    city.city_name,
    customer.customer_name
from 
    country
left join city on country.id = city.country_id
left join customer on city.city_id = customer.city_id;

-- Task : 2 (join multiple tables using both left and inner join)
-- Return the list of all countries that have pairs(exclude countries which are not referenced by any 
-- city). For such pairs return all customers.
-- Return even pairs of not having a single customer

select
    country.country_name_eng as country_name,
    city.city_name,
    customer.customer_name
from 
    country
inner join city on country.id = city.country_id
left join customer on city.city_id = customer.city_id;

