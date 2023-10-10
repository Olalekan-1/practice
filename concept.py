from  datetime import datetime
from uuid import uuid4

class Base:
    def __init__(self):
        self.id = str(uuid4())
        self.created_at = str(datetime.now())
        self.updated_at =  self.created_at

    def updated_time(self):
        self.updated_at = self.updated_at
        return self.updated_at

    def __str__(self):
        rep = "[{}] ({}) {}".format(self.__class__.__name__, self.id, self.__dict__)
        print(rep)

    def to_dict(self):
        return self.__dict__






"""
base = Base()
print(base.id)
print(base.created_at)
base.name  = "Olalekan"
print(base.updated_time())
base.age = 37
print(base.age)
print(base.updated_time)
print(base)
base_dict = base.to_dict()
for key in base_dict.keys():
    print("\t[{}]-> [{}]\n".format(key, base_dict[key]))
"""
base = Base()
print(base.created_at)
base.name = "olalekan"
#cbase.updated_time()
print(base.updated_at)

