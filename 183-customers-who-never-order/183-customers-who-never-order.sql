# Write your MySQL query statement below
select name as Customers
from CUSTOMERS
left join ORDERS
ON ORDERS.customerId = Customers.Id
where Orders.CustomerId IS NULL
