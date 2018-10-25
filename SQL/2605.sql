--2605 - Representantes Executivos
select products.name, providers.name from
products INNER join categories on products.id_categories = categories.id 
INNER JOIN providers on products.id_providers = providers.id and categories.id =6;
