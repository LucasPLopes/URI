--2609 - Produtos por Categorias
select c.name, sum(p.amount) as sum from
products as  p join categories
as  c on p.id_categories=c.id group by c.name;
