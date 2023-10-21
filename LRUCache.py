from collections import OrderedDict
class LRUCache:
      
    #Constructor for initializing the cache capacity with the given value.  
    def __init__(self,cap):
        self.cap = cap
        self.d = OrderedDict()
        
        
    #Function to return value corresponding to the key.
    def get(self, key):
        if key in self.d:
            val = self.d.pop(key)
            self.d[key] = val
            return self.d[key]
        else:
            return -1
        
        
    #Function for storing key-value pair.   
    def set(self, key, value):
        if key in self.d:
            self.d.pop(key)
            
        else:
            if len(self.d) == cap:
                self.d.popitem(last = False)
        self.d[key] = value

