# class declaration
class Anggota:
    
    __id = 0
    __name = ""
    __bidang = ""
    __partai = ""
    
    def __init__(self, id = 0, name = "", bidang = "", partai = ""):
        self.__id = id
        self.__name = name
        self.__bidang = bidang
        self.__partai = partai
        
    # Getter and Setter. #
    
    # Get id.
    def get_id(self):
        return self.__id
    
    # Set id.
    def set_id(self, id):
        self.__id = id
    
    # Get name.
    def get_name(self):
        return self.__name
    
    # Set name.
    def set_name(self, name):
        self.__name = name
    
    # Get bidang.
    def get_bidang(self):
        return self.__bidang
    
    # Set bidang.
    def set_bidang(self, bidang):
        self.__bidang = bidang
        
    # Get partai.
    def get_partai(self):
        return self.__partai
    
    # Set partai.
    def set_partai(self, partai):
        self.__partai = partai