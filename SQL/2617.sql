select p.name as name,f.name as name
from products as p join providers as f on p.id_providers=f.id where f.name='Ajax SA';
