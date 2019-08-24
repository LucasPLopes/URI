select c.name as name ,r.rentals_date as rentals_date
from customers as c join rentals as r 
on c.id=r.id_customers
where r.rentals_date between '2016-09-01' and '2016-09-30';
