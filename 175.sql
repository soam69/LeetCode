-- https://leetcode.com/problems/combine-two-tables/description/

select firstname,lastname,city,state from person left join address
on person.personId = address.personId;