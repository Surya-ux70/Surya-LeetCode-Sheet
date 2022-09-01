select name as customers 
from customers
left join orders
on Orders.customerId = Customers.id
where Orders.customerId is null